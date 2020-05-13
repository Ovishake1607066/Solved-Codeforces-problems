#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a1[n],a2[n]= {0},a3[n],b,c,d,e=0,f;
    for(ll i=0; i<n; i++)
    {
        cin>>f;
        a1[i]=f;
        a3[i]=f;
    }
    sort(a3,a3+n);
    string s;
    cin>>s;
    for(ll x=0; x<s.size(); x++)
    {
        e=0;
        if(s[x]=='0')
        {
            for(ll j=0; j<n; j++)
            {
                for(ll k=0; k<n; k++)
                {
                    //cout<<a3[j]<<a1[k]<<endl;
                    if(a3[j]==a1[k])
                    {
                        if(a2[k]==0)
                        {
                            cout<<k+1<<" ";
                            a2[k]=1;
                            e=1;
                            break;
                        }
                        else
                            break;
                    }
                }
                if(e==1)
                    break;
            }
        }
        else
        {
            for(ll j=n-1; j>=0; j--)
            {
                for(ll k=0; k<n; k++)
                {
                    //cout<<a3[j]<<a1[k]<<endl;
                    if(a3[j]==a1[k])
                    {
                        if(a2[k]==1)
                        {
                            cout<<k+1<<" ";
                            e=1;
                            break;
                        }
                        else
                            break;
                    }
                }
                if(e==1)
                    break;
            }
        }
    }
}


