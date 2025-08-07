#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const float GRAVITY = 0.5f;
const float JUMP_STRENGTH = -10.f;
const float PIPE_SPEED = 3.f;
const int PIPE_SPACING = 150;

struct Pipe {
    sf::RectangleShape upper;
    sf::RectangleShape lower;
};

void resetPipes(std::vector<Pipe>& pipes, int startX) {
    for (size_t i = 0; i < pipes.size(); ++i) {
        float gapY = static_cast<float>(rand() % (WINDOW_HEIGHT - PIPE_SPACING - 100) + 50);
        pipes[i].upper.setPosition(startX + i * 200, 0);
        pipes[i].lower.setPosition(startX + i * 200, gapY + PIPE_SPACING);

        pipes[i].upper.setSize(sf::Vector2f(50, gapY));
        pipes[i].lower.setSize(sf::Vector2f(50, WINDOW_HEIGHT - gapY - PIPE_SPACING));
    }
}

bool checkCollision(const sf::Sprite& bird, const std::vector<Pipe>& pipes) {
    for (const auto& pipe : pipes) {
        if (bird.getGlobalBounds().intersects(pipe.upper.getGlobalBounds()) ||
            bird.getGlobalBounds().intersects(pipe.lower.getGlobalBounds())) {
            return true;
        }
    }
    return bird.getPosition().y < 0 || bird.getPosition().y > WINDOW_HEIGHT;
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Flappy Bird");
    window.setFramerateLimit(60);

    // Bird
    sf::Texture birdTexture;
    birdTexture.loadFromFile("bird.png"); // Use any small bird texture
    sf::Sprite bird(birdTexture);
    bird.setPosition(WINDOW_WIDTH / 4, WINDOW_HEIGHT / 2);

    float birdVelocity = 0.f;

    // Pipes
    std::vector<Pipe> pipes(4);
    for (auto& pipe : pipes) {
        pipe.upper.setFillColor(sf::Color::Green);
        pipe.lower.setFillColor(sf::Color::Green);
    }
    resetPipes(pipes, WINDOW_WIDTH);

    // Game loop
    bool gameOver = false;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space && !gameOver) {
                birdVelocity = JUMP_STRENGTH;
            }
        }

        // Update
        if (!gameOver) {
            birdVelocity += GRAVITY;
            bird.move(0, birdVelocity);

            for (auto& pipe : pipes) {
                pipe.upper.move(-PIPE_SPEED, 0);
                pipe.lower.move(-PIPE_SPEED, 0);
                if (pipe.upper.getPosition().x + pipe.upper.getSize().x < 0) {
                    float gapY = static_cast<float>(rand() % (WINDOW_HEIGHT - PIPE_SPACING - 100) + 50);
                    pipe.upper.setPosition(WINDOW_WIDTH, 0);
                    pipe.lower.setPosition(WINDOW_WIDTH, gapY + PIPE_SPACING);

                    pipe.upper.setSize(sf::Vector2f(50, gapY));
                    pipe.lower.setSize(sf::Vector2f(50, WINDOW_HEIGHT - gapY - PIPE_SPACING));
                }
            }

            if (checkCollision(bird, pipes)) {
                gameOver = true;
            }
        }

        // Draw
        window.clear(sf::Color::Blue);

        for (const auto& pipe : pipes) {
            window.draw(pipe.upper);
            window.draw(pipe.lower);
        }
        window.draw(bird);

        window.display();
    }

    return 0;
}
