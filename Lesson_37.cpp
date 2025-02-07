/* Sort an array with bubble sort algorithm */
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void sort(int array[], int size);

int main() 
{

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array)
    {
        cout << element << " " << endl;
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp; // Temporary variable for swapping elements
    for(int i = 0; i < size -1; i++) // Outer loop: Iterates through the array (size - 1) times
    {
        for(int j = 0; j < size -i -1; j++) // Inner loop: Compares adjacent elements and swaps them if necessary
        {
            if(array[j] > array[j+1]) // If the current element is greater than the next element, swap them
            {
                temp = array[j]; // Stores the current element in temp
                array[j] = array[j + 1]; // Moves the smaller element to the left
                array[j + 1] = temp; // Places the larger element in the correct position
            }
        }
    }
}