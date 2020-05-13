#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll b[1000000];
int main()
{
    ll n;
    cin>>n;
    set<ll>ss;
    ll a2[n],c,d,e,j=0,s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>c;
        if(a2[i-1]!=c || i==0)
            {
                a2[j++]=c;
                b[c]++;
            }
    }
    for(ll i=0;i<j-1;i++)
    {
        if(b[a2[i]])
            b[a2[i]]=0;
        else
            continue;
        for(ll k=i+1;k<j;k++)
        {
            ss.insert(a2[k]);
        }
        s=s+ss.size();
        ss.clear();
        //cout<<s<<endl;
    }
    cout<<s<<endl;

}
