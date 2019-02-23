#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n)
{
    int i, j, x;
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-1; j++)
            {
            if(a[j] > a[j+1])
            {
                x = a[j];
                a[j] = a[j+1];
                a[j+1] = x;
            }
        }
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
    bubbleSort(a,n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
