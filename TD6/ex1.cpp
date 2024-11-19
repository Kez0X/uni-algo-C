#include "Student.hpp"

int main() {

    Student student1("Paul", 0.0, 11);
    Student student2("Luka", 9999, 9999);
    Student student3("Elise", 10, 10);

    student1.printAll();
    student2.printAll();
    student3.printAll();

    return 0;
}