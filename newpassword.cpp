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


int v[4]={1,1,1,1};

int main()
{
   fast;
   ll t;
   cin>>t;
   for(int tes=1;tes<=t;tes++)
   {   
       int n;
       cin>>n;
       string s;
       cin>>s;
       
       for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                v[0]--;
            }
            if(s[i]>='a' && s[i]<='z'){
                v[1]--;
                continue;
            }
            if(s[i]>='A' && s[i]<='Z'){
                v[2]--;
                continue;
            }
            if(s[i]=='@' || s[i]=='#' || s[i]=='*' || s[i]=='&'){
                v[3]--;
                continue;
            }
       }
       if(v[0]==1){
        s.push_back('0');
        n++;
       }
       if(v[1]==1){
        s.push_back('a');
        n++;
       }
       if(v[2]==1){
        s.push_back('A');
        n++;
       }
       if(v[3]==1){
        s.push_back('@');
        n++;
       }
       if(n<7){
        for(int i=0;i<7-n;i++){
            s.push_back('a'+i);
        }
       }
       cout<<'#'<<tes<<': '<<s<<"\n";
   }
    return 0;
}