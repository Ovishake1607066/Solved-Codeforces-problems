#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,b,c,e,f,t,a1[100000],a2[100000];
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i]>>a2[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a1[j]>a1[j+1])
            {
                t=a1[j];
                a1[j]=a1[j+1];
                a1[j+1]=t;
                t=a2[j];
                a2[j]=a2[j+1];
                a2[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s<=a1[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        s=s+a2[i];
    }
    cout<<"YES"<<endl;
}
