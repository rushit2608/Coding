#include<iostream>
#include<string>

using namespace std;

int fact(int n){
      if(n<2){
            return 1;
      }else{
            return n*fact(n-1);
      }
}

int trailingzero(int n){
      int sum=0;
      int m=log5(n);
      for(int i=1;i<n;i*5){
            sum+=n/i;
      }
}

int gcd(int n,int m){
      
      while(a!=b){
       if(a<b){
             b=b-a;
       }else{
             a=a-b;
       }
       return a;

      }
}
int modGcd(int m,int n){
      if(n==0){
            return m;
      }else{
            return (n,m%n);
      }
}

int lcm(int a,int b){
      return a*b/modGcd(a,b);
}

bool isprime(int n){
      if(n==1)return false;

      for(int i=2;i*i<=n;i++){
            if(n%i==0){
                  return false;
            }
      }
      return true;
}

int main(){

int n;
int rev=1;
cin>>n;
for(int i=1;i<=n;i++){
      rev*=i;
}
if(n==rev){
      return true;

}
return false;

return 0;
}