#include <iostream>
using namespace std;

int main() {
    int n;
    while(n > 100||n < 0) {
    cin >> n;
    }
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }    

    int multiple_ary[n];
    for(int i = 0; i < n; i++) {
        multiple_ary[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        if(multiple_ary[i] == 0) {
            int count = 0;
            for(int j = i; j < n; j++) 
                if(a[i] == a[j]) {
                    count++;
                    multiple_ary[j] = 1;
                }
            if(count > 1) {
                cout << a[i] << " : " << count << " Items" << endl;
            }
            else {
                cout << a[i] << " : " << count << " Item" << endl;
            }   
        }
    }

}

// https://stackoverflow.com/questions/34820275/count-how-many-times-elements-in-an-array-are-repeated/34820352