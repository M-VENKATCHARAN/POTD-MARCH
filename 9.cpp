class Solution {
    public:
        // in AG I window size is fixed so we check directly prev and next.
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int ans=0;
            int n=colors.size();
            int maxlen=1;
            for(int i=1;i<=n-1+k-1;i++){
                if(colors[i%n]!=colors[(i-1+n)%n])
                    maxlen++;
                else 
                    maxlen=1;
                
                if(maxlen>=k)ans++;
            }
            return ans;
        }
    };