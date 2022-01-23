#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    while(n > 100||n < 0) {
    	cin >> n;
    }
    float a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    float sum = 0.00;
    for(int i = 0; i < n; i++) {
        sum = sum + a[i]; 
    }
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << sum;
}