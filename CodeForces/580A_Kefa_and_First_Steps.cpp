#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int temp = nums[0], maxCount = 1, currentCount = 1;
    for (int i = 1; i < n; i++)
    {
        if(nums[i] >= temp){
            currentCount++;
        }else{
            currentCount = 1;
        }

        temp = nums[i];
        
        if(currentCount > maxCount){
            maxCount = currentCount;
        }
    }

    cout << maxCount << endl;
    
    return 0;
}