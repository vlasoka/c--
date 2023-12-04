#include <iostream>
#include <cmath>

using namespace std;

class Dot {
public:
    Dot() {
        x = 0;
        y = 0;
    }

    Dot(double kx, double ky) {
        x = kx;
        y = ky;
    }

    double distanceTo(Dot point) {
        return sqrt((point.x - x) * (point.x - x) + (point.y - y) * (point.y - y));
    }

private:
    double x;
    double y;
};

class TriangleAgr {
public:
    TriangleAgr() {
        a = Dot(0, 0);
        b = Dot(0, 0);
        c = Dot(0, 0);
    }

    TriangleAgr(Dot ka, Dot kb, Dot kc) {
        a = ka;
        b = kb;
        c = kc;
    }

    void Lines() {
        double l1 = a.distanceTo(b);
        double l2 = a.distanceTo(c);
        double l3 = b.distanceTo(c);
        cout << "a = " << l1 << "; b = " << l2 << "; c = " << l3 << endl;
    }

    void Perimetr() {
        double p = a.distanceTo(b) + a.distanceTo(c) + b.distanceTo(c);
        cout << "p = " << p << endl;
    }

    void Ploschad() {
        double l1 = a.distanceTo(b);
        double l2 = a.distanceTo(c);
        double l3 = b.distanceTo(c);
        double p = (l1 + l2 + l3) / 2;
        double s = sqrt(p * (p - l1) * (p - l2) * (p - l3));
        cout << "s = " << s << endl;
    }

private:
    Dot a;
    Dot b;
    Dot c;
};

class TriangleKomp {
public:
    TriangleKomp() {
        a = Dot(0, 0);
        b = Dot(0, 0);
        c = Dot(0, 0);
    }

    TriangleKomp(double ax, double ay, double bx, double by, double cx, double cy) {
        a = Dot(ax, ay);
        b = Dot(bx, by);
        c = Dot(cx, cy);
    }

    void Lines() {
        double l1 = a.distanceTo(b);
        double l2 = a.distanceTo(c);
        double l3 = b.distanceTo(c);
        cout << "a = " << l1 << "; b = " << l2 << "; c = " << l3 << endl;
    }

    void Perimetr() {
        double p = a.distanceTo(b) + a.distanceTo(c) + b.distanceTo(c);
        cout << "p = " << p << endl;
    }

    void Ploschad() {
        double l1 = a.distanceTo(b);
        double l2 = a.distanceTo(c);
        double l3 = b.distanceTo(c);
        double p = (l1 + l2 + l3) / 2;
        double s = sqrt(p * (p - l1) * (p - l2) * (p - l3));
        cout << "s = " << s << endl;
    }

private:
    Dot a;
    Dot b;
    Dot c;
};

int main()
{
    cout << "---agregation---" << endl;
    TriangleAgr ta;
    Dot a = Dot(0, 0);
    Dot b = Dot(0, 3);
    Dot c = Dot(4, 0);
    ta = TriangleAgr(a, b, c);
    ta.Lines();
    ta.Perimetr();
    ta.Ploschad();
    cout << "---composition---" << endl;
    TriangleKomp tk;
    tk = TriangleKomp(0, 0, 0, 3, 4, 0);
    tk.Lines();
    tk.Perimetr();
    tk.Ploschad();
}
