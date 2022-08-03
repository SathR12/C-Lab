//
//  bike_tour.cpp
//  miscellaneous
//
//  Created by Sathya Regunathan on 8/3/22.
//

#include <stdio.h>
#include <iostream>
#include <numeric>

typedef long long ll;

using namespace std;

int arr[20];
int n;

void solve() {
    cout << accumulate(arr, arr + n, 0) << endl;
}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
   
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << "Case #" << i + 1 << ": ";
        solve();
    }
    
    
    
    return 0;
}
