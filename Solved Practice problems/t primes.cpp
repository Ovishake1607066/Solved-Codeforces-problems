#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long a[1000000],prime[1000000];
#define l 1000000
int main()
{
    ll n,a1,b,c,d,e,f;
    a[1]=0;
    a[2]=0;
    for(ll i=3;i*i<=l;i+=2)
        if(a[i]==0)
            for(ll j=i*i;j<=l;j=j+(i*2))
                a[j]=1;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a1;
        b=sqrt(a1);
        if(b*b==a1 && b!=1)
            {
                if(a[b]==0)
                {
                    cout<<"YES"<<endl;
                }
                /*if(b%2==0 && b!=2)
                {
                    d=1;
                    cout<<"NO"<<endl;
                }
                else
                {
                    for(ll i=3;i*i<=b;i+=2)
                    {
                        if(b%i==0)
                        {
                            d=1;
                            cout<<"NO"<<endl;
                            break;
                        }
                    }
                }*/
                else
                    cout<<"NO"<<endl;
            }
        else
            cout<<"NO"<<endl;
    }
}
