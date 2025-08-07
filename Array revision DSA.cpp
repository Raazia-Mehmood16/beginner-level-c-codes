#include<iostream>
using namespace std;
//to copy array
template<typename T>
T* CopyArray(T* source, size_t s)
{
    T* copy = new T[s];
    for (size_t i = 0; i < s; i++)
    {
        *(copy + i) = *(source + i);
    }
    return copy;
}
// Reverse array                           
template <class T>
void ReverseAray(T *A, size_t s)
{
    for (size_t i = 0; i < s / 2; ++i)
    {
        T temp = *(A + i);
        *(A + i) = *(A + (s - i - 1));
        *(A + (s - i - 1)) = temp;
    }
}

// Shift zeros to end
template<typename T>
void ShiftZero(T *A, size_t s)
{
    size_t j = 0;
    for (size_t i = 0; i < s; i++)
    {
        if (*(A + i) != 0)
        {
            *(A + j) = *(A + i);
            j++;
        }
    }
    while (j < s)
    {
        *(A + j) = 0;
        j++;
    }
}

// Dynamic insertion at index
template<typename T>
T* DynamicInsertion(T* A, size_t& s)
{
    size_t Ind;
    T value;

    cout << "Please let me know the index number on which u wanna insert value : ";
    cin >> Ind;

    while (Ind > s || Ind < 0) {
        cout << "Sorry!! You Entered Invalid Index.\nPlease Try AGAIN\n";
        cout << "Please let me know Again the index number on which u wanna insert value : ";
        cin >> Ind;
    }

    cout << "Now kindly let me know the value u wanna insert on " << Ind << " index : ";
    cin >> value;

    T* newA = new T[s + 1];

  
    for (size_t i = 0; i < Ind; i++)
        *(newA + i) = *(A + i);

    *(newA + Ind) = value;
    for (size_t i = Ind; i < s; i++)
        *(newA + i + 1) = *(A + i);

    delete[] A;
    s += 1;
    return newA;
}
//to rotate array 
template<class T>
T* RotateArray(T* A, size_t s)
{
    size_t Ind;
    cout << "Please Let me the Index numder from which u wanna rotate : ";
    cin >> Ind;
    while (Ind > s || Ind < 0) {
        cout << "Sorry!! You Entered Invalid Index.\nPlease Try AGAIN\n";
        cout << "Please let me know Again the index number  which u wanna rotate array from left : ";
        cin >> Ind;
    }
    T* rotatearray = new T[s];
    size_t j = 0;
    //copy form Ind to s
    for (size_t i = Ind; i < s; i++)
    {
        *(rotatearray + j) = *(A + i);
        j++;
    }
    //copy from 0 to Ind-1
    for (size_t i = 0; i < Ind; ++i)
    {
        *(rotatearray + j) = *(A + i);
        j++;
    }
    return rotatearray;

}
//Linear Search 
template <class T>
void LinearSearch(T* A, size_t s)
{
    T value;
    cout << "Enter a number u want to search : ";
    cin >> value;
    for (size_t i = 0; i < s; ++s)
    {
        if (*(A + i) == value) cout << "Number " << value << " is Found in array.\n";
        else cout << "Sorry !! Number " << value << " is not found in array.\n";
    }
}
// Display function
template<typename T>
void display(T A, size_t s)
{
    cout << "====Array " << s << " Elements are : \n";
    for (size_t i = 0; i < s; i++)
    {
        cout << (*(A + i)) << " ";
    }
    cout << endl;
}
//main 
int main()
{
    size_t s = 5;
    int* array = new int[s];

    cout << "Enter " << s << " Elements of Array : ";
    for (size_t i = 0; i < s; i++)
    {
        cin >> *(array + i);
    }
    //to copy array 
    int* temp = CopyArray<int>(array, s);
    cout << "===ORIGNAL===\n";
    display(array, s);
    //to reerse array
    ReverseAray<int>(array, s);
    cout << "===REVERSED===\n";
    display(array, s);
    //to copy orignal array
    array = CopyArray<int>(temp, s);
    //to shift all zeros at the end indexes
    ShiftZero<int>(array, s);
    cout << "===SHIFT ZERORS AT THE END===\n";
    display(array, s);
    //to copy orignal array
    array = CopyArray<int>(temp, s);
    //to insert dynamic value at specific index
    cout << "===Dynamic Insertion specific index===\n";
    array = DynamicInsertion<int>(array, s);
    //to copy new array 
    temp = CopyArray<int>(array, s);
    display(array, s);
    //to rotate array by specific indexes
    cout << "===Rotate Array from specific Indexs===\n";
    array = RotateArray<int>(array, s);
    display(array, s);
    //to copy again new array
    array = CopyArray<int>(temp, s);
    //to do linear search
    cout << "===Linear Search for specific value===\n";
    LinearSearch(array, s);
    delete[]temp;
    delete[] array;
    return 0;
}

