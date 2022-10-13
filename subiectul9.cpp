#include <bits/stdc++.h>

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

int sub(int x) {
    int y=x, p=1;
    while (y > 9)
        y /= 10, p *= 10;
    return x % p * 10 + y;
}

int main() {
    int x, xi;
    fin >> x;
    xi = x;
    do {
        x = sub(x);
        if (x != xi)
            fout << x << ' ';
    } while (x != xi);
    return 0;
}