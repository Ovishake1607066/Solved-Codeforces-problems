#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j,l,a,b;
    char s[110];
    cin>>n;
    cin>>s;
    l=strlen(s);
    for(i=0; ;i++)
    {
        a=0;
        b=0;
        for(j=0;j<l;j++)
        {
            if((s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='y') && (s[j+1]=='a'||s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u'||s[j+1]=='y')&& b==0)
            {
                a=1;
                l=l-1;
                b=1;
            }
            if(a==1)
            {
                s[j+1]=s[j+2];
            }
        }
        if(a==0)
            {break;
            }
    }
    cout<<s;
}
