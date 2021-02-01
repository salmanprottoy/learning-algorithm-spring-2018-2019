#include<bits/stdc++.h>
using namespace std;
int a[1000];
void Merge(int a[],int low,int high,int mid)
{
    int i=low,j=mid+1,k=low;
    int temp[high-mid+1];
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    for(i=low;i<k;i++)
    {
        a[i]=temp[i];
    }
}
void merge_sort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        Merge(a,low,high,mid);
    }

}
int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
