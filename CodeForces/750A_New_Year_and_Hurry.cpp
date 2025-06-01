#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int remainingTime = 240 - k, problemsSolved = 0;

    while(problemsSolved < n && remainingTime >= 5 * (problemsSolved + 1)) {
        remainingTime -= 5 * (problemsSolved + 1);
        problemsSolved++;
    }

    cout << problemsSolved << endl;
    return 0;
    
}