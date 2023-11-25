#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

struct Roots {
    double x1 = 0;
    double x2 = 0;
};

Roots Solution(const double& a, const double& b, const double& c) {
    Roots r;
    double d = b * b - 4 * a * c;
    if (d < 0) cout << "no roots";
    if (d == 0) {
        r.x1 = -b / (2 * a);
        r.x2 = -b / (2 * a);
        cout << "x1 = x2 = " << r.x1;
    }
    if (d > 0) {
        r.x1 = (-b + sqrt(d)) / (2 * a);
        r.x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << r.x1 << "; x2 = " << r.x2;
    }
    return r;
}

int main()
{
    double a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    Roots r = Solution(a, b, c);
}
