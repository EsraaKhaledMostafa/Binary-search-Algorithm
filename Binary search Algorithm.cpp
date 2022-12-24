#include <iostream>
using namespace std;

int BinarySearch(int* arr, int size, int data)
{
    int min_index = 0, max_index = size - 1;
    int mid_index = (min_index + max_index) / 2;

    while (min_index <= max_index)
    {
        if (data == arr[mid_index])
        {
            return mid_index;
        }
        else if (data > arr[mid_index])
        {
            min_index = mid_index + 1;
        }
        else
        {
            max_index = mid_index - 1;
        }
        mid_index = (min_index + max_index) / 2;
    }
    return -1;
}



int main()
{
    int array[] = {10,20,30,40,50,60};
    cout << BinarySearch(array, 6, 30) << endl;

    

}