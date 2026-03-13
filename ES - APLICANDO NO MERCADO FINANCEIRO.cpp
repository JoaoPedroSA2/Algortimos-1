#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float M;
    float C;
    float i;
    int t;
    float lucro;

    cin >> C;
    cin >> i;
    cin >> t;

    M = C * (pow((1+i), t));

    lucro = M - C;

    cout << fixed << setprecision(2);
    cout << "LUCRO = " << lucro << endl;

    return 0;
}