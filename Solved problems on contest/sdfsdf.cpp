#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a1[n],a2[n]= {0},a3[n],a4[n],b,c,d,e=0,f,p,q;
    for(ll i=0; i<n; i++)
    {
        cin>>f;
        a1[i]=f;
        a3[i]=f;
    }
    sort(a3,a3+n);
    for(ll i=0,k=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a3[i]==a1[j])
                a4[k++]=j+1;
        }
    }
    p=0;
    q=n-1;
    string s;
    cin>>s;
    for(ll x=0; x<s.size(); x++)
    {
        e=0;
        if(s[x]=='0')
        {
            for(ll j=p; j<n; j++)
            {
                if(a2[j]==0)
                {
                            cout<<a4[j]<<" ";
                            a2[j]=1;
                            e=1;
                            p=j+1;
                            break;
                }
                if(e==1)
                    break;
            }
        }
        else
        {
            for(ll j=n-1; j>=0; j--)
            {
                if(a2[j]==1)
                {
                            cout<<a4[j]<<" ";
                            a2[j]=3;
                            e=1;
                            break;
                }
                if(e==1)
                    break;
            }
        }
    }
}



