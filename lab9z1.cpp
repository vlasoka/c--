#include <iostream>
#include <cmath>

using namespace std;

class NotExistError {
public:
    NotExistError () : message ("triangle doesn't exist") {}
    void printMessage() const { cout << message << endl; }
private:
    string message;
};

class Triangle {
public:
    void SetTriangle(double ka, double kb, double kc) {
        a = ka;
        b = kb;
        c = kc;
    }

    double Ploschad() {
        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
            throw NotExistError();
        }
        double p = (a + b + c) / 2;
        double s = 0;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }

private:
    double a = 0;
    double b = 0;
    double c = 0;
};

int main()
{
    Triangle t;
    double a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    t.SetTriangle(a, b, c);
    try {
        double s = t.Ploschad();
        cout << s << endl;
    }
    catch (NotExistError& error) {
        cout << "Error: ";
        error.printMessage();
        return 1;
    }
}
