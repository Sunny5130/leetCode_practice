class Solution {
public:
#define ll long long
    long long minOperations(vector<vector<int>>& queries) {
        int n = queries.size();
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ll start = queries[i][0];
            ll end = queries[i][1];
            ll prev = 1;
            ll curr = 1;
            ll operations = 0;
            for (ll j = 1; j < 17; j++) {
                if (prev > end) {
                    break;
                }
                curr = curr * 4LL;
                ll l = max(start, prev);
                ll r = min(end, curr - 1);
                if (r >= l) {
                    operations += (r - l + 1) * j;
                }
                prev = curr;
            }
            ans += (ceil((double)operations / 2));
        }
        return (ans);
    }
};