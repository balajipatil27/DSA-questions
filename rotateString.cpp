class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string l = s+s;

        int n = goal.size();
        for(int i =0;i<s.size();i++){
            string curr = "";
            for(int j = i;j<i+n;j++){
                curr+=l[j];
            }
            if( curr == goal){
                return true;
            }
        }
    return false;
    }
};
