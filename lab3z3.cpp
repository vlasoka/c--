#include <iostream>
#include <cmath>

using namespace std;

double plo(double a) {
    double p = 3 * a / 2;
    return (p - a) * sqrt(p * (p - a));
}

double plo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    int type;
    cout << "choose thr type of triangle:\n1 - equilaterral\n2 - versatile\nyour choice: ";
    cin >> type;
    if (type == 1) {
        cout << "a = ";
        double a;
        cin >> a;
        cout << plo(a);
    }
    else if (type == 2) {
        cout << "a = ";
        double a;
        cin >> a;
        cout << "b = ";
        double b;
        cin >> b;
        cout << "c = ";
        double c;
        cin >> c;
        cout << plo(a, b, c);
    }
    else {
        cout << "wrong choice";
    }
}
