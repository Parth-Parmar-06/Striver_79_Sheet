#include<bits/stdc++.h>
using namespace std;
int subarrayWithGivenXor(vector<int> nums, int k) {
    int cnt = 0;
    int n = nums.size();
    for (int i=0; i<n; i++) {
        int exor = 0;
        for (int j=i; j<n; j++) {
            exor ^= nums[j];
            if (exor == k) {
                cnt++;
            }
        }
    } return cnt;
}
int main() {
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    int ans = subarrayWithGivenXor(arr, k);
    cout << "Ans: " << ans;
    return 0;
}