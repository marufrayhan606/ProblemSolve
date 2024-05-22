#include <iostream>
using namespace std;

int main()
{
    int testCases, x = 0;
    cin >> testCases;

    while (testCases--)
    {
        string statement;
        cin >> statement;

        (statement == "X++") ? x++ : 0;
        (statement == "++X") ? ++x : 0;
        (statement == "X--") ? x-- : 0;
        (statement == "--X") ? --x : 0;
    }
    cout << x << endl;
    return 0;
}