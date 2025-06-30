class Solution {
public:
    int f(int ind,int buy,vector<int>& prices){
        if(ind >= prices.size()) return 0;
        int n = prices.size();
        if(buy==1){
            return max(-prices[ind] + f(ind+1,0,prices), 0+f(ind+1,1,prices));
        }
        return max(prices[ind] + f(ind+2,1,prices) , 0+f(ind+1,0,prices));
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        return f(0,1,prices);
    }
};
