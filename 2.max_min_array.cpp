#include <iostream>
using namespace std;

//Approach-1
/*
void sort(int arr[],int start,int end,int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }

    }
}*/

//Approach-2
int getResult(int arr[], int n)
{
    int min = 0, max = 0;
    // //if the array is empty
    // if(n==0)
    // {
    //     cout<<"empty"<<endl;
    // }
    if (n == 1)
    {
        min = max = arr[0];
    }
    if(arr[0]>arr[1])
    {
        min = arr[1];
        max = arr[0];
    }
    else
    {
        min = arr[0];
        max = arr[1];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Maximum element in the array is: " << max << endl;
    cout << "Minimum element in the array is: " << min << endl;
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
    int arr[6] = {3, 10, 28, 2, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << getResult(arr, size) << endl;
    // print(arr,size);
    // sort(arr,0,size-1,size);
    // print(arr,size);
    // cout<<endl;
    // cout<<"Minimum element in the array is: "<<arr[0]<<endl;
    // cout<<"Maximum element in the array is: "<<arr[size-1]<<endl;

    return 0;
}