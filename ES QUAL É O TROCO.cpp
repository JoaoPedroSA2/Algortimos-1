#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float dinheiro;
    float preco;
    float troco;

    cin >> dinheiro;
    cin >> preco;

    troco = dinheiro - preco;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}