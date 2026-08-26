#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(const string& name, int age): name(name), age(age) {}
    virtual void print() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual ~Person() = default;
};

class Student : public Person {
private:
    string university;
public:
    Student(const string& name, int age, const string& uni): Person(name, age), university(uni) {}
    void print() const override {
        Person::print();
        cout << "University: " << university << endl;
    }
};

int main() {
    // مثال: عدّل الاسم والسن والجامعة حسب المطلوب
    Student s("Ahmed Ali", 20, "Cairo University");
    cout << "Student information:" << endl;
    s.print();
    return 0;
}
