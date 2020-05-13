#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m],b,c=1000000;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<m;i++)
    {
        if(i+n-1<m)
        {
            b=abs(a[i]-a[i+n-1]);
            if(b<c)
                c=b;
        }
    }
    cout<<c<<endl;
}
