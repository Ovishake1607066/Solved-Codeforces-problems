#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i=n)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                c=1;
                for(int k=1; ;k++)
                {
                    if(s[i+k]==s[j+k] && i+k<n && j+k<n && i+k!=j)
                    {
                        c=c+1;
                    }
                    else
                    {
                        if(i+k==j)
                        {
                            if(c>d)
                                {
                                    d=c;
                                }
                        }
                        break;
                    }
                }
            }
        }
    }
    int f=d+1;
    if(d==0)
        cout<<n<<endl;
    else

    cout<<(n-(d*2))+f;
}
