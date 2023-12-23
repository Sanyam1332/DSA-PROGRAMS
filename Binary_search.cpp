#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int item)
{
    int beg = 0;
    int end = size - 1;
    int mid = (beg + end) / 2;
    while (beg <= end)
    {
        if (arr[mid] == item)
        {
            return mid;
        }

        // For right-hand side
        if (arr[mid] < item)
        {
            beg = mid + 1;
        }
        // For left-hand side
        else
        {
            end = mid - 1;
        }

        mid = (beg + end) / 2;
    }
    return -1;
}

int main()
{
    int odd[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int item;
    cin >> item; // That is to be searched
    int index = binary_search(odd, 10, item);
    cout << "Index of " << item << " "
         << "is:" << index;
    return 0;
}