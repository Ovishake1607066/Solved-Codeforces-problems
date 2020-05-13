#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k1,k2;
    cin>>n>>k1>>k2;
    long long a1[n],a2[n],a3[n],b,c,d,s=0;
    b=k1+k2;
    for(long long i=0;i<n;i++)
        cin>>a1[i];
    for(long long i=0;i<n;i++)
    {
        cin>>a2[i];
        a3[i]=abs(a1[i]-a2[i]);
    }
    for(int i=0;i<b;i++)
    {
        sort(a3,a3+n);
        if(a3[n-1]==0)
            a3[n-1]=a3[n-1]+1;
        else
            a3[n-1]=a3[n-1]-1;
    }
    for(int i=0;i<n;i++)
    {
        s=s+a3[i]*a3[i];
    }
    cout<<s<<endl;
}
