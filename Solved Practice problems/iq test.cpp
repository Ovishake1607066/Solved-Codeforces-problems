#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n],b=0,c=0,a2[2]={0};
    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                {
                    a2[0]++;
                    b=i+1;
                }
            else
                {
                    a2[1]++;
                    c=i+1;
                }
        }
    if(a2[0]==1)
        cout<<b<<endl;
    else
        cout<<c<<endl;
}
