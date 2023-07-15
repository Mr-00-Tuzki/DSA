#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<int> FindUnion(int nums1[], int nums2[], int n, int m)
{
    set<int> s;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        s.insert(nums1[i]);
    for (int i = 0; i < m; i++)
        s.insert(nums2[i]);
    for (auto &it : s)
        Union.push_back(it);
    return Union;
}

vector<int> FindIntersection(int nums1[], int nums2[], int n, int m)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    sort(nums1, nums1 + n);
    sort(nums2, nums2 + m);
    while (i < n && j < m)
    {
        // this will help to remove the duplicate entries
        if (i > 0 && nums1[i] == nums1[i - 1])
        {
            i++;
            continue;
        }
        // helps to push the elements in the array
        if (nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        // increments if element of the other array is smaller
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()

{
    int n = 10, m = 7;
    int nums1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums2[] = {2, 3, 4, 4, 5, 11, 12};
    //Union
    vector<int> Union = FindUnion(nums1, nums2, n, m);
    cout << "Union of Nums1 and Nums2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    cout << endl;
    //Intersetion
    vector<int> Intersection = FindIntersection(nums1, nums2, n, m);
    cout << "Intersection of Nums1 and Nums2 is  " << endl;
    for (auto &val : Intersection)
        cout << val << " ";
    return 0;
}
