#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll a[n],a2[q],c,d,e;
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<q; i++)
        cin>>a2[i];
    sort(a,a+n);
    double b;
    for(ll i=0; i<q; i++)
    {
        if(a2[i]%2!=0)
            cout<<-1<<endl;
        else
        {
            c=0;
            d=0;
            e=0;
            for(ll j=n-1; j>=0; j--)
            {
                if(a[j]==a2[i])
                {
                    cout<<1<<endl;
                    c=1;
                    break;
                }
                else if(a[j]<a2[i])
                {
                    d=d+a[j];
                    e++;
                }
                if(d==a2[i])
                {
                    cout<<e<<endl;
                    c=1;
                    break;
                }
                cout<<d<<endl;
            }
            if(c==0)
                cout<<-1<<endl;
        }
    }
    //cout<<log10(14)/log10(2)<<endl;
}
