/*.calculeze si sa afiseze pe o coloana verticala, cu precizie 2 zecimale, valorile
unui semnal sinusoidal variabil in timp pt. 10 momente de timp diferite, introduse
de la tastatura intr-un vector de intregi (in secunde) . Amplitudinea semnalului este
1 si faza initiala 90 grade, iar frecventa este de 10 kHz.
(se va folosi a(t)=Asin(2*PI*f*t+faza_initiala). Una din functii va calcula valorile
si le va pune intr-un vector, iar cealalta va face afisarea in forma mult dorita)*/

#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

void timpuri(int v[], double x[], double f_i, double f, double a) {
    for(int i = 0; i < 10; i++)
        x[i] = a * sin(2 * M_PI * f * v[i] + f_i);
}

void afisare(double x[]) {
    cout << setprecision(2);
    for(int i = 0; i < 10; i ++)
        cout << x[i] << "\n";
}

int main() {

   int t[10];
    double faza_initiala = M_PI / 2, frecventa = 10000, amplitudine = 1.0, rez[10];

    for(int i = 0; i < 10; i++)
        cin >> t[i];
    timpuri(t, rez, faza_initiala, frecventa, amplitudine);
    afisare(rez);

    return 0;
}
