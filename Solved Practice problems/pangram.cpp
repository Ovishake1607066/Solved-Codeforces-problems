#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200];
int main()
{
    ll n,c;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0,j=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            {
                //cout<<int(s[i]);
                a[int(s[i])-32]++;
            }
        else if(s[i]>='A' && s[i]<='Z')
            {
                a[int(s[i])]++;
            }
    }
    for(ll i=65;i<=90;i++)
    {
        if(a[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
