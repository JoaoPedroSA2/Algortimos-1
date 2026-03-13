#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float raio;
    float area;
    float pi;

    pi = 3.14159;
    
    cin >> raio;

    area = pi * pow(raio,2);

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;

    return 0;
}