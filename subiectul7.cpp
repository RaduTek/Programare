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
    int n;
    fin >> n;
    if (n <= 2) {
        cout << "IMPOSIBIL";
        return 0;
    }
    int a=n, b=n;
    while (true) {
        a--;
        if (sub(a))
            break;
    }
    while (true) {
        b++;
        if (sub(b))
            break;
    }
    cout << '(' << a << ',' << b << ')';
    return 0;
}