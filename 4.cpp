#include<bits/stdc++.h>>
using namespace std;
void linearSearch(int a[],int n,int value)
{
    int index=0;
    int position=-1;
    bool found=false;

    while(index<n && !found)
    {
        if(a[index]==value)
        {
            found=true;
            position=index;
        }
        index++;
    }
    cout<<endl;
    if(position==-1)
    {
        cout<<"nil"<<endl;
    }
    else
    {
        cout<<"Found at index number "<<position<<"."<<endl;
    }
}
int main()
{
    int a[1000],n,value;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value you want to search?"<<endl;
    cin>>value;
    linearSearch(a,n,value);
    return 0;
}
