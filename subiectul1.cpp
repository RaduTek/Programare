#include <bits/stdc++.h>

using namespace std;

ifstream fin("date.in");

bool sub(char s[]) {
    int len = strlen(s);
    for (int i=0; i < len/2; i++) {
        if (s[i] != s[len-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, ok=false;
    char s[20];
    fin >> n;
    fin.get();
    for (int i=0; i < n; i++) {
        fin >> s;
        if (sub(s)) {
            ok = true;
            cout << s << '\n';
        }
    }
    if (!ok) cout << "NU EXISTA";
    return 0;
}