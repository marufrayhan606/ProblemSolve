#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word1, word2;
    cin >> word1;
    cin >> word2;

    reverse(word2.begin(), word2.end());

    if (word1 == word2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}