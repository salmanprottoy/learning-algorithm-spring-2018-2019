#include<bits/stdc++.h>
using namespace std;

int max1(int a,int b)
{
    return (a>b)?a:b;
}

int knapsack(int w,int wt[],int val[], int n)
{
    if(n==0 || w==0)
    {
        return 0;
    }
    if(wt[n-1] > w)
    {
        return knapsack(w,wt,val,n-1);
    }
    else
    {
        return max1(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
    }
}
int main()
{
    int val[]={120,280,150,200,180};
    int wt[]={1,4,3,4,3};
    int n=sizeof(val)/sizeof(val[0]);
    int w=10;
    //cin>>w;
    cout << knapsack(w,wt,val,n);
    return 0;
}
