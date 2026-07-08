#include <stdio.h>

typedef struct Person {
    double salary;
    int age;
} person; // typedef and person at the end are needed for shorter syntax


int main() {
    struct Person person1 = {.age = 25, .salary = 4321.78};

    person person2;
    person2.age = 31;
    person2.salary = 78943.2;

    printf("Age of person1: %d\nSalary of person1: %.2lf\n", person1.age, person1.salary);
    printf("Age of person2: %d\nSalary of person2: %.2lf", person2.age, person2.salary);

    return 0;
}