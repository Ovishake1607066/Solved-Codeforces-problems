#include<iostream>
using namespace std;
int main()
{
    int n,t,i,j,a,b,l;
    string s;
    cin>>n>>t;
    cin>>s;
    l=s.size();
    for(j=0;j<t;j++)
    {
        for(i=1;i<l;i++)
        {
            if(s[i]=='G' && s[i-1]=='B')
            {
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }
    cout<<s;
}
