int n = digits.size();
        vector<int> st;
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=digits[i];
            sum = sum*10;
        }
