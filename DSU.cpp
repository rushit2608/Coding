#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
const int N=1e5+5;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int kx[8] = { -1, 1, 0, 0, -1, -1, 1, 1};
int ky[8] = {0, 0, -1, 1, -1, 1, -1, 1};

int cr[N];
int find(int x){
    while(cr[x]!=x){
        x=cr[x];
    }
    return x;
}
void merge(int u,int v){
    u=find(u);
    v=find(v);
    if(u!=v){
        cr[u]=v;
    }
}


int main()
{
   fast;
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