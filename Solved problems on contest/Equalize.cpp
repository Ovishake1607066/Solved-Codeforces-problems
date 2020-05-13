#include<bits/stdc++.h>
#define ll long long int
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,b,c=0,j=0,x1=0,x2=0;
    cin>>n;
    ll a[n+10];
    string s1,s2;
    cin>>s1>>s2;
    for(ll i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]=='1')
                x1++;
            else
                x2++;
            a[j++]=i;
        }
    }
    //cout<<j<<endl;
    for(ll i=0;i<j-1;i++)
    {
        if((a[i+1]-a[i])==1)
        {
            if((s1[a[i]]=='0' && s1[a[i+1]]=='1') || (s1[a[i+1]]=='0' && s1[a[i]]=='1'))
            {c++;
            i++;
            }

        }
    }
    cout<<(j-(c*2))+c<<endl;
}
