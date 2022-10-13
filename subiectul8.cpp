#include <bits/stdc++.h>

using namespace std;

ifstream fin("numere.in");

bool sub(int x) {
    int y = x % 10;
    while (x > 9)
        x /= 10;
    return x == y;
}

int main() {
    int n, v[101];
    fin >> n;
    for (int i=0; i < n; i++)
        fin >> v[i];
    for (int i=0; i < n-1; i++)
        for (int j=i+1; j < n; j++)
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    for (int i=0; i < n; i++)
        if (sub(v[i]))
            cout << v[i] << ' ';
    return 0;
}