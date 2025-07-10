/*
🧮 Problem: Union of Arrays with Duplicates
Difficulty: Easy
Accuracy: ~42%
Submissions: 445K+
Average Time: 10m

🔷 Description:
You are given two arrays a[] and b[]. Return the union of both arrays in any order.

The **union of two arrays** is a collection of all **distinct elements** present in either of the arrays.
If an element appears more than once in one or both arrays, it should be included **only once** in the result.

Note: Elements of a[] and b[] are not necessarily distinct.
The output can be in any order, but the driver code will usually print it in sorted order.

📥 Examples:
Input: a[] = [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
Output: [1, 2, 3]

Input: a[] = [1, 2, 3], b[] = [4, 5, 6]
Output: [1, 2, 3, 4, 5, 6]

Input: a[] = [1, 2, 1, 1, 2], b[] = [2, 2, 1, 2, 1]
Output: [1, 2]

🎯 Constraints:
1 ≤ a.size(), b.size() ≤ 10^6  
0 ≤ a[i], b[i] ≤ 10^5

💡 Expected Time Complexity:
- O(n + m), where n and m are sizes of the two arrays.

💼 Company Tags:
- Zoho
- Rockstand
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> st;
        for (auto num : a) st.insert(num);
        for (auto num : b) st.insert(num);
        
        vector<int> ans;
        for (auto num : st) {
            ans.push_back(num);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    Solution sol;
    vector<int> result = sol.findUnion(a, b);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
