class TaskManager {
public:
    unordered_map<int,pair<int,int>>mp; 
    set<pair<int,int>>s;
    TaskManager(vector<vector<int>>& tasks) {
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i][1]]={tasks[i][0],tasks[i][2]}; 
            s.insert({tasks[i][2],tasks[i][1]}); 
        }
    }
    void add(int userId, int taskId, int priority) {
        mp[taskId]={userId,priority};
        s.insert({priority,taskId});
    }
    void edit(int taskId, int newPriority) {
        int oldPriority=mp[taskId].second;
        int userId=mp[taskId].first;
        s.erase({oldPriority,taskId});
        mp[taskId]={userId,newPriority};
        s.insert({newPriority,taskId});
    }
    void rmv(int taskId) {
        int oldPriority=mp[taskId].second;
        mp.erase(taskId);
        s.erase({oldPriority,taskId});
    }
    int execTop() {
        if(!s.size())return -1;
        int taskId=s.rbegin()->second;
        int Priority=s.rbegin()->first;
        int ans= mp[taskId].first;
        mp.erase(taskId);
        s.erase({Priority,taskId});
        return ans;

    }
};
