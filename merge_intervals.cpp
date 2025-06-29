class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for(auto& it : intervals){
            int s = it[0];
            int e = it[1];
            int last = ans.back()[1];

            if(last >= s){
                ans.back()[1] = max(last,e);

            }
            else{
                ans.push_back({s,e});
            }
        }
        return ans;
    }
};
