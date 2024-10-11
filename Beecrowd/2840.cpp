// 2840 - Balloon++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, l;
    cin >> r >> l;

    float pi = 3.1415;
    float volume = (4.0 / 3) * pi * pow(r, 3);

    cout << l / (int)volume << endl;
}