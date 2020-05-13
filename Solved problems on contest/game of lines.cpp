#include<bits/stdc++.h>
using namespace std;
#define ll double
int main()
{
    long long n;
    while(cin>>n && n!=0)
    {
        ll a3[100000],g,b,c;
        long long f,s=0,e=0,d=0,a1[n],a2[n];
        for(long long  i=0;i<n;i++)
        {
            cin>>a1[i];
            cin>>a2[i];
        }
        for(long long  i=0,k=0;i<n-1;i++)
        {
            for(long long  j=i+1;j<n;j++)
            {
                b=a2[i]-a2[j];
                c=a1[i]-a1[j];
                if(c==0)
                {
                    if(d==0)
                        s++;
                    d=1;
                    continue;
                }
                else if(b==0)
                {
                    if(e==0)
                        s++;
                    e=1;
                    continue;
                }
                a3[k]=(b/c);
                k++;
                f=k;
                //cout<<b<<c<<endl;
            }
        }
        sort(a3,a3+f);
        g=a3[0];
        if(a3[0])
            s++;
        for(long long  i=0;i<f;i++)
        {
            //cout<<a3[i]<<endl;
            if(a3[i]==g)
                continue;
            else
            {
                g=a3[i];
                s++;
            }
        }
        cout<<int(s)<<endl;
    }
}
