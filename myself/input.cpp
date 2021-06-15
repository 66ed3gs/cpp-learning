#include <iostream>
#include <cstdio>
#include <ostream>
using namespace std;

int main() {
    int x, sum;

    while (cin >> x) {
        cout << x << endl;
        sum += x;
    }
    cout << sum << endl;

    return 0;
}
