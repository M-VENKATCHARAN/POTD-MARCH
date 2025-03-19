class Solution {
    public:
        // you can also use xor with 1
        int minOperations(vector<int>& nums) {
            int n=nums.size();
            int cnt=0;
            for(int i=0;i<n-2;i++){
                if(nums[i]==0){
                    nums[i]=!nums[i];
                    nums[i+1]=!nums[i+1];
                    nums[i+2]=!nums[i+2];
                    cnt++;
                }   
            }
            for(int i:nums)
                if(i==0)return -1;
            return cnt;
        }
    };