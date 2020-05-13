#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,j,s1,s2,s3,m;
    int n;
    cin>>n;
    long long int b[n];
    s1=0;
    s2=0;
    s3=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s1=s1+a;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    m=b[0];
    for(i=1;i<n;i++)
    {
        if((b[i]+m)>=s1)
        {
            s3=s3+1;
            break;
        }
    }
    if(s3>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

