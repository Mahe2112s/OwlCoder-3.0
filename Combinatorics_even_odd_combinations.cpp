//https://www.hackerrank.com/challenges/a-chocolate-fiesta/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
long long int PowMod(long long int x,long long int n)
{
    long long ans=1;
    while(n)
            {
                if(n%2==1)
                {
                    n=n-1;
                    ans=(ans*x)%mod;
                   // x%=M;
                }
                else
                {
                    n/=2;
                   x=(x*x)%mod;
                }
     }
    ans =ans %mod;
            
    return ans;
}

long long inverse(long long n,long long m)
 {
     return PowMod(n,m);
 }
int main()
{
    ll n;
    cin >> n;
    ll odd = 0;
    ll even = 0;
    vector<ll> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(a[i]&1) odd++;
        else even++;
    }
    ll ans=0,res=0,z=0;
    if(even!=0)
    {
         ans = PowMod(2,even)%mod;
         ans--;
    }
   if(odd!=0)
   {
       res= (PowMod(2,odd) % mod * (inverse(2,mod-2)%mod))%mod;
       res--;
   }
   z=0;
   if(even!=0 and odd!=0)  z=(ans*res)%mod;
   ll l=(ans+res+z)%mod;
   cout<<(int)l;

}
