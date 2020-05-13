#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2;
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
            s3=s3+"0";
        else
            s3=s3+"1";
    }
    cout<<s3<<endl;
}
