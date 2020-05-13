#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n && n!=0)
    {
        ll a1[n],a2[n],b=0,c=0,d,e,s=0,m=0,o=0,p=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a1[i]>>a2[i];
        }
        sort(a1,a1+n);
        sort(a2,a2+n);
        d=a1[0];
        e=a2[0];
        for(ll i=0;i<n;i++)
        {
            if(a1[i]==0)
                b++;
            else if(a1[i+1]==d && i+1<n)
                b++;
            if(a2[i]==0)
            {
                p++;
                if(m==0)
                {
                    c=1;
                    m=1;
                }
            }
            else if(a2[i+1]==e && i+1<n)
                o++;
            d=a1[i+1];
            e=a2[i+1];
        }
        if(c)
            s=s+1;
        s=s+(n-b)*(n-o-p);
        cout<<s<<endl;
    }
}
