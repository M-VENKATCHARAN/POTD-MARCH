class Solution {
    public:
        void bfs(vector<int>&vis,vector<vector<int>>& ver,int ind,vector<int>&nums){
            vis[ind]=1;
            queue<int>q;
            q.push(ind);
    
            while(!q.empty()){
                int x=q.front();
                q.pop();
                nums.push_back(x);
                for(int y:ver[x]){
                    if(!vis[y]){
                        vis[y]=1;
                        q.push(y);
                    }
                }
            }
        }
        int countCompleteComponents(int n, vector<vector<int>>& edges) {
            vector<vector<int>>ver(n);
            vector<int>vis(n,0);
            for(auto &it:edges){
                int x=it[0];
                int y=it[1];
                ver[x].push_back(y);
                ver[y].push_back(x);
            }
            int cnt=0;
            for(int i=0;i<n;i++){
                if(!vis[i]){
                    vector<int>nums;
                    bool ans = true;
                    bfs(vis,ver,i,nums);
                    for(auto i:nums){
                    if(ver[i].size()!=nums.size()-1){
                        ans=false;
                        break;
                    }}
                    if(ans)cnt++;
                }
            }
            return cnt;   
        }
    
    };