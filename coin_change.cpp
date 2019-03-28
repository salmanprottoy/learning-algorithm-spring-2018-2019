#include<bits/stdc++.h>
using namespace std;
int count(int S[], int m, int n )
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (m <=0 && n >= 1)
        return 0;
    return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}

int main()
{
    int i, j;
    int arr[] = {5,8,11,15,18};
    int m = sizeof(arr)/sizeof(arr[0]);
    if(count(arr, m, 34)==0)
    {
        cout<<"Not Possible"<<endl;
    }
    else
    {
        cout<<"Possible"<<endl;
    }
    return 0;
}
