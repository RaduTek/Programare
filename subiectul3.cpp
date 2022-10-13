#include <bits/stdc++.h>

using namespace std;

ifstream fin("numere.in");

int sub(int x) {
    int a=1, b=1, i;
    while (b <= x) {
        i = a;
        a = b;
        b = a + i;
    }
    return a;
}

int main() {
    int x;
    fin >> x;
    while (x > 0) {
        int y = sub(x);
        x -= y;
        cout << y << ' ';
    }
    return 0;
}