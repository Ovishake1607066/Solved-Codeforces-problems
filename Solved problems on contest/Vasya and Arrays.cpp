#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    ll n,m,b=0,e=0,c=0,d=0,s1=0,s2=0,f=0;
    cin>>n;
    ll a[n];
    loop
    {
        cin>>a[i];
        s1=s1+a[i];
    }
    cin>>m;
    ll a2[m];
    loop2
    {
        cin>>a2[j];
        s2=s2+a2[j];
    }
    if(s1!=s2)
    {
        cout<<-1<<endl;
        return 0;
    }
    c=a[0];
    d=a2[0];
    for(ll i=1,j=1; ;)
    {
        //cout<<c<<"   "<<d<<endl;
        if(c==d)
            {
                c=a[i++];
                d=a2[j++];
                b++;
                continue;
            }
        if(i>=n || j>=m)
            break;
        if(c+a[i]<=d)
            {
                c=c+a[i];
                i++;
            }
        else
            {
                d=d+a2[j];
                j++;
            }
    }
    cout<<b<<endl;
}
