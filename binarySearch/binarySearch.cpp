#include <iostream>
using namespace std;

int binarySearch(int[], int, int);

main()
{
    int arr[] = {3, 4, 9, 20, 21, 31};
    int key = 20;
    int len = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, len, key);

    cout << "Element found at " << result;
    return 0;
}

//binary search funtion
int binarySearch(int arr[], int len, int key)
{
    int start = 0;
    int end = len - 1;
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        cout << mid << endl;
        if (key == arr[mid])
            return mid;

        if (key > arr[mid])
            start = mid + 1;

        else if (key < arr[mid])
            end = mid - 1;
    }
    return -1;
}