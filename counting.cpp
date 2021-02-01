#include<iostream>
using namespace std;
int main()
{
    int a[1000],n,max_value;;
    int b[1000],c[1000],c_new[1000];
    cout<<"Enter array size: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max_value=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max_value)
        {
            max_value=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        c[a[i]]=c[a[i]]+1;
    }
    for(int i=0;i<n;i++)
    {
        c_new[i]=0;
    }
    c_new[0]=c[0];
    for(int i=1;i<=max_value;i++)
    {
        c_new[i]=c_new[i-1]+c[i];
    }
    for(int i=0;i<n;i++)
    {
        b[c_new[a[i]]-1]=a[i];
        c_new[a[i]]=c_new[a[i]-1];

    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
