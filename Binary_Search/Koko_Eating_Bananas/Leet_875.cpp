#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = INT_MIN;
        for (int i: piles) {
            maxi = max(maxi, i);
        }
        int start = 1;
        int end = maxi;
        int ans = -1;
        while (start <= end) {
            int mid = start+(end-start)/2;
            long long hours = 0;
            for (int i: piles) {
                hours += (i + mid - 1) / mid;
            }
            if (h>=hours) {
                ans = mid;
                end = mid-1;
            } else {
                start = mid+1;
            }
        } return ans;
    }
};
int main() {
    vector<int> arr = {30,11,23,4,20};
    int h = 6;
    Solution obj;
    int ans = obj.minEatingSpeed(arr, h);
    cout << "Minimum Eating Speed: " << ans;
    return 0;
}