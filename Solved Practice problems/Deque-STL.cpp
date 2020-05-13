#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        deque<ll>d;
        ll n,k,a,b,c;
        cin>>n>>k;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            d.push_back(a);
        }
        deque<ll>::iterator it,itt;
        for(it=d.begin(),c=0; it!=d.end(); it++,c++)
        {
            b=0;
            if(n-k+1==c)
                break;
                itt=it;
            for(ll i=0; i<k; i++,itt++)
            {
                if(*itt>b)
                    b=*itt;
            }
            cout<<b<<" ";
        }
        cout<<endl;
    }
}
