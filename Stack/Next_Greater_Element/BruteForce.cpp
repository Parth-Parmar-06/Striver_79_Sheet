#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n);
    bool found = false;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (nums[j] > nums[i]) {
                found = true;
                ans[i] = nums[j];
                break;
            }
        } 
        if (!found) ans[i] = -1;
        found = false;
    }
    return ans;
}
void displayVector(vector<int> arr, string title) {
    cout << title << ": ";
    for (int i: arr) {
        cout << i << " ";
    } cout << endl;
}
int main() {
    vector<int> arr = {3,10,4,2,1,2,6,1,7,2,9};
    vector<int> ans = nextGreaterElement(arr);
    displayVector(arr, "Original Array");
    displayVector(ans, "Next Greater Element Array");
    return 0;
}