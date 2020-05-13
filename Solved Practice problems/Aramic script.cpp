#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,b=0,c=0,d,e,f;
    cin>>n;
    string s,s1;
    getchar();
    getline(cin,s);
    ll a[10000]= {0},a2[10000],a3[10000]= {0};
    //cout<<s.size()<<endl;
    stringstream sin(s);
    for(ll i=0; i<n; i++)
    {
        sin>>s1;
        ll k=0;
        for(ll j=0; j<s1.size(); j++)
        {
            if(!a[int(s1[j])])
            {
                b=b+int(s1[j]);
                a2[k++]=int(s1[j]);
            }
            a[int(s1[j])]=1;
        }
        //cout<<b<<endl;
        if(!a3[b])
            c++;
        a3[b]=1;
        b=0;
        for(ll m=0; m<k; m++)
        {
            a[a2[m]]=0;
        }
    }
    cout<<c<<endl;
}
