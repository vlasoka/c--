#include <iostream>
#include <string>
#include <map>

using namespace std;

struct StudentGrade {
    string name;
    char grade;
};

StudentGrade inputStudent() {
    StudentGrade st;
    cout << "the name of the student: ";
    cin >> st.name;
    cout << "the grade: ";
    cin >> st.grade;
    return st;
}

int main()
{
    map<string, char> sg;
    StudentGrade s1 = inputStudent();
    sg[s1.name] = s1.grade;
    StudentGrade s2 = inputStudent();
    sg[s2.name] = s2.grade;
    cout << "student " << s1.name << " has " << sg[s1.name] << endl;
    cout << "student " << s2.name << " has " << sg[s2.name] << endl;
}
