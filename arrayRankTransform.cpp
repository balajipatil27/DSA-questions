class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        set<int> st(arr.begin(),arr.end());
        int rank =1;
        map<int,int> mp;
        for(auto &i : st){
            mp[i] = rank++;
        }

        for(auto &it: arr){
            it = mp[it];
        }
    return arr;
    }
};
