#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,m,k,a,b,c=0;
        cin>>n>>m>>k;
        a=abs(n-m);
        if(a%2!=0)
            c=1;
        if(k<max(n,m))
        {
            cout<<-1<<endl;
        }
        else
        {
            if(n==m)
            {
                b=k-n;
                if(b%2==0)
                    cout<<k<<endl;
                else
                    cout<<k-2<<endl;
            }
            else
            {
                if(c==1)
                {
                    k--;
                    cout<<k<<endl;
                }
                else
                {
                    b=k-max(n,m);
                    if(b%2==0)
                        cout<<k<<endl;
                    else
                        cout<<k-2<<endl;
                }
            }
        }
    }
}
