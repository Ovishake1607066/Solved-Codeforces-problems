#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x[110000],j=0,k=1000000,a,b,l=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    a=x[0];
    for(int i=0;i<n;i++)
    {
        if(x[i]==a)
        {
            j=j+1;
        }
        else
        {
            if(j!=k && l==1)
            {
                cout<<"NO";
                return 0;
            }
            a=x[i];
            k=j;
            j=1;
            l=1;
        }
        if(j>k)
        {
            cout<<"NO";
            return 0;
        }
    }
    if(j!=k && l==1)
        cout<<"NO";
    else
        cout<<"YES";
}
