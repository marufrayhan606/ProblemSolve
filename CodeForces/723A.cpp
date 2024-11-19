#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    int sum = 0;
    sum += v[1] - v[0];
    sum += v[2] - v[1];

    cout << sum << endl;

    return 0;
}