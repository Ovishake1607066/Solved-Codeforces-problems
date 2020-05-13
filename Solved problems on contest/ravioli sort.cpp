#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b,c=0,d,e,f=0,m=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
    {
        c=0;
        for(int i=0;i<n-f;i++)
        {
        if(a[i]>m)
            m=a[i];
        if(i==0)
        {
            b=a[i];
            continue;
        }
        if(abs(b-a[i])>=2)
            c=1;
        b=a[i];
        }
        if(c==1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==m)
            a[i]=a[i+1];
        }
        f++;
    }
    cout<<"YES"<<endl;
}
