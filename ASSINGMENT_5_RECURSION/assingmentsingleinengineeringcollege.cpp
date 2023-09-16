#include<iostream>
#include<bits/stdc++.h>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main() {
    int N, x;
    cin >> N;
    
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    
    cin >> x;
    
    int left = 1, right = *max_element(heights.begin(), heights.end());
    int result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long totalWood = 0;
        
        for (int i = 0; i < N; i++) {
            if (heights[i] > mid) {
                totalWood += (heights[i] - mid);
            }
        }
        
        if (totalWood >= x) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << result << endl;
    
    return 0;
}