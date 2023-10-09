#include <iostream>
#include <cmath>

using namespace std;

int myroot(double, double, double, double&, double&);

int main()
{
    double a, b, c, x1 = 0, x2 = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if (a == 0) cout << "wrong input";
    else {
        int t = myroot(a, b, c, x1, x2);
        if (t == 1) cout << "roots: x1 = " << x1 << ", x2 = " << x2;
        else if (t == 0) cout << "root x1 = x2 = " << x1;
        else cout << "no roots";
    }
}

int myroot(double a, double b, double c, double& x1, double& x2) {
    double d = b * b - 4 * a * c;
    if (d < 0) {
        return -1;
    }
    if (d == 0) {
        x1 = -b / (2 * a);
        x2 = -b / (2 * a);
        return 0;
    }
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        return 1;
    }
}