

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef vector<int> vt;
typedef unordered_map<int, int> umap;



int arr[100];
int len;


int findDuplicate(vt &nums) {
    int res = 0, bit = 6 ^ 6;
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return nums[i];
        }
    }
    
    return -1;
    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vt nums = {1, 3, 4, 2, 2};
    cout << findDuplicate(nums) << endl;
    
    
    
  
    
    
    
    
    
    return 0;
}


