#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, i = 1;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        char o, p;
        cin >> x >> o >> y >> p >> z;
        //cout << x << o << y << p << z;
        if(o == '+')
        {
            if(x + y == z)
            {
                cout << "Case " << i << ":" << " YES" << "\n";
            }
           else
           {
               cout << "Case " << i << ":" << " NO" << "\n";
           }
        }
        else if(o == '-')
        {
            if(x - y == z)
            {
                cout << "Case " << i << ":" << " YES" << "\n";
            }
           else
           {
               cout << "Case " << i << ":" << " NO" << "\n";
           }
        }
        i++;
    }
    return 0;
}

