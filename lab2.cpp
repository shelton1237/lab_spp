#include <iostream>
#include <cmath>

using namespace std;

void solveQuadraticEquation(double a, double b, double c, double* x1, double* x2, double* discriminant) {
    *discriminant = b * b - 4 * a * c;

    if (*discriminant > 0) {
        *x1 = (-b - sqrt(*discriminant)) / (2 * a);
        *x2 = (-b + sqrt(*discriminant)) / (2 * a);
    }
    else if (*discriminant == 0) {
        *x1 = *x2 = -b / (2 * a);
    }
    else {
        *x1 = *x2 = NAN;
    }
}

int main() {
    double a, b, c, x1, x2, discriminant;

    cout << " Enter the coefficients a, b, c of the quadratic equation: ";
    cin >> a >> b >> c;

    solveQuadraticEquation(a, b, c, &x1, &x2, &discriminant);

    cout << "Discriminant: " << discriminant << endl;

    if (discriminant > 0) {
        cout << " Two real roots:" << endl;
        cout<< "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        cout << " One real roots: x = " << x1 << endl;
    }
    else {
        cout << " There are no real roots." << endl;
    }

    return 0;
}
