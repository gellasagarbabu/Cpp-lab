#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
public:
    void input() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s[3];
    for (int i = 0; i < 3; i++)
        s[i].input();
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++)
        s[i].display();
    return 0;
}

