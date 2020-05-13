#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,m,b,c,d,sum=0,x;
    cin>>n>>k>>m;
    getchar();
    string s;
    getline(cin,s);
    long long int a1[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    while(k--)
    {
        cin>>b;
        if(b>1)
        {
            int a2[b],mi=10000000000,c;
            for(long long int i=0;i<b;i++)
            {
                cin>>a2[i];
                c=a2[i]-1;
                if(a1[c]<mi)
                    mi=a1[c];
            }
            for(long long int i=0;i<b;i++)
            {
                c=a2[i]-1;
                a1[c]=mi;
            }
        }
        else
        {
            cin>>d;
        }
    }
    while(m--)
    {
        x=0;
        string ch;
        cin>>ch;
        stringstream sin(s);
        string s1;
        while(1)
        {
            sin>>s1;
            if(s1==ch)
            {
               sum=sum+a1[x];
               break;
            }
            x++;
        }
    }
    cout<<sum<<endl;

}
