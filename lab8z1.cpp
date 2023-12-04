#include <iostream>

using std::cout;
using std::endl;

class Time {
public:
    void setTime(int h, int m, int s) {
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
    t1.setTime(2, 70, 40);
    t2.setTime(1, 10, 30);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    t3.sumTime(t1, t2);
    t3.showTime();
}
