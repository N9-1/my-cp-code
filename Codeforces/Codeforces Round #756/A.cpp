#include<iostream>
#include<bits/stdc++.h>
#include <string> 

#define long long long

using namespace std;

int main() {
    int t, n, l, count, n_case;
    cin >> t;
    
    for(int i = 0; i <= t; i++) {
        count = 0;
        cin >> n;
        n_case = n;
        l = floor(log10(abs(n))) + 1;
        if(n % 2 == 0){
            cout << '0';
        } else {
            while(n_case % 2 != 0){
                string n_s = to_string(n);
                string l_s = to_string(l);
                auto loc = n_s.find(l_s);
                if ( loc != string::npos ) {
                    reverse(n_s.begin() + loc, n_s.begin() + loc + l_s.size());
                }
                n_case = stoi(n_s);
                l -= 1;
                count += 1;
            }
            cout << count;
        }
    }

}
