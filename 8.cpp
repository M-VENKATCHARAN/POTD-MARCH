class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            
            // brute-force approach
            
            // int n=blocks.size();
            // int ans=INT_MAX;
            // int temp;
            // for(int i=0;i<n;i++){
            //     int r=i+k-1;
            //     if(r<n){
            //     temp=0;
            //     for(int j=i;j<=r;j++){
            //         if(blocks[j]=='W')
            //             temp++;
            //     }}
            //     ans=min(ans,temp);
            // }
            // return ans;
    
            int l=0,r=0,n=blocks.length();
            int maxi=k;
            int w=0;
            while(r<n){
                if(blocks[r]=='W')
                    w++;
                if(r-l+1==k){
                    maxi=min(maxi,w);
                    if(blocks[l]=='W')
                        w--;
                    l++;
                }
                r++;
            }
            return maxi;
        }
    };