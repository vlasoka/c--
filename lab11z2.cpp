#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Point {
public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(double a, double b) {
        x = a;
        y = b;
    }

    double DistanceToCentre() {
        return sqrt(x * x + y * y);
    }

    friend bool operator<(Point& p1, Point& p2) {
        double d1 = p1.DistanceToCentre();
        double d2 = p2.DistanceToCentre();
        return d1 < d2;
    }

    friend ostream& operator<<(ostream& out, Point& p) {
        out << "(" << p.x << "; " << p.y << ")";
        return out;
    }

private:
    double x;
    double y;
};

int main()
{
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));
    std::sort(v.begin(), v.end());
    for (auto& point : v)
        std::cout << point << '\n';
}
