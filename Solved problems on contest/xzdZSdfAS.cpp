
 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod1 1000000007
#define inf 1000000007
int main()
{
    ll total,k;
    cin>>total>>k;
    //cout<<5/6+1<<endl;
    ll temp=min(total,k);
    ll ans=0;
    for(ll i=1; i<=temp; i++)
    {
        for(ll j=1; j<=temp; j++)
        {
            ll st=i*i+j*j;
            if(st%k==0)
            {
                ll ji=(total-i)/k+1;
                cout<<(total-i)/k<<endl;
                ji*=((total-j)/k+1);
                //cout<<i<<j<<endl<<ji<<endl;
                ans+=ji;
            }
        }
    }
    cout<<ans<<endl;
}
