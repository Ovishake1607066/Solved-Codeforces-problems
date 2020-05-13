#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,y,i,j,k,a[1000000000],b,c,d,s=0;
    cin>>p>>y;
    for(i=2;i<=p;i++)
    {
        for(j=1;j<=y/j;j++)
        {
            c=i*j;
            for(k=2;k<=1000000000;k++)
            {
                if(k==c)
                {a[k]==0;
                break;
                }
            }
            k++;
        }
    }
    for(i=0; ;i++)
    {
        if(a[i]!=0 &&a[i]>s)
            s=a[i];
    }
    cout<<s;}
