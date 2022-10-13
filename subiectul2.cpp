/*
Subiectul nr.2
Fişierul numere.in  conține, pe prima linie,  un număr natural  n (2<n<100) iar  pe linia a doua n numere cu cel mult 9 cifre fiecare. 
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează valoarea 1 dacă x aparține șirului lui Fibonacci și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n și cele n numere, apoi determină toate numerele care aparțin șirului lui Fibonacci și le afișează, separate prin câte un spațiu, pe ecran. Dacă niciunul dintre cele n numere nu aparțin șirului lui Fibonacci, atunci programul va afișa pe ecran mesajul NU EXISTA.
Şirul lui Fibonacci, “legea creşterilor organice”, se va considera aşa cum a fost definit de către Leonardo Fibonacci:1,1,2,3,5,8…

Exemplu.  Dacă fişierul  numere.in  are conţinutul alăturat, programul va afişa pe ecran: 

    Fisier:
    6
    5 20 21 8 13 15 

    Iesire:
    5 21 8 13

*/

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