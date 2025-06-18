class Solution {
  public:
    void call(vector<vector<int>>& adj,vector<int> &vis, int node,vector<int> &ans){
        vis[node] = 1;
        ans.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]) call(adj,vis,it,ans);
        }
    }
  
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n =adj.size();
        if(n == 0) return {};
        vector<int> vis(n,0);
        vector<int> ans;
        
        call(adj,vis,0,ans);
        return ans;
    }
};
