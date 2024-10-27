#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    bool isLove = false;

    for (int i = 1; i <= n; i++)
    {
        if(isLove)
            cout << "I love ";
        else
            cout << "I hate ";
        isLove = !isLove;

        if(i > 0 && i < n)
            cout << "that ";
    }

    cout << "it";    

}