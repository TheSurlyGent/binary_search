

#include <iostream>


int BinarySearch(int array[], int size, int target)
{
    int first = 0;
    int last = size - 1;

    

    while (first <= last)
    {
        int mid = (first+last)/2;
        int midValue = array[mid];

        if (target == midValue)
        {
            return mid;
        }
        else if (target < midValue)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
 
    return -1;
}
int main()  

{                 // 0, 1, 2, 3, 4, 5, 6, 7
    int array[] = { 11,23,34,45,56,67,78,89 };
    int target;
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";

    }
    std::cout << "\n";
    std::cout << "Find a number \n";
    std::cin >> target;
    int result;
    result = BinarySearch(array, size, target);
    
    for (int i = 0; i < size; i++) //  8 < 8 != T
        
    {
        std::cout << array[i] << " ";
        
    }
    std::cout << "\n";
    for (int j = 0; j < size; j++)
    {
        std::cout<< " "<< j << " ";
    }
    std::cout << "\nYour number is at index "<<result;
}

