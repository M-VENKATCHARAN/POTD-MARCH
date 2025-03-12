class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            unordered_map<int,int>mp;
            int pcnt=0,ncnt=0;
            int ans=0;
            for(int i:nums){
                mp[i]++;
            }
            for(auto i:mp){
                if(i.second>0){
                    if(i.first>0){
                        if(i.second!=1)pcnt+=i.second;
                        else pcnt++;
                    }
                    else if(i.first<0){
                        if(i.second!=1)ncnt+=i.second;
                        else ncnt++;
                    }
                }
                ans=max(pcnt,ncnt);
            }
            return ans;
        }
    };