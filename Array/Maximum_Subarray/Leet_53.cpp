#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        } return maxSum;
    }
};
int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    int ans = obj.maxSubArray(arr);
    cout << "Ans: " << ans;
    return 0;
}