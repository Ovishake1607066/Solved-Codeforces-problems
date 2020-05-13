#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,d,e,f;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll c1[300]={0},c2[300]={0};
    for(ll i=0;i<s1.size();i++)
        c1[int(s1[i])]++;
    for(ll i=0;i<s2.size();i++)
        c1[int(s2[i])]++;
    for(ll i=0;i<s3.size();i++)
        c2[int(s3[i])]++;
    for(ll i=65;i<91;i++)
    {
        if(c1[i]!=c2[i])
        {
            //cout<<i<<endl<<c1[i]<<c2[i]<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
