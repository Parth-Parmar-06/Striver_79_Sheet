#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n);
    stack<int> st;
    for (int i=n-1; i>=0; i--) {
        while (!st.empty() && st.top() <= nums[i]) st.pop();
        if (st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        st.push(nums[i]);
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