#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    if (n < 3) {
        cout << s << endl;
        return 0;
    }
    unordered_map<string, int> twoGramCount;
    for (int i = 0; i < n - 1; i++)
    {
        twoGramCount[s.substr(i, 2)]++;
    }
    
    int maxCount = 0;
    string mostFrequentTwoGram;
    for (auto& entry : twoGramCount) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            mostFrequentTwoGram = entry.first;
        }
    }

    cout << mostFrequentTwoGram << endl;
    
    return 0;
}