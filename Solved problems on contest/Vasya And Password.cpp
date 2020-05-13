#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t,a,b,c;
    cin>>t;
    vector<ll> u;
    vector<ll> l;
    vector<ll> d;
    string s1,s2;
    while(t--)
    {
        cin>>s1;
        for(ll i=0; i<s1.size(); i++)
        {
            if(s1[i]<='9' && s1[i]>='0')
                d.push_back(i);
            else if(s1[i]<='z' && s1[i]>='a')
                l.push_back(i);
            else
                u.push_back(i);
        }
        if(d.size()&&u.size()&&l.size())
        {
            cout<<s1<<endl;
            d.clear();
            u.clear();
            l.clear();
            continue;
        }
        else if(!d.size() && !l.size())
        {
            s1[u[u.size()-1]]='1';
            s1[u[u.size()-2]]='a';
        }
        else if(!u.size() && !l.size())
        {
            s1[d[d.size()-1]]='L';
            s1[d[d.size()-2]]='a';
        }
        else if(!d.size() && !u.size())
        {
            s1[l[l.size()-1]]='1';
            s1[l[l.size()-2]]='A';
        }
        else if(!d.size())
        {
            if(u.size()>1)
                s1[u[u.size()-1]]='1';
            else
                s1[l[l.size()-1]]='1';

        }
        else if(!l.size())
        {
            if(u.size()>1)
                s1[u[u.size()-1]]='a';
            else
                s1[d[d.size()-1]]='a';
        }
        else
        {
            if(l.size()>1)
                s1[l[l.size()-1]]='A';
            else
                s1[d[d.size()-1]]='A';
        }
        cout<<s1<<endl;
        d.clear();
        u.clear();
        l.clear();
    }
}
