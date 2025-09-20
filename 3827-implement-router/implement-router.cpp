class Router {
public:
    using ll = long long;
    unordered_set<ll> data;
    queue<array<int, 3>> packets;
    unordered_map<int, deque<int>> destMap;
    int limit = 0;

    Router(int memoryLimit) {
        limit = memoryLimit;
    }

    ll encode(int s, int d, int t) {
        return ((ll)s << 44) | ((ll)d << 24) | t;
    }

    bool addPacket(int source, int destination, int timestamp) {
        ll key = encode(source, destination, timestamp);
        if (data.count(key)) return false;

        if ((int)packets.size() == limit) {
            auto &front = packets.front();
            ll oldKey = encode(front[0], front[1], front[2]);
            data.erase(oldKey);
            destMap[front[1]].pop_front(); 
            packets.pop();
        }

        packets.push({source, destination, timestamp});
        data.insert(key);
        destMap[destination].push_back(timestamp);
        return true;
    }

    vector<int> forwardPacket() {
        if (packets.empty()) return {};
        auto front = packets.front();
        packets.pop();
        ll key = encode(front[0], front[1], front[2]);
        data.erase(key);
        destMap[front[1]].pop_front(); 
        return {front[0], front[1], front[2]};
    }

    int getCount(int destination, int startTime, int endTime) {
        auto &dq = destMap[destination];
        auto l = lower_bound(dq.begin(), dq.end(), startTime);
        auto r = upper_bound(dq.begin(), dq.end(), endTime);
        return r - l;
    }
};