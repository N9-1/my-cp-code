#include<iostream>
#include<algorithm>

using namespace std;

int largest(int arr[], int n)
{
    return *max_element(arr, arr+n);
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    
    for(int i = 0;i <= n;i++) {
        cin >> a[i] >> b[i];
        if(a[i] > b[i]) {
            a[i] = a[i] - 360 ;
        }
    }

    //  case 1

    for(int j = 0; j <= n; j++) {
        for(int k = 1; k <= n; k++) {
            k = k+j;
            if(b[j] >= a[k] && a[k] >= a[j]) {
                // cout << "a = " << a[j] << endl;
                a[k] = a[j];
                b[k] = max(b[j],b[k]);
                break;
            }
        }
    }

    int result[n];

    for(int u = 0; u <= n; u++) {
        // cout << a[u] << "," << b[u] << endl;
        result[u] = b[u]-a[u];
        // cout << "result " << result[u] << endl; 
    }
    

    int size_arr = sizeof(result)/sizeof(result[0]);
    cout << largest(result, size_arr);
    return 0;
}