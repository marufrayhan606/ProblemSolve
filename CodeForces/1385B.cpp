#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        unordered_set<int> s;
        vector<int> vec;
        for(int i = 0; i < 2*n; i++){
            cin >> x;
            vec.push_back(x);
        }
        
        for(auto a: vec){
            if(!s.count(a)){
                cout << a << " ";
                s.insert(a);
            }
            
        }
        cout << endl;
    }

    return 0;
}
