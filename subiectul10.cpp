#include <bits/stdc++.h>

using namespace std;

ifstream fin("date.in");

bool sub(char a[], char b[]) {
    int al = strlen(a), bl = strlen(b);
    if (al != bl)
        return 0;
    int aux;
    char as[21]; strcpy(as, a);
    char bs[21]; strcpy(bs, b);
    for (int i=0; i < al-1; i++)
        for (int j=i+1; j < al; j++)
            if (as[i] > as[j]) {
                aux = as[i];
                as[i] = as[j];
                as[j] = aux;
            }
    for (int i=0; i < bl-1; i++)
        for (int j=i+1; j < bl; j++)
            if (bs[i] > bs[j]) {
                aux = bs[i];
                bs[i] = bs[j];
                bs[j] = aux;
            }
    return !strcmp(as, bs);
}

int main() {
    int n;
    char v[101][21];
    int p[101];
    fin >> n;
    fin.get();
    for (int i=0; i < n; i++) {
        fin >> v[i];
        p[i] = -1;
    }
    bool ok=false;
    for (int i=0; i < n-1; i++)
        for (int j=i+1; j < n; j++)
            if (sub(v[i], v[j])) {
                ok = true;
                cout << v[i] << ' ' << v[j] << '\n';
            }
    if (!ok) cout << "NU EXISTA";
    return 0;
}