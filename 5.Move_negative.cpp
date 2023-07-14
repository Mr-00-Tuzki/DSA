#include<iostream>
#include<vector>
using namespace std;

    
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // 2nd approach --> Two pointer approach (much faster)
    int i = 0, j = nums.size() - 1;
    while (i <= j) {
        if (nums[i] > 0 && nums[j] < 0) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        else if (nums[j] >= 0)
            j--;
        else
            i++;
    }
    return nums;
}

int main(){
// 1st approach --> normal approach
    // sort(nums.begin(), nums.end());
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(-4);
    nums.push_back(-2);
    nums.push_back(5);
    nums.push_back(3);
    separateNegativeAndPositive(nums);
    //printing the elements of vector
    for (int x : nums)
        cout << x << " ";


    return 0;
}