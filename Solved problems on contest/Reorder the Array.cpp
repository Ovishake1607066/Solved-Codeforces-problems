#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b=0,c=0,d=0,e;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        //cout<<c<<endl;
        if(i==0)
        {
            b++;
            continue;
        }
        if(a[i]==a[i-1])
        {
            if(b && d==1)
            {
                c++;
                b--;
            }
            else
                b++;
            continue;
        }
        else if(a[i]>a[i-1])
        {
            d=1;
            if(!c)
            {
                c++;
                b--;
            }
            else
                c++;
        }
        //cout<<c<<endl;
    }
    cout<<c<<endl;
}
