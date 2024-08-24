#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mpp;
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> ans(n1);
    stack<int> st;
    for (int i=n2-1; i>=0; i--) {
        while (!st.empty() && st.top() <= nums2[i]) st.pop();
        if (st.empty()) mpp[nums2[i]] = -1;
        else mpp[nums2[i]] = st.top();
        st.push(nums2[i]);
    }
    for (int i=0; i<n1; i++) {
        ans[i] = mpp[nums1[i]];
    } return ans;
}
void displayVector(vector<int> arr, string title) {
    cout << title << ": ";
    for (int i: arr) {
        cout << i << " ";
    } cout << endl;
}
int main() {
    vector<int> arr1 = {4,1,2};
    vector<int> arr2 = {1,3,4,2};
    vector<int> ans = nextGreaterElement(arr1, arr2);
    displayVector(ans, "Next Greater Element Array");
    return 0;
}