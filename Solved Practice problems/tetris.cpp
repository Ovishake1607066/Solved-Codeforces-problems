#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b,c=0;
    cin>>n>>m;
    int a[n]={0};
    for(int i=0;i<m;i++)
    {
        cin>>b;
        a[b-1]++;
    }
    sort(a,a+n);
    cout<<a[0]<<endl;
}
