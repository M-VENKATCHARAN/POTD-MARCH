    // using hash-map
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int req=nums.size()/2,cnt=0;
        for(int i:nums)
            mp[i]++;
        
        for(auto it:mp){
            if((it.second!=0) && (it.second)%2!=0)return false;
        }
        return true;
    }

    //using bit-manipulation
    
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i=i+2)
            if((nums[i]^nums[i-1])!=0)return false;
        return true;
    }
