#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    
    long long ans=0,sum=0; 
    for(int i=0;i<n;i++){
        
            
            sum+=v[i].first;
            ans+=v[i].second-sum;
        
    }
    cout<<ans<<"\n";

    return 0;
}