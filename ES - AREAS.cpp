#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float triangulo;
    float circulo;
    float trapezio;
    float quadrado;
    float retangulo;

    cin >> a;
    cin >> b;
    cin >> c;

    triangulo = (a * c) / 2;
    circulo = 3.14159 * pow(c,2);
    trapezio = ((a + b) * c) / 2;
    quadrado = pow(b,2);
    retangulo = a * b;


    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;

    return 0;
}