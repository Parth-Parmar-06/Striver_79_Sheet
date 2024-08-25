#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();
        for (int i=0; i<n-2; i++) {
            for (int j=i+1; j<n-1; j++) {
                for (int k=j+1; k<n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
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