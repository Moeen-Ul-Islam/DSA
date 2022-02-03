#include <iostream>
using namespace std;

int firstOcc(int[], int, int);
int lastOcc(int[], int, int);

main()
{
    int arr[] = {1, 3, 3, 4, 5, 6, 7, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int firstOccur = firstOcc(arr, len, key);
    int lastOccur = lastOcc(arr, len, key);

    cout<<"The total number of occurences of "<<key<<": "<<(lastOccur - firstOccur) + 1<<endl;
}
//first occurence of the key
int firstOcc(int arr[], int len, int key)
{
    int start = 0, end = len - 1, mid, ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
            
        else if (key > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }
return ans;
}
//last occurence of the key
int lastOcc(int arr[], int len, int key)
{
    int start = 0, end = len - 1, mid, ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
            
        else if (key > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }
return ans;
}
