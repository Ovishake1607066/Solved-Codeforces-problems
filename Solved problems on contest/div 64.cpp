#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            c1=1;
        else if(s[i]=='0' && c1==1)
            c2++;
        if(c1==1 && c2>5)
        {
            cout<<"yes"<<endl;
            return 0;
        }
    }
    cout<<"no"<<endl;
}
