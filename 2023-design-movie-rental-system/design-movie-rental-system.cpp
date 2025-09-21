class MovieRentingSystem {
public:
    map<pair<int,int>,int>S;
    unordered_map<int,set<pair<int,int>>>unRent;
    set<array<int,3>>Rent;
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for(auto& e : entries){
            S[{e[0],e[1]}] = e[2];
            unRent[e[1]].insert({e[2],e[0]});
        }
    }

    vector<int> search(int movie) {
        vector<int> res;
        int cnt = 0;
        for(auto it = unRent[movie].begin(); it != unRent[movie].end() && cnt < 5; ++it, ++cnt) {
            res.push_back(it->second);
        }
        return res;
    }

    void rent(int shop, int movie) {
        int price = S[{shop , movie}];
        unRent[movie].erase({price,shop});
        Rent.insert({price , shop , movie});
    }

    void drop(int shop, int movie) {
        int price = S[{shop , movie}];
        unRent[movie].insert({price,shop});
        Rent.erase({price , shop , movie});
    }

    vector<vector<int>> report() {
        vector<vector<int>> res;
        int cnt = 0;
        for(auto it = Rent.begin(); it != Rent.end() && cnt < 5; ++it, ++cnt) {
            res.push_back({(*it)[1], (*it)[2]});
        }
        return res;
    }
};