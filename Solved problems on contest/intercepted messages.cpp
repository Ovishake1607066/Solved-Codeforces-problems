#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m1;
    cin>>n>>m1;
    long long int x[n],y[m1],i=0,j=0,a=0,b,c,d,s=0,m;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<m1;i++)
    {
        cin>>y[i];
    }
    for(i=0; ;i++)
    {
        m=x[i];
        b=y[j];
        for(j=j; ;)
        {
                if(m<b)
                {
                    i++;
                    m=m+x[i];
                }
                else if(m==b)
                {
                    s=s+1;
                    j++;
                    break;
                }
                else
                    {
                        j++;
                        b=b+y[j];

                    }
        }
        if(i>=n || j>=m1)
            break;
    }
    cout<<s;
}
