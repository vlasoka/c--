#include <iostream>
#include <Windows.h>
#include <tuple>
#include <cmath>

using namespace std;
using Tuple = tuple<bool, double, double>;

Tuple Solution(const double& a, const double& b, const double& c) {
    bool t;
    double x1, x2;
    double d = b * b - 4 * a * c;
    if (d < 0) t = false;
    if (d == 0) {
        t = true;
        x1 = -b / (2 * a);
        x2 = -b / (2 * a);
    }
    if (d > 0) {
        t = true;
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
    }
    auto r = make_tuple(t, x1, x2);
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
    Tuple r = Solution(a, b, c);
    if (get<0>(r)) {
        cout << "x1 = " << get<1>(r) << "; x2 = " << get<2>(r);
    }
    else cout << "no roots";
}
