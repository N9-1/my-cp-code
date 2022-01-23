#include <iostream>
using namespace std;

//Count how many times elements 
//in an array are repeated

int main() {
    const int N = 10;

    int A[N];
    for(int i = 0; i < N; i++)
        cin >> A[i];

    int seen[N];
    for(int i = 0; i < N; i++)
        seen[i] = 0;

    for(int i = 0; i < N; i++) {
        if(seen[i] == 0) {
            int count = 0;
            for(int j = i; j < N; j++)
                if(A[j] == A[i]) {
                    count += 1;
                    seen[j] = 1;
                }
            cout << A[i] << " occurs " << count << " times" << endl;
        }
    }
}