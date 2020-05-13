#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,k,a=0,b,d;
    cin>>r>>c;
    char arr[510][510]={0},ch,ch2,ch3;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b=0;
        if(arr[i][j]=='S')
			{
				if(i-1>=0 && arr[i-1][j]=='W')
				{
					a=1;
					break;
				}
				if(i+1<r && arr[i+1][j]=='W')
				{
					a=1;
					break;
				}
				if(j-1>=0 && arr[i][j-1]=='W')
				{
					a=1;
					break;
				}
				if(j+1<c && arr[i][j+1]=='W')
				{
					a=1;
					break;
				}
				if(i-1>=0 && arr[i-1][j]!='S')
                    arr[i-1][j]='D';
                if(i+1<r && arr[i+1][j]!='S')
                    arr[i+1][j]='D';
                if(j-1>=0 && arr[i][j-1]!='S')
                    arr[i][j-1]='D';
                if(j+1<c && arr[i][j+1]!='S')
                    arr[i][j+1]='D';
			}
        }
    }
    if(a==1)
        cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                    cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}
