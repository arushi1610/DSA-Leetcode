class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<unordered_set<int>> adj(n, unordered_set<int> ());
        for(auto road : roads){
            adj[road[0]].insert(road[1]);
            adj[road[1]].insert(road[0]);
            }
        
        int ans = INT_MIN;
            for(int i = 0 ; i<n ; i++){
                for(int j =i+1 ; j<n ; j++){
                    int size = adj[i].size() + adj[j].size();
                    if(adj[i].count(j)){
                        size--;
                    
                    }
                    ans  = max(size , ans);
                }
            }
            return ans;


        }
};