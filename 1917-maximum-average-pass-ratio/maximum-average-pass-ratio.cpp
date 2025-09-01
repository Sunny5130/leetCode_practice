class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int es) {
        int n = classes.size();
        priority_queue<pair<double, int>> pq;

        for (int i = 0; i < n; i++) {
            double avg =
                ((double)(classes[i].front() + 1) / (classes[i].back() + 1)) -
                ((double)classes[i].front() / classes[i].back());
            pq.push({avg, i});
        }
        while (es--) {
            int classIdx = pq.top().second;
            classes[classIdx][0]++;
            classes[classIdx][1]++;
            double newavg =
                ((double)(classes[classIdx][0] + 1) /
                 (classes[classIdx][1] + 1)) -
                ((double)classes[classIdx][0] / classes[classIdx][1]);
            pq.pop();
            pq.push({newavg, classIdx});
        }
        double res = 0;
        for (int i = 0; i < n; i++) {
            res += (float)(classes[i].front()) / (float)(classes[i].back());
        }

        return res / n;
    }
};