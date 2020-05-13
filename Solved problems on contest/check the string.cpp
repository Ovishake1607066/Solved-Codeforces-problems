#include<bits/stdc++.H>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0,a=0,b=0,c=0,d,e,l;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
        {
            if(c==1 || b==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            c1++;
            a=1;
        }
        else if(s[i]=='b')
        {
            if(a==0 || c==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                c2++;
                b=1;
            }
        }
        else
        {
            if(a==0 || b==0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
                {
                    c3++;
                    c=1;
                }
        }
    }
    if((c3==c1 || c3==c2) &&(c1>=1 && c2>=1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
