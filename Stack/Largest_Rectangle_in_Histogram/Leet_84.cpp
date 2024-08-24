#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> pse(n, -1);
    vector<int> nse(n, n);
    stack<int> st;
    int maxArea = 0;
    for (int i=0; i<n; i++) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
            st.pop();
        }
        if (!st.empty()) {
            pse[i] = st.top();
        }
        st.push(i);
    }
    while (!st.empty()) st.pop();
    for (int i=n-1; i>=0; i--) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
            st.pop();
        }
        if (!st.empty()) {
            nse[i] = st.top();
        }
        st.push(i);
    }
    for (int i=0; i<n; i++) {
        int currArea = heights[i]*(nse[i]-pse[i]-1);
        maxArea = max(currArea, maxArea);
    } return maxArea;
}
int main() {
    vector<int> arr = {2, 1, 5, 6, 2, 3, 1};
    int ans = largestRectangleArea(arr);
    cout << "Largest Rectangle Area is: " << ans;
    return 0;
}