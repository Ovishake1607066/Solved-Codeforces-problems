#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
long long a[10050]={0},prime[10050]={0};
using namespace std;
int main()
{
    long long e;
    for(long long int i=3;i*i<=10050;i+=2)
        if(a[i]==0)
        {
            for(long long int j=i*i;j<=10050;j=j+(i*2))
                a[j]=1;
        }
    prime[0]=2;
    for(int i=3,j=1;i<=10050;i+=2)
        if(a[i]==0)
        {
            prime[j]=i;
            j++;
            e=j;
        }
    cout<<prime[e-1]<<endl;
    ll n,b,c,d,f;
    vector<vector<ll> >v(11000);
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>b;
        for(ll j=0;j<e;j++)
        {
            if(b%prime[j]==0)
                v[i]

        }
    }

}
