#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool comp(string s1,string s2)
{
    return s1.size()<s2.size();
}
int main()
{
    ll n,c1=0,c,d;
    cin>>n;
    string s[1000];
    for(ll i=0; i<n; i++)
        cin>>s[i];
    sort(s,s+n,comp);
    for(ll i=0; i<n-1; i++)
    {
        d=0;
        for(ll j=0; j<s[i+1].size(); j++)
        {
            if(s[i][0]==s[i+1][j])
            {
                c=0;
                for(ll k=0,l=j; k<s[i].size(); k++,l++)
                {
                    if(l>=s[i+1].size())
                    {
                        c=1;
                        break;
                    }
                    if(s[i][k]!=s[i+1][l])
                    {
                        c=1;
                        break;
                    }
                }
                if(c==0)
                {
                    d=1;
                    break;
                }
            }
        }
        if(d==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
        cout<<"YES"<<endl;
        for(ll i=0; i<n; i++)
            cout<<s[i]<<endl;
}
