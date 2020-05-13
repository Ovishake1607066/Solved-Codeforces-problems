#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,s=0,c=0;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]+k>s-a[i])
                c=c+1;
        }
        cout<<c<<endl;
    }
}
