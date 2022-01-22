#include<iostream>
#include <set>
#include <vector> // list
#include <map> // dict


using namespace std;

int main() {
    // input
    map<int, int> dict_1;
    map<int, int> dict_2;
    int n, a;
    cin >> n;
    int lst_raw [n] = {};
    int dict_1 [n] = {};


    for (int i = 0; i < n; i++) {
        lst_raw [i] = i+1;
        cin >> a;
        dict_1.insert({lst_raw[i], a});
    }

    # main loops
    int lst_check []
}