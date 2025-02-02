#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge; 
        stack<int> st;
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nge[st.top()] = num; 
                st.pop();
            }
            st.push(num);
        }
        while (!st.empty()) {
            nge[st.top()] = -1;
            st.pop();
        }
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nge[num]);
        }
        
        return result;
    }
};
