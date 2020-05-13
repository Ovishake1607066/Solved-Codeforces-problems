#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],i,j,c=0,b,co=0,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=0;
        k=i;
        cin>>a[i];
        b=a[i];
        if(b==0)
            continue;
        for(j=0;j<k;j++)
        {
            if(b==a[j])
                {
                    c=1;
                    break;
                }
        }
        k++;
        if(c==0)
            co=co+1;
    }
    cout<<co;
}
