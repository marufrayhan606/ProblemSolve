#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector <int> v = {k*l/nl, c*d, p/np};
    
    cout << *min_element(v.begin(), v.end())/n << endl;

    return 0;
}