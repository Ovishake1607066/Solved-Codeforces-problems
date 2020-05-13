#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,b,c,s;
    cin>>n>>m;
    s=n;
    for(ll i=0; ;i++)
    {
        //cout<<s<<n<<endl;
        if(i==0)
        {
            s=s+(n/m);
            b=n%m;
            n=n/m+b;
            if(n<m)
                break;
            continue;
        }
        s=s+(n/m);
        c=b;
        b=n%m;
        n=(n/m)+b;
        if(n<m)
            break;
    }
    cout<<s<<endl;
}
