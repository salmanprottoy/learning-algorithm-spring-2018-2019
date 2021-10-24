#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, k, input;
    set<int> s1, s2, result;
    vector<int> v1, v2;
    cin >> n >> k;
    while(k--)
    {
        cin >> input;
        s1.insert(input);
    }
    for(int i = 0; i < 10; i++)
    {
        s2.insert(i);
    }
    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(result, result.end()));
    copy(result.begin(), result.end(), back_inserter(v2));
    sort(v2.begin(), v2.end());
    stringstream ss;
    ss << n;
    string s = ss.str();
    int sz = s.size();

    if(v2[0] == 0)
    {
        swap(v2[0], v2[1]);
        for(int i = 0; i < sz; i++)
        {

        }
    }

}
