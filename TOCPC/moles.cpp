#include<iostream>
#include<bits/stdc++.h>
#include<vector>

#define long long long

using namespace std;

int main() {
    int n, s[n], t[n];
    
    t[0] = 0;

    cin >> n >> s[0];

    for(int i = 1; i <= n; i++) {
        cin >> s[i] >> t[i];
    }
    if(s[0] == s[1]) {
        cout << n;
    } else {
        cout << n-1;
    }
    
}