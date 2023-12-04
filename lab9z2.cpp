#include <iostream>

using namespace std;

class Time {
public:
    class ErrorInTime {
    public:
        string origin; //для имени функции
        int iValue; //для хранения ошибочного значения

        ErrorInTime(string st, int t) {
            origin = st; //строка с именем виновника ошибки
            iValue = t; //сохраненное неправильное значение
        }
    };

    void setTime(int h, int m, int s) {
        if ((h < 0)) {
            throw ErrorInTime("hours are less than 0", h);
        }
        if ((m < 0)) {
            throw ErrorInTime("minutes are less than 0", m);
        }
        if ((s < 0)) {
            throw ErrorInTime("seconds are less than 0", s);
        }
        while (s >= 60) {
            s -= 60;
            m += 1;
        }
        while (m >= 60) {
            m -= 60;
            h += 1;
        }
        hours = h;
        minutes = m;
        seconds = s;
    }

    void showTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    void sumTime(const Time& t1, const Time& t2) {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;
        seconds = t1.seconds + t2.seconds;
        while (seconds >= 60) {
            seconds -= 60;
            minutes += 1;
        }
        while (minutes >= 60) {
            minutes -= 60;
            hours += 1;
        }
    }

private:
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
};

int main()
{
    Time t1, t2, t3;
    try {
        t1.setTime(2, 70, 40);
    }
    catch (Time::ErrorInTime& er) {
        cout << "Error: " << er.origin << endl;
        cout << "Value is " << er.iValue << endl;
    }
    try {
        t2.setTime(1, 10, 30);
    }
    catch (Time::ErrorInTime& er) {
        cout << "Error: " << er.origin << endl;
        cout << "Value is " << er.iValue << endl;
    }
    t1.showTime();
    t2.showTime();
    t3.showTime();
    t3.sumTime(t1, t2);
    t3.showTime();
    try {
        t1.setTime(0, 70, -40);
    }
    catch (Time::ErrorInTime& er) {
        cout << "Error: " << er.origin << endl;
        cout << "Value is " << er.iValue << endl;
    }
}
