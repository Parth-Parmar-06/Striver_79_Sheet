#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int minHeight = INT_MAX;
        for (int j = i; j < n; j++) {
        minHeight = min(minHeight, heights[j]);
        maxArea = max(maxArea, minHeight * (j - i + 1));
        }
    }
    return maxArea;
}
int main() {
    vector<int> arr = {2, 1, 5, 6, 2, 3, 1};
    int ans = largestRectangleArea(arr);
    cout << "Largest Rectangle Area is: " << ans;
    return 0;
}