#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = INT_MIN;
        for (int i=0; i<nums.size(); i++) {
            int currProd = nums[i];
            maxProd = max(currProd, maxProd);
            for (int j=i+1; j<nums.size(); j++) {
                currProd *= nums[j];
                maxProd = max(currProd, maxProd);
            }
        } return maxProd;
    }
};
int main() {
  vector <int> arr = {1,2,-3,0,-4,-5};
  Solution obj;
  cout << "Maximum Product is: " << obj.maxProduct(arr) << endl;
  return 0;
}