#include <bits/stdc++.h>
#include "func.h"
using namespace std;
float P = 3.141592653589793238466;
void circle(int x, int y, int r)
{
	float Per, S;
	cout << "circle(" << x << "," << y << "," << r << ")" << endl;
	Per = 2 * P * r;
	S = P * pow(r, 2);
	cout << "S = " << S << endl;
	cout << "P = " << Per;
}
