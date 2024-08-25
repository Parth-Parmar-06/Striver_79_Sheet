#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        while (start < end) {
            int mid = start+(end-start)/2;
            if (nums[mid] > nums[end]) {
                start = mid+1;
            } else {
                end = mid;
            }
        } return nums[end];
    }
};
int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    Solution obj;
    int ans = obj.findMin(arr);
    cout << "Ans: " << ans;
    return 0;
}