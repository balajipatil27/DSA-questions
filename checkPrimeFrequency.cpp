class Solution {
public:
    bool isprime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return true;
        for(int i=3;i*i<=n;i+=2){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        

        for(auto it: mp){
            
            if(isprime(it.second)){
                return true;
              
            }
        }
        return false;
    }
};
