#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a1[n],a2[n],b,c,d,s1=0,s2=0;
    for(ll i=0;i<n;i++)
        cin>>a1[i];
    loop
    {
        cin>>a2[i];
    }
    sort(a1,a1+n);
    sort(a2,a2+n);
    b=n-1;
    c=n-1;
    while(1)
    {
        if(b<0 && c<0)
            break;
        if((a1[b]>a2[c] || c<0)&& b>=0)
        {
            s1=s1+a1[b];
            b--;
        }
        else
        {
            c--;
        }
        if(b<0 && c<0)
            break;
        if((a2[c]>a1[b] || b<0)&& c>=0)
        {
            s2=s2+a2[c];
            c--;
        }
        else
        {
            b--;
        }
        //cout<<s1<<s2<<endl;
    }
    cout<<s1-s2<<endl;
}
