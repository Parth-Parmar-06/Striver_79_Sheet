#include<bits/stdc++.h>
using namespace std;
vector<string> generateAllSubstrings(string s) {
    vector<string> ans;
    int n = s.size();
    for (int i=0; i<(1<<n); i++) {
        string sub = "";
        for (int j=0; j<n; j++) {
            if (i & (1<<j)) {
                sub += s[j];
            }
        }
        ans.push_back(sub);
    }
    sort(ans.begin(), ans.end()); 
    return ans;
}
void displayVector(vector<string> arr, string title) {
    cout << title << ": ";
    for (string s: arr) {
        cout << s << " ";
    } cout << endl;
}
int main() {
    string s = "ABC";
    vector<string> ans = generateAllSubstrings(s);
    displayVector(ans, "Power set");
    return 0;
}