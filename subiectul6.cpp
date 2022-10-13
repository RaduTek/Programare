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
    int n, a=2, b=2;
    fin >> n;
    while (a < n) {
        if (sub(a)) {
            b = a;
            while (b < n) {
                if (sub(b))
                    if (a < b && a + b == n)
                        cout << '(' << a << ',' << b << ") ";
                if (b == 2) b--;
                b += 2;
            }
        }
        if (a == 2) a--;
        a += 2;
    }
    return 0;
}