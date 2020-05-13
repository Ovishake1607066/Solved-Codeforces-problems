#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,a,b,c=1000000000000000000,d,e,x,y=0;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        cin>>x;
        a=n/x;
        b=n%x;
        if(b<c && a>0)
        {
            y=1;
            c=b;
            d=a;
            e=i;
        }
    }
    if(y==0)
        cout<<1<<" "<<0;
    else
        cout<<e+1<<" "<<d;
}
