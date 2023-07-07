#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int num = 0;
    while (num <= end)
    {
        if (arr[num] == 0)
        {
            {
                swap(arr[num], arr[start]);
                num++;
                start++;
            }
        }
        else if (arr[num] == 2)
        {
            {
                swap(arr[num], arr[end]);
                end--;
            }
        }
        else
        {
            num++;
        }
    }
}

int main()
{   int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}