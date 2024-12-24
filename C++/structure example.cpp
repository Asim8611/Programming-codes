#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    double height;
};
int main() {
    Person person1;
    person1.name = "John";
    person1.age = 30;
    person1.height = 1.75;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;
    return 0;
}

