#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        while (start < end) {
            int mid = start+(end-start)/2;
            if (nums[mid] > nums[mid+1]) {
                end = mid;
            } else {
                start = mid+1;
            }
        } return start;
    }
};
int main() {
    vector<int> arr = {1,2,1,3,5,6,4};
    Solution obj;
    int ans = obj.findPeakElement(arr);
    cout << "Ans(index): " << ans;
    return 0;
}