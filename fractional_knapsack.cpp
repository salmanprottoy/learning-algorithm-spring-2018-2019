#include <bits/stdc++.h>

using namespace std;

struct Item
{
    int value, weight;


    Item(int value, int weight) : value(value), weight(weight)
    {}
};


bool cmp(struct Item a, struct Item b)
{
    double d1 = (double)a.value / a.weight;
    double d2 = (double)b.value / b.weight;
    return d1 > d2;
}


double fractionalKnapsack(int W, struct Item arr[], int n)
{

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].value << "  " << arr[i].weight << " : "
             << ((double)arr[i].value / arr[i].weight) << endl;
    }

    int curWeight = 0;
    double finalvalue = 0.0;


    for (int i = 0; i < n; i++)
    {

        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }


        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }


    return finalvalue;
}


int main()
{
    int W = 20;
    Item arr[] = {{200, 5}, {250, 10}, {300, 15}, {200,20}, {80,2}, {150,3}};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);
    return 0;
}
