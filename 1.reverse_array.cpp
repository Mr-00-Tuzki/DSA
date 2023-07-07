#include <iostream>
using namespace std;

//Approach-1--Iterative way
/*
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
*/

//Approach-2--recursive way
void reverseArray(int arr[],int start,int end)
{
    //base condition
    if(start>=end)
    {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    //recursive call
    reverseArray(arr,start+1,end-1);
    

}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    print(arr, size);
    reverseArray(arr, 0, size - 1);
    print(arr, size);

    return 0;
}