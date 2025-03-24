class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
    
            sort(meetings.begin(),meetings.end());
            vector<vector<int>>nums;
            for(auto it:meetings){
                if(nums.empty()||it[0]>nums.back()[1])
                    nums.push_back(it);
                else
                    nums.back()[1]=max(nums.back()[1],it[1]);
            }
            int cnt=0;
            for(auto it:nums)
                cnt+=(it[1]-it[0]+1);
            return days-cnt;
        }
    };