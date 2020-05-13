#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200],i,j,k,l,b,c,ma=0,mi=10000;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>ma)
            {
                ma=a[i];
                j=i;
            }
        if(a[i]<=mi)
            {
                mi=a[i];
                k=i;
            }
    }
    c=j+(n-1-k);
    if(j-k>0)
        c=c-1;
    cout<<c<<endl;
}
