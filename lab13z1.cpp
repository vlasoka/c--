#include <iostream>
#include <string>
#include <vector>

using namespace std;

class human {
public:
    human(string slast_name, string sname, string ssecond_name) {
        last_name = slast_name;
        name = sname;
        second_name = ssecond_name;
    }

    void get_info() {
        cout << last_name << " " << name << " " << second_name << endl;
    }
private:
    string name; 
    string last_name; 
    string second_name;
};

class student : public human {
public:
    student(string slast_name, string sname, string ssecond_name, vector<int> sscores) : human(slast_name, sname, ssecond_name) {
        scores = sscores;
    }

    void get_info() {
        human::get_info();
        unsigned int count_scores = scores.size();
        unsigned int sum_scores = 0;
        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += scores[i];
        }
        cout << "average score: " << (float)sum_scores / (float)count_scores << "\n" << endl;
    }
private:
    vector<int> scores;
};

class teacher : public human {
public:
    teacher(string slast_name, string sname, string ssecond_name, unsigned int swork_time) : human(slast_name, sname, ssecond_name) {
        work_time = swork_time;
    }

    void get_info() {
        human::get_info();
        cout << "work time: " << work_time << " hours\n" << endl;
    }
private:
    unsigned int work_time;
};


int main()
{
    vector<int> scores;
    scores.push_back(5);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(5);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(5);
    student st = student("Karmaeva", "Sofia", "Vladimirovna", scores);
    teacher t = teacher("Larionova", "Natalya", "Evgenyevna", 123);
    st.get_info();
    t.get_info();
}
