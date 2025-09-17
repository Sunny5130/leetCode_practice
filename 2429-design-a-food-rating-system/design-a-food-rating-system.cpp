class FoodRatings {
    struct Compare {
        bool operator()(const pair<int,string>& a, const pair<int,string>& b) const {
            return a.first != b.first ? a.first > b.first : a.second < b.second;
        }
    };
    unordered_map<string, pair<string,int>> foodMap;   
    unordered_map<string, set<pair<int,string>, Compare>> cuisineMap;

public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); i++) {
            foodMap[foods[i]] = {cuisines[i], ratings[i]};
            cuisineMap[cuisines[i]].insert({ratings[i], foods[i]});
        }
    }
    void changeRating(string food, int newRating) {
        auto& [cuisine, oldRating] = foodMap[food];
        cuisineMap[cuisine].erase({oldRating, food});
        cuisineMap[cuisine].insert({newRating, food});
        oldRating = newRating;
    }
    string highestRated(string cuisine) {
        return cuisineMap[cuisine].begin()->second;
    }
};
