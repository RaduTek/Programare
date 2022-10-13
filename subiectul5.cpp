#include <bits/stdc++.h>

using namespace std;

ifstream fin("numere.in");

bool sub(int x) {
    if (x == 2)
        return 1;
    if (x < 2 || x % 2 == 0)
        return 0;
    for (int i=3; i*i <= x; i+= 2)
        if (x % i == 0)
            return 0;
    return 1;
}

int main() {
    int x, y=2;
    fin >> x;
    while (x >= 0) {
        if (sub(y))
            cout << y << ' ';
        x--;
        if (y == 2) y--;
        y += 2;
    }
    return 0;
}