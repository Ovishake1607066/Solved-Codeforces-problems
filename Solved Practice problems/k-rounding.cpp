#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,a,b=0,c,d;
    cin>>n>>k;
    if(n%10==5)
    {
        c=2;
        d=2;
    }
    else if(n%10==0)
    {
        c=1;
        d=1;
    }
    else if(n%2==0)
    {
        c=5;
        d=5;
    }
    else
    {
        c=10;
        d=10;
    }
    if(k==0)
        cout<<n<<endl;
    else
    for(ll i=c; ;i+=d)
    {
        if((n*i)%10==0)
        {
            a=n*i;
            for(ll j=0;j<=k;)
            {
                if(a%10==0)
                    {
                        a=a/10;
                        j++;
                    }
                else
                    break;
                if(j==k)
                {
                    cout<<n*i<<endl;
                    return 0;
                }
            }
        }
    }
}
