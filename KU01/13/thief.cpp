#include<iostream>
#include <set>
#include <time.h>

using namespace std;

int main() {

    int x, y, z, index;
    cin >> x >> y >> z;
    set<int, greater<int> > ans;
    
    int i = 1;
    ans.insert(1);

    clock_t start = clock(); // Start measuring time

    while (index != z && index != 1)
    {
        i = i + y;
        if (i > x)
        {
            i = i - x;
        }
        ans.insert(i);
        // cout << "i = " << i;
        index = i;
    }
    cout << ans.size() << endl;

    // Stop measuring time and calculate the elapsed time
    clock_t end = clock();

    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    
    printf("Time measured: %.40f seconds.\n", elapsed);
    
    return 0;
}