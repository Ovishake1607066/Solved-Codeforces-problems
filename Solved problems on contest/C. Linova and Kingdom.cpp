#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll chk[1000000];
ll lev[1000000];
ll ex[1000000];
vector<vector<ll> >adj(1000000);
vector<vector<ll> >lv(1000000);
int main()
{
    ll tn,n1,n2,k,mx=0,aa=0,bb=0;
    cin>>tn>>k;
    vector<ll>v;
    for(ll i=0; i<tn-1; i++)
    {
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
    queue<ll>q;
    ll c=0;
    q.push(1);
    chk[1]=1;
    lev[1]=0;
    lv[0].push_back(1);
    ll x;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        c++;
        for(ll i=0; i<adj[x].size(); i++)
        {
            if(!chk[adj[x][i]])
            {
                chk[adj[x][i]]=1;
                q.push(adj[x][i]);
                lev[adj[x][i]]=lev[x]+1;
                lv[lev[x]+1].push_back(adj[x][i]);
                mx=max(mx,lev[x]+1);
            }
        }
    }
    for(ll i=0; i<=tn; i++)
    {
        // aa=0;
        chk[i]=0;
        //cout<<lev[i]<<endl;
    }
    for(ll i=mx; i>=0; i--)
    {

        vector<ll>vv;
        for(ll j=0; j<lv[i].size(); j++)
        {
            ll zz=0;
            bb=0;
            ll ww=0;
            //cout<<lv[i][j]<<endl;
            for(ll qq=0; qq<adj[lv[i][j]].size(); qq++)
            {
                if(chk[adj[lv[i][j]][qq]])
                {
                    zz=zz+adj[adj[lv[i][j]][qq]].size();
                    ww++;
                }
                else
                {
                    vv.push_back(adj[lv[i][j]][qq]);
                }
                //cout<<adj[lv[i][j]][qq]<<"  "<<lv[i][j]<<endl;
            }
            chk[lv[i][j]]=1;
            bb=bb+i-ww-ex[lv[i][j]];
            //cout<<ww<<"  "<<ex[lv[i][j]]<<endl;
            //cout<<bb<<endl;
            v.push_back(bb);
            //cout<<lv[i][j]<<"  "<<bb<<endl;
            for(ll jj=0; jj<vv.size(); jj++)
            {
                //cout<<lv[i][j]<<"  "<<vv[jj]<<"  "<<zz<<endl;
                ex[vv[jj]]+=zz;
            }
            vv.clear();
        }

    }
    sort(v.begin(),v.end());
    for(ll kk=0,i=v.size()-1; i>=0,kk<k; i--,kk++)
    {
        aa+=v[i];
    }
    cout<<aa<<endl;

}
