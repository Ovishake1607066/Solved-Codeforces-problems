#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a,b,i,j,l,m,s=0,p,q,c=0,ci;
    cin>>n>>k>>a>>b;
    m=(n-1)*a;
    if(n==1)
        cout<<0;
    else if(m<=b)
    {
        cout<<m;
    }
    else if(n/k==1 && b<=a)
    {
            cout<<b;
    }
    else
    {
        for(i=0; ;i++)
        {
            cout<<s<<endl;
            if(n%k==0)
            {
                c=(n/k)*a;
                if(c<=b)
                {
                    s=s+a;
                    n=n-1;
                }
                else
                {
                    n=n/k;
                    s=s+b;
                }
            }
            else
            {
                ci=n%k;
                if(n/k>0)
                {
                    n=n-ci;
                    s=s+(a*ci);
                }
                else
                {
                    n=n-1;
                    s=s+a;
                }
            }
            if(n==1)
                break;
        }
        cout<<s;
    }
}
