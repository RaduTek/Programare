#include <bits/stdc++.h>

using namespace std;

ifstream fin("numere.in");

bool sub(int x) {
    if (x < 2 || x % 2 == 0)
        return 0;
    for (int i=3; i*i <= x; i+= 2)
        if (x % i == 0)
            return 0;
    return 1;
}

int main() {
    int n, x, ok = false;;
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