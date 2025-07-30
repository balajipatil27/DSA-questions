class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int  pro = 1;
        int num = n;

        while(n>0){
            sum+=n%10;
            pro*=n%10;
            n=n/10;

        }
        if(num% (sum+pro) == 0)return true;
        else{
            return false;
        } 
    }
};
