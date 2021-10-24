#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    string signal;
    while(test--)
    {
        cin >> signal;
        int  xmin = 0, xmax = 0, ymin = 0, ymax = 0;
        for(int i = 0; i < signal.size(); i++)
        {
            if(signal[i] == 'R')
            {
                xmin++;
                xmax++;
            }
            else if(signal[i] == 'L')
            {
                xmin--;
                xmax--;
            }
            else if(signal[i] == 'U')
            {
                ymin++;
                ymax++;
            }
            else if(signal[i] == 'D')
            {
                ymin--;
                ymax--;
            }
            else if(signal[i] == '?')
            {
                xmin--;
                xmax++;
                ymin--;
                ymax++;
            }
        }
        cout << xmin << " " << ymin << " " << xmax << " " << ymax << "\n";
    }
    return 0;
}
