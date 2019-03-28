#include<bits/stdc++.h>
using namespace std;
int table[500][500];
int ncr(int n,int r)
{
    if(r==1)
    {
        return n;
    }
    if(n==r)
    {
        return 1;
    }
    if(table[n][r]!=-1)
    {
        return table[n][r];
    }
    table[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return table[n][r];
}
int main()
{
    int x,y;
    cin>>x>>y;
    memset(table,-1,sizeof(table));
    cout<<ncr(x,y)<<endl;
    return 0;
}
