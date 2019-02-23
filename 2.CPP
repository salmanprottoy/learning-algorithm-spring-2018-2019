#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[],int n)
{
    int ptr,temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        ptr=i-1;
        while(ptr>=0 && a[ptr]>temp)
        {
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
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
    insertionSort(a,n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
