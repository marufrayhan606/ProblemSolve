#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string queue;
    cin >> queue;

    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                queue[i] = 'G';
                queue[i + 1] = 'B';
                i++;
            }
        }
    }

    cout << queue << endl;
}
