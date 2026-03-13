#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float raio;
    float area;
    float pi;

    pi = 3.14159;
    
    cin >> raio;

    area = pi * pow(raio,2);

    cout << "AREA = " << area << endl;

    return 0;
}