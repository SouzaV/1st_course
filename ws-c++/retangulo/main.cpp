#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    cout << fixed <<setprecision(4);
    area = base * altura;
    cout << "AREA = " << area << endl;

    perimetro = 2* (base + altura);
    cout << "PERIMETRO = " << perimetro << endl;

    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}
