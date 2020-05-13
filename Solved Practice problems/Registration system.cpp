#include<bits/stdc++.h>
#define ll long long int
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a,b,c;
    string s;
    cin>>n;
    map<string,ll>m;
    map<string,ll> :: iterator it;
    while(n--)
    {
        cin>>s;
        it=m.find(s);
        if(it==m.end())
        {
            cout<<"OK"<<endl;
            m.insert(make_pair(s,0));
        }
        else
        {
            it->second++;
            cout<<s<<it->second<<endl;
        }
    }
}
