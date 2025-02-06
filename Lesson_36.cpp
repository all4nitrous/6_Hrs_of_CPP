/* Lesson on searching arrays for elements */
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int searchArray(std::string array[], int size, std::string element); // Function prototype for searchArray: it takes an array of strings, its size, and the element to search for

int main() 
{

    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]); // Calculates the size of the array by dividing the total memory size of the array by the size of a single element in the array
    int index; // Variable to store the index of the found element
    std::string myFood;

    cout << "Enter element to search for: " << endl;
    std::getline(cin, myFood); // Reads the user's input (including spaces) into myFood

    index = searchArray(foods, size, myFood); // Calls the searchArray function to find the index of the user's input in the array

    if(index != -1) // Checks if the element was found in the array by saying *not a negative return*
    {
        cout << myFood << " is at index " << index << endl;
    }
    else {
        cout << myFood << " is not in the array" << endl;
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element) // Loops through the array to find the specified element
{

    for(int i = 0; i < size; i++) // Iterates through each element in the array
    {
        if(array[i] == element) {
            return i; // If the current element matches the search element, return the index
        }
    }

    return -1; // Returns something not found

}