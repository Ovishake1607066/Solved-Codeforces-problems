#include<iostream>
using namespace std;
int main()
{
    int n,m,i=1;
    cin>>n>>m;
    while(1)
    {
        if(n<1 || m<1)
        {
            if(i%2==0)
                cout<<"Akshat";
            else
                cout<<"Malvika";
            break;
        }
        n--;
        m--;
        i++;
    }
}
