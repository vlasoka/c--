#include <iostream>

using namespace std;

class Time {
public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s) {
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

    int TimeInSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }

    friend Time operator+(const Time& t1, const Time& t2) {
        Time t;
        t.hours = t1.hours + t2.hours;
        t.minutes = t1.minutes + t2.minutes;
        t.seconds = t1.seconds + t2.seconds;
        while (t.seconds >= 60) {
            t.seconds -= 60;
            t.minutes += 1;
        }
        while (t.minutes >= 60) {
            t.minutes -= 60;
            t.hours += 1;
        }
        return t;
    }

    friend Time operator-(Time& t1, Time& t2) {
        Time t;
        int s1 = t1.TimeInSeconds();
        int s2 = t2.TimeInSeconds();
        if (s1 < s2) {
            cout << "it's impossible" << endl;
            return t;
        }
        if (t1.seconds < t2.seconds) {
            t1.seconds += 60;
            t1.minutes -= 1;
        }
        t.seconds = t1.seconds - t2.seconds;
        if (t1.minutes < t2.minutes) {
            t1.minutes += 60;
            t1.hours -= 1;
        }
        t.minutes = t1.minutes - t2.minutes;
        t.hours = t1.hours - t2.hours;
        return t;
    }

    friend Time operator+(const Time& t1, double d) {
        int ds = d * 3600;
        Time dd = Time(0, 0, ds);
        return dd + t1;
    }

    friend Time operator+(double d, const Time& t1) {
        return t1 + d;
    }

    friend bool operator==(Time& t1, Time& t2) {
        int s1 = t1.TimeInSeconds();
        int s2 = t2.TimeInSeconds();
        return s1 == s2;
    }

    friend bool operator!=(Time& t1, Time& t2) {
        int s1 = t1.TimeInSeconds();
        int s2 = t2.TimeInSeconds();
        return s1 != s2;
    }

    friend bool operator>(Time& t1, Time& t2) {
        int s1 = t1.TimeInSeconds();
        int s2 = t2.TimeInSeconds();
        return s1 > s2;
    }

    friend bool operator>=(Time& t1, Time& t2) {
        int s1 = t1.TimeInSeconds();
        int s2 = t2.TimeInSeconds();
        return s1 >= s2;
    }

    friend bool operator<(Time& t1, Time& t2) {
        int s1 = t1.TimeInSeconds();
        int s2 = t2.TimeInSeconds();
        return s1 < s2;
    }

    friend bool operator<=(Time& t1, Time& t2) {
        int s1 = t1.TimeInSeconds();
        int s2 = t2.TimeInSeconds();
        return s1 <= s2;
    }

private:
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    Time t1 = Time(1, 20, 73);
    t1.showTime();
    Time t2 = Time(3, 1, 22);
    t2.showTime();
    Time t3 = t1 + t2;
    t3.showTime();
    t3 = t1 - t2;
    t3.showTime();
    t3 = t2 - t1;
    t3.showTime();
    t3 = t1 + 0.123;
    t3.showTime();
    t3 = 0.312 + t2;
    t3.showTime();
    cout << "== " << (t1 == t2) << endl;
    cout << "!= " << (t1 != t2) << endl;
    cout << "> " << (t1 > t2) << endl;
    cout << ">= " << (t1 >= t2) << endl;
    cout << "< " << (t1 < t2) << endl;
    cout << "<= " << (t1 <= t2) << endl;
}
