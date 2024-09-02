#include<bits/stdc++.h>
using namespace std;
void greedy_activity_selector(int s[],int f[], int n)
{
    int i=0,j;
    cout<<"Following activities are selected "<<endl;
    cout<<i<<" ";
    for(j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }
}
int main()
{
    int s[1000],f[1000],n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of Start time array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cout<<"Enter the elements of Finish time array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }
    greedy_activity_selector(s,f,n);
    return 0;
}
