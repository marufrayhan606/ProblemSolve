// 2029 - Honey Reservoir
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double V, D;

    while (cin >> V && V != EOF)
    {
        cin >> D;

        double radius = D / 2;
        double height = V / (3.14 * pow(radius, 2));
        double area = 3.14 * pow(radius, 2);

        cout << "ALTURA = " << fixed << setprecision(2) << height << endl;
        cout << "AREA = " << fixed << setprecision(2) << area << endl;
    }
}