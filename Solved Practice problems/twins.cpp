#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[110],s=0,b,c=0,d,e;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    b=s/2;
    sort(a,a+n);
    for(int i=n-1,j=0;i>=0;i--,j++)
    {
        c=c+a[i];
        if(c>b)
        {
            cout<<j+1<<endl;
            return 0;
        }
    }

}
