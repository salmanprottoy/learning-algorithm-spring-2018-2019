#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count1=1;
    vector<pair<int,int> >vect;
    int arr_s[]={8,9,8,13,10,14,8,10,12,9,12,16};
    int arr_e[]={10,12,15,16,14,16,17,17,17,17,15,18};

    int n=sizeof(arr_s)/sizeof(arr_s[0]);
    for(int i=0;i<n;i++)
    {
        vect.push_back(make_pair(arr_s[i],arr_e[i]));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(vect[i].second == vect[j].first)
            {
                i=j;
                if(vect[i].second==0)
                {
                    count1++;
                    break;
                }
                else
                    count1++;
            }
        }
    }
    cout<<count1<<endl;
}
