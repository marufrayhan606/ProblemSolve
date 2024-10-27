#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w; cin >> y >> w;

    int max = y > w ? y : w;
    int numerator = 6 - max + 1;

    int div = __gcd(numerator, 6);

    cout << numerator / div << "/" << 6 / div << endl;

    return 0;
}