/*
Subiectul nr.1
Fişierul date.in  conține, pe prima linie,  un număr natural  n (n<100), iar pe fiecare din următoarele n linii este scris câte un cuvânt format  din cel mult 20de caractere.
Se consideră subprogramul S1 care primește prin intermediul singurului său parametru s un cuvânt și verifică dacă acesta este palindrom. Un cuvânt care poate fi citit de la stânga la dreapta și de la dreapta la stânga reprezintă același cuvânt este un palindrom, de exemplu: “rar”, “potop”.

Cerinţe:
a)	Scrieţi definiţia completă a subprogramului S1;
b)	Scrieţi un program principal Pascal/C/C++ care, folosind apeluri utile ale subprogramului S1  citește numărul n și cele n cuvinte, apoi determină toate cuvintele de tip palindrom și le afișează, câte unul pe o linie a ecranului. Dacă niciunul dintre cele n cuvinte citite nu este de tip palindrom, atunci programul va afișa pe ecran mesajul NU EXISTA.

Exemplu.  Dacă fişierul  date.in are conţinutul alăturat, programul va afişa pe ecran: 

    Fisier:
    6
    cojoc
    iarna
    ana
    primavara
    potop
    toamna

    Iesire:
    cojoc
    ana
    potop

*/

#include <iostream>
#include <cstring>

using namespace std;

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
    cin >> n;
    cin.get();
    for (int i=0; i < n; i++) {
        cin >> s;
        if (sub(s)) {
            ok = true;
            cout << s << '\n';
        }
    }
    if (!ok) cout << "NU EXISTA";
    return 0;
}