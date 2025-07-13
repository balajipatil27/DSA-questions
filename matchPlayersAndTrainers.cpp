class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
        int n = trainers.size();
        int m = players.size();
        int i =0;
        int j =0;
        int cnt =0;
        while(i < n && j< m){
            if(trainers[i] >= players[j]){
                j++;
                i++;
                cnt++;
            }
            else{
                i++;
            }
        }
        return cnt;
    }
};
