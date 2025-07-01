class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start =0;
        int gass  = 0;
        int totreq = 0;
        int totgas = 0;
        for(int i = 0;i<n;i++){
            totgas += gas[i];
            totreq += cost[i];
        }
        if(totgas < totreq) return -1;
        for(int i =0;i<n;i++){
            gass += gas[i] - cost[i];
            if(gass<0){
                start = i+1;
                gass =0;
            }
        }
        return start;
    }
};
