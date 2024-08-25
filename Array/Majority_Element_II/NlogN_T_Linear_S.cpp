#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        int n = nums.size();
        for (int i: nums) {
            if(++mpp[i] > n/3) {
                ans.push_back(i);
                mpp[i] = 0;
            } 
            if (ans.size() == 2) break;
        }; return ans;
    }
};
void displayVector(vector<int> arr, string title) {
    cout << title << ": ";
    for (int i: arr) {
        cout << i << " ";
    } cout << endl;
}
int main() {
    vector<int> arr = {1,2,2,3,2};
    Solution obj;
    vector<int> ans = obj.majorityElement(arr);
    displayVector(ans, "Majority Element II");
    return 0;
}