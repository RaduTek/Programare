#include <iostream>

using namespace std;

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
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> x;
        if (sub(x)) {
            ok = true;
            cout << x << ' ';
        }
    }
    if (!ok) cout << "NU EXISTA";
    return 0;
}