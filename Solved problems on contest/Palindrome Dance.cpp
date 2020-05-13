#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a,b,c,d,e,s=0;
    cin>>n>>a>>b;
    e=min(a,b);
    ll ar[n];
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    if(n%2==0)
    {
        d=n/2;
        c=d-1;
        while(1)
        {
            if(c<0 || d>=n)
                break;
            if((ar[c]==0 && ar[d]==1) ||(ar[c]==1 && ar[d]==0))
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                if(ar[c]==2 && ar[d]==2)
                    s=s+2*e;
                else if(ar[c]==ar[d])
                    s=s+0;
                else if( ar[c]==0 || ar[d]==0)
                    s=s+a;
                else
                    s=s+b;
            }
            c--;
            d++;
        }
    }
    else
    {
        c=n/2;
        d=c;
        if(ar[c]==2)
            s=s+e;
        c--;
        d++;
        while(1)
        {
            //cout<<ar[c]<<ar[d]<<endl;
            if(c<0 || d>=n)
                break;
            if((ar[c]==0 && ar[d]==1) ||(ar[c]==1 && ar[d]==0))
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                if(ar[c]==2 && ar[d]==2)
                    s=s+2*e;
                else if(ar[c]==ar[d])
                    s=s+0;
                else if( ar[c]==0 || ar[d]==0)
                    s=s+a;
                else
                    s=s+b;
            }
            c--;
            d++;
        }

    }
    cout<<s<<endl;
}
