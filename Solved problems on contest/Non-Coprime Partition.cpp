#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
long long a[50008]={0},prime[50008]={0};
using namespace std;
int main()
{
    long long e;
    for(long long int i=3;i*i<=50000;i+=2)
        if(a[i]==0)
        {
            for(long long int j=i*i;j<=50000;j=j+(i*2))
                a[j]=1;
        }
    prime[0]=2;
    for(int i=3,j=1;i<=50000;i+=2)
        if(a[i]==0)
        {
            prime[j]=i;
            j++;
            e=j;
        }
    ll n,b,c,d,f;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<"No"<<endl;
        return 0;
    }
    b=((n+1)*n)/2;
    for(ll i=0; ;i++)
    {
        if(prime[i]>n)
            break;
        if(b%prime[i]==0)
        {
            cout<<"Yes"<<endl;
            cout<<1<<" "<<prime[i]<<endl<<n-1<<" ";
            for(ll j=1;j<=n;j++)
            {
                if(j==prime[i])
                    continue;
                else
                    cout<<j<<" ";
            }
            return 0;
        }
    }
    cout<<"No"<<endl;

}
