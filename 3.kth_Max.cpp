#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findKthMaxElement(vector<int> &arr, int k)
{

    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    // Check if k is within the valid range
    if (k >= 1 && k <= arr.size())
    {
        // Return the kth maximum element
        return arr[k-1];
    }

    // Return -1 if k is out of range
    return -1;
}

int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(4);
    int k = 3;

    int kthMaxElement = findKthMaxElement(arr, k);

    if (kthMaxElement != -1)
    {
        cout << "The " << k << " maximum element is: " << kthMaxElement << endl;
    }
    else
        cout << "Invalid value of k." << endl;

    return 0;
}
