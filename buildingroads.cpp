#include <bits/stdc++.h>

using namespace std;
const int N=1e5+5;
vector<int>g[N];
vector<int>vis(N,0);
vector<int>ans;

void dfs(int s){
    vis[s]=1;
    for(auto e:g[s]){
        if(vis[e]==0){
            dfs(e);
        }
    }
}

int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;i++){
       int x,y;
       cin>>x>>y;
       g[x].push_back(y);
        g[y].push_back(x);
   }
   int cc=0;
   for(int i=1;i<=n;i++){
       if(vis[i]==0){
           dfs(i);
           ans.push_back(i);
           cc++;
       }
   }
   cout<<cc-1<<"\n";
   for(int i=0;i<cc-1;i++){
       cout<<ans[i]<<" "<<ans[i+1]<<"\n";
       }
   

    return 0;
}