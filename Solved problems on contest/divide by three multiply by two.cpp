#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,b,c,d,e,f;
    cin>>n;
    ll a[n],a1[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        ll k=0;
            b=a[i];
            a1[k++]=b;
        while(1)
        {
            e=0;
            if(b%3==0)
            {
                d=b/3;
                for(ll j=0; j<n; j++)
                {
                    if(a[j]==d)
                    {
                        a1[k++]=d;
                        e=1;
                        b=d;
                        break;
                    }

                }
            }
            if(e==0)
            {
                d=b*2;
                for(ll j=0; j<n; j++)
                {
                    if(a[j]==d)
                    {
                        a1[k++]=d;
                        e=1;
                        b=d;
                        break;
                    }
                }
            }
            if(e==0)
            {
                //cout<<b<<endl;
                for(ll m=0;m<k;m++)
                    a1[m]=0;
                break;
            }
            if(k==n)
            {
                for(ll m=0;m<k;m++)
                    cout<<a1[m]<<" ";
                    return 0;
            }
        }
        }
    }
