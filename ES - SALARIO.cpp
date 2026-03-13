#include <iostream>
using namespace std;

int main()
{
    int numero;
    float horas;
    float valor_hora;
    float salario;

    cin >> numero;
    cin >> horas;
    cin >> valor_hora;

    salario = horas * valor_hora;

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << salario << endl;

}