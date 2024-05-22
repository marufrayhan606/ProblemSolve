#include <iostream>
using namespace std;

int main()
{
    int Limak, Bob, count = 0;
    cin >> Limak >> Bob;

    while (Limak <= Bob)
    {
        Limak *= 3;
        Bob *= 2;
        count++;
    }

    cout << count;

    return 0;
}