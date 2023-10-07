#include <iostream>
#include <cmath>

using namespace std;

double root(double a, double x) {
    return (2 * x + a / (x * x)) / 3;
}

int main()
{
    double a;
    cout << "enter number: ";
    cin >> a;
    cout << "root with pow: " << pow(a, 1.0 / 3) << endl;
    double x = a;
    for (int i = 0; i < 100; i++) {
        x = root(a, x);
    }
    cout << "root with our function: " << x;
}
