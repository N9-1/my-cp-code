#include<iostream>
#include<bits/stdc++.h>
#include<vector>

#define long long long

using namespace std;

int main() {
    vector<int> vec;

    int n, x[n], y[n], c[n];

    cin >> n >> x[0] >> y[0];

    for(int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i] >> c[i];
    }
    
    int cal_x;
    int cal_y;
    int count;

    for(int j = 1; j <= n; j++) {
        // cout << "j = " << j << " ";
        cal_x = x[j];
        cal_y = y[j];
        count = c[j];
        for(int k = 1; k <= n+1; k++) {
            if(x[j] >= x[0] || y[j] >= y[0]) {
                vec.push_back(c[j]);
                break;
            }
            if(k == (n+1)) {
                int z = -1;
                vec.push_back(z);
                break;
            }
            if(cal_x < x[0] || cal_y < y[0] || k != j) {
                if(x[k] >= x[0] || y[k] >= y[0]) {
                    continue;
                } else {
                    cal_x += x[k];
                    cal_y += y[k];
                    count += c[k];
                }
                
            }  else {
                // cout << "count = " << count << k << endl;
                vec.push_back(count);
                }
           
            }
        }
    
    sort(vec.begin(), vec.end());

    cout << vec.front();
    }