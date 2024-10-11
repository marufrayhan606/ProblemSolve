// 2518 - FNDI's Staircase
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int N;

    while (cin >> N && N != EOF)
    {
        int H, C, L;
        cin >> H >> C >> L;

        double width = sqrt(pow(H, 2) + pow(C, 2));
        double area = width * L;

        cout << fixed << setprecision(4) << (N * area) / 10000.0 << endl;
    }
}