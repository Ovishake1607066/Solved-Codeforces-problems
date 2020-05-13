#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c=0;
    cin>>n>>m;
    char s[100][100];
    int ar[100];
    for(int i=0,k=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='#')
            {
                ar[k]=j;
                k++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                for(int k=0;k<n;k++)
                {
                    if(k==i)
                        continue;
                    if(s[k][j]=='#')
                    {
                        for(int l=0;l<m;l++)
                        {
                            if(s[i][l]!=s[k][l])
                            {
                                cout<<"No"<<endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"Yes"<<endl;
}
