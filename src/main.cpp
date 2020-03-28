#include "func.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, r;
    int x1, x2, y1, y2, x3, y3;
    int Var = menu();
    switch (Var) {
    case 1: {
        cin >> x >> y >> r;
        circle(x, y, r);
        break;
    }
    case 2: {
        cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
        triangle(x1, x2, x3, y1, y2, y3);
        break;
    }
    }
}