#include <iostream>
#include <algorithm>

using namespace std;

struct Employee {
    string name;
    int employeeId;
    double salary;
};

bool compareSalary(Employee e1, Employee e2) {
    return e1.salary < e2.salary;
}

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee employees[numEmployees];

    for(int i=0; i<numEmployees; i++) {
        cout << "Enter the name of employee " << i+1 << ": ";
        cin >> employees[i].name;
        cout << "Enter the employee ID of employee " << i+1 << ": ";
        cin >> employees[i].employeeId;
        cout << "Enter the salary of employee " << i+1 << ": ";
        cin >> employees[i].salary;
    }

    sort(employees, employees+numEmployees, compareSalary);

    cout << "Salaries in ascending order:" << endl;
    for(int i=0; i<numEmployees; i++) {
        cout << employees[i].salary << endl;
    }

    return 0;
}
