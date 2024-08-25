#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i=0; i<(1<<n); i++) {
            vector<int> temp;
            for (int j=0; j<n; j++) {
                if (i & (1<<j)) {
                    temp.push_back(nums[j]);
                }
            }
            ans.push_back(temp);
        }
        // sort(ans.begin(), ans.end());
        return ans;
    }
};
void print2DVector(const vector<vector<int>>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < vec[i].size(); ++j) {
            cout << vec[i][j];
            if (j < vec[i].size() - 1) cout << ", ";  
        }
        cout << "]";
        if (i < vec.size() - 1) cout << ", ";  
    }
    cout << "]" << endl;
}
int main() {
    vector<int> arr = {1,2,3};
    Solution obj;
    vector<vector<int>> ans = obj.subsets(arr);
    print2DVector(ans);
    return 0;
}