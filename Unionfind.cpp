#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N=2e5+5;

int cr[N];
int sz[N]={1};
// 

int find(int x){
   if(cr[x]==x){
    return x;
   }
   int ans=find(cr[x]);
   cr[x]=ans;
    return ans;
}

void merge(int u,int v){
    u=find(u);
    v=find(v);
    if(u!=v){
        if(sz[u]<=sz[v]){
            sz[v]+=sz[u];
            cr[u]=v;
        }else {
            sz[u]+=sz[v];
            cr[v]=u; 
        }
    }
}


int main()
{
   
   ll n,q;
    cin>>n>>q;
   for(int i=0;i<n;i++)cr[i]=i;
   while(q--)
   {  ll t,u,v;
    cin>>t>>u>>v;
    if(t==1){
        if(find(u)==find(v)){
            cout<<"1"<<"\n";
        }else{
            cout<<"0"<<"\n";
        }
    }else{
        merge(u,v);
    }
       
   }
    return 0;
}