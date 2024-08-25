#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i=0; i<n; i++) {
            if (i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while (j<k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > 0) k--;
                else if (sum < 0) j++;
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++; k--;
                    while (j<k && nums[j] == nums[j-1]) j++;
                    while (j<k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
void printVectorOfTriplets(vector<vector<int>>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j];
            if (j < arr[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "]";
}
int main() {
    vector<int> arr = {-1,0,1,2,-1,-4};
    Solution obj;
    vector<vector<int>> ans = obj.threeSum(arr);
    printVectorOfTriplets(ans);
    return 0;
}