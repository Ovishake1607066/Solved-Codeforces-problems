#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,j=0,k=0,a,r=0,ar[1004],c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            {
                j=1;
                c++;
                if(i!=0)
                {
                    ar[r++]=k;
                    k=1;
                }
                else
                    k++;
            }
        else
        {
            k++;
        }
    }
    ar[r++]=k;
    cout<<c<<endl;
    for(ll i=0;i<r;i++)
        cout<<ar[i]<<" ";
}
