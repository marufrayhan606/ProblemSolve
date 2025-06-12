#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> a = {100, 20, 10, 5, 1};
    
    for(int i: a){
        if(i <= n){
            count += (n / i);
            n = n % i;
        }
    }
    
    cout << count << endl;

    return 0;
}
