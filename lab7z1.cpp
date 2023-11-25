#include <iostream>
#include <Windows.h>

using namespace std;

struct Time {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
};

Time InputTime() {
    Time t;
    cout << "input hours: ";
    cin >> t.hours;
    cout << "input minutes: ";
    cin >> t.minutes;
    cout << "input seconds: ";
    cin >> t.seconds;
    while (t.seconds >= 60) {
        t.minutes += 1;
        t.seconds -= 60;
    }
    while (t.minutes >= 60) {
        t.hours += 1;
        t.minutes -= 60;
    }
    return t;
}

void SecondsInTime(const Time &t) {
    int s = t.seconds + 60 * t.minutes + 3600 * t.hours;
    cout << s << " seconds at all" << endl;
}

int SecondsInTimeReturn(const Time& t) {
    int s = t.seconds + 60 * t.minutes + 3600 * t.hours;
    return s;
}

Time SumOfTime(const Time& t1, const Time& t2) {
    Time t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    t.seconds = t1.seconds + t2.seconds;
    while (t.seconds >= 60) {
        t.minutes += 1;
        t.seconds -= 60;
    }
    while (t.minutes >= 60) {
        t.hours += 1;
        t.minutes -= 60;
    }
    return t;
}

Time RazOfTime(Time t1, const Time& t2) {
    Time t;
    if (SecondsInTimeReturn(t1) < SecondsInTimeReturn(t2)) {
        cout << "it's impossible" << endl;
        return t;
    }
    if (t1.seconds < t2.seconds) {
        t1.minutes -= 1;
        t1.seconds += 60;
    }
    t.seconds = t1.seconds - t2.seconds;
    if (t1.minutes < t2.minutes) {
        t1.hours -= 1;
        t1.minutes += 60;
    }
    t.minutes = t1.minutes - t2.minutes;
    t.hours = t1.hours - t2.hours;
    return t;
}

void ShowTime(const Time& t) {
    cout << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
}

int main()
{
    Time t1 = InputTime();
    ShowTime(t1);
    Time t2;
    ShowTime(t2);
    t2 = InputTime();
    ShowTime(t2);
    SecondsInTime(t1);
    SecondsInTime(t2);
    Time t3 = SumOfTime(t1, t2);
    ShowTime(t3);
    t3 = RazOfTime(t1, t2);
    ShowTime(t3);
    t3 = RazOfTime(t2, t1);
    ShowTime(t3);
}
