import speech_recognition as sr
import pyttsx3
import pywhatkit
import os

# Speak function
engine = pyttsx3.init()
def speak(text):
    engine.say(text)
    engine.runAndWait()

# Listen function
def listen():
    recognizer = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        audio = recognizer.listen(source)
        try:
            command = recognizer.recognize_google(audio)
            return command.lower()
        except:
            return "Sorry, I didn't get that."

# Main logic
speak("Hello! I am your assistant. How can I help?")
command = listen()

if 'youtube' in command:
    speak("Opening YouTube...")
    pywhatkit.playonyt("open youtube")
elif 'message' in command:
    speak("Sending a WhatsApp message")
    pywhatkit.sendwhatmsg("+923xxxxxxxxx", "Hello from my assistant!", 15, 0)  # 24-hr format
elif 'open notepad' in command:
    os.system("notepad.exe")
elif 'close notepad' in command:
    os.system("taskkill /f /im notepad.exe")
else:
    speak("Sorry, I didn't understand.")
