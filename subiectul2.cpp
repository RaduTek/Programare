#include <bits/stdc++.h>

using namespace std;

ifstream fin("numere.in");

bool sub(int x) {
    int a=1, b=1, i;
    while (b <= x) {
        i = a;
        a = b;
        b += i;
    }
    return a == x;
}

int main() {
    int n, x, ok=false;
    fin >> n;
    for (int i=0; i < n; i++) {
        fin >> x;
        if (sub(x)) {
            ok = true;
            cout << x << ' ';
        }
    }
    if (!ok) cout << "NU EXISTA";
    return 0;
}