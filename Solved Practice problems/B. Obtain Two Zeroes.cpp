#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
#define filein freopen("input.txt", "r", stdin)
#define fileout freopen("output.txt", "w", stdout)
#define inf 1000000000000000018
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a<b)
        {
            ll c=b;
            b=a;
            a=c;
        }
        if((a+b)%3==0 && a<=(b*2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
