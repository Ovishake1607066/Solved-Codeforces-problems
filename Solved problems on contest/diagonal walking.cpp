#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    char s[110];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        if((s[i]=='R' && s[i+1]=='U' && i+1<n) ||(s[i]=='U' && s[i+1]=='R' && i+1<n))
        {
            c++;
            i++;
            continue;
        }
        c++;
    }
    cout<<c<<endl;
}
