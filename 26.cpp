class Solution {
    public:
        int minOperations(vector<vector<int>>& grid, int x) {
            int n=grid.size();
            vector<int>nums;
            for(auto it:grid){
                for(auto i:it)
                    nums.push_back(i);
            }
            sort(nums.begin(),nums.end());
            int cnt=0;
            int mid=nums[nums.size()/2];
    
            for(int i=0;i<nums.size();i++){
                if(abs(nums[i]-mid)%x)return -1;
                cnt+=abs(nums[i]-mid)/x;
            }
            return cnt;
        }
    };