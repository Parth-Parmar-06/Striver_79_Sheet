#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> ls; 
        for (int i = 0; i < n; i++) {
            if (ls.size() == 0 || ls[0] != nums[i]) {
                int cnt = 0;
                for (int j = 0; j < n; j++) {
                    if (nums[j] == nums[i]) {
                        cnt++;
                    }
                }
                if (cnt > (n / 3))
                    ls.push_back(nums[i]);
            }
            if (ls.size() == 2) break;
        } return ls;
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