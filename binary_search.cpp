#include<bits/stdc++.h>
using namespace std;
int a[1000];
int bs(int m,int f,int l)
{
    int mid=(f+l)/2;
    if(f>l)
    {
        return 0;
    }
    if(a[mid]==m)
    {
        return 1;
    }
    else if(a[mid]>m)
    {
        return bs(m,f,mid-1);
    }
    else if(a[mid]<m)
    {
        return bs(m,mid+1,l);
    }
}
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    if(bs(m,0,n)==1)
    {
        cout<<"Data found!"<<endl;
    }
    else
    {
        cout<<"Data not found!"<<endl;
    }
}
