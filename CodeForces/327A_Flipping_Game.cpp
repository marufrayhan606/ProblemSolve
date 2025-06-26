#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, numOfOnes = 0;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        numOfOnes += a[i];
    }

    if (numOfOnes == n)
    {
        cout << n - 1 << endl; 
        return 0;
    }

    int maxDiff = INT_MIN, currentDiff = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] == 0)
        {
            currentDiff++;
        }
        else
        {
            currentDiff--;
        }

        if (currentDiff > maxDiff)
        {
            maxDiff = currentDiff;
        }
        if (currentDiff < 0){
            currentDiff = 0;
        }
    }

    cout << numOfOnes + maxDiff << endl;   


    return 0;
}