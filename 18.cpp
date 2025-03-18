
// brute-force
int longestNiceSubarray(vector<int>& nums) {
    int n = nums.size();
    int result = 0;
    for(int i = 0; i < n; i++) {
        int mask = 0;
        for(int j = i; j < n; j++) {
            if((mask & nums[j]) != 0) {
                break;
            }
            result = max(result, j-i+1);
            mask = (mask | nums[j]);
        }
    }
    return result;
}


// optimal
int longestNiceSubarray(vector<int>& nums) {
    int n=nums.size();
    int l=0,r=0;
    int result=0;
    int ans=1;
    while(r<n){
        while((result & nums[r])!=0){
            result^=nums[l];
            l++;
        }
        result|=nums[r];
        ans=max(ans,r-l+1);
        r++;
    }
    return ans;
}