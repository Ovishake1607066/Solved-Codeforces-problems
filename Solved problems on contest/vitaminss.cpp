#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a,b,c,d,e;
    vector<vector<ll> >v(10);
    vector<ll>s;
    string s1;
    cin>>n;
    loop
    {
        cin>>a;
        cin>>s1;
        //cout<<a<<s1<<endl;
        if(s1=="A")
            v[0].push_back(a);
        else if(s1=="B")
            v[1].push_back(a);
        else if(s1=="C")
            v[2].push_back(a);
        else if(s1=="BA" || s1=="AB")
            v[3].push_back(a);
        else if(s1=="BC" || s1=="CB")
            v[4].push_back(a);
        else if(s1=="AC" || s1=="CA")
            v[5].push_back(a);
        else
            v[6].push_back(a);
        //cout<<a<<endl;
    }
    for(ll i=0; i<7; i++)
        sort(v[i].begin(),v[i].end());
    if(v[0].size() && v[1].size() && v[2].size())
        s.push_back(v[0][0]+v[1][0]+v[2][0]);
    if(v[0].size() && v[4].size())
        s.push_back(v[0][0]+v[4][0]);
    if(v[1].size() && v[5].size())
        s.push_back(v[1][0]+v[5][0]);
    if(v[2].size() && v[3].size())
        s.push_back(v[2][0]+v[3][0]);
    if(v[6].size())
        s.push_back(v[6][0]);
    if(v[3].size() && v[4].size())
        s.push_back(v[3][0]+v[4][0]);
    if(v[3].size()&& v[5].size())
        s.push_back(v[3][0]+v[5][0]);
    if(v[5].size()&& v[4].size())
        s.push_back(v[5][0]+v[4][0]);
    if(!s.size())
{
    cout<<-1<<endl;
    return 0;
}
sort(s.begin(),s.end());
cout<<s[0]<<endl;
}

