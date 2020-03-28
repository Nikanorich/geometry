#include "func.h"
#include <bits/stdc++.h>
using namespace std;
float P = 3.141592653589793238466;
void triangle(float x1, float x2, float x3, float y1, float y2, float y3)
{
    float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float b = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    float c = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    float Per = a + b + c;
    float Pol = Per / 2;
    float S = sqrt(Pol * (Pol - a) * (Pol - b) * (Pol - c));
    cout << "P = " << Per << endl << "S = " << S;
}
int menu()
{
    int Var;
    cout << "1. Circle " << endl << "2. Triangle " << endl;
    cin >> Var;
    return Var;
}
void circle(int x, int y, int r)
{
    float Per, S;
    cout << "circle(" << x << ", " << y << ", " << r << ")" << endl;
    Per = 2 * P * r;
    S = P * pow(r, 2);
    cout << "S = " << S << endl;
    cout << "P = " << Per;
}
