#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n)
{
    int i,index_min,value;
    for(i=0;i<(n-1);i++)
    {
        index_min=i;
        value=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<value)
            {
                value=a[j];
                index_min=j;
            }
        }
        a[index_min]=a[i];
        a[i]=value;
    }

}
int main()
{
    int a[1000],n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionSort(a,n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
