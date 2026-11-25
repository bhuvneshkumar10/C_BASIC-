// Structures - 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

Student* create_student_list(int n) {
    Student *studs = (Student*) malloc(n * sizeof(Student));
    return studs;
}

void add_student(Student *studs, int i, char *name, int age, float gpa) {
    strcpy(studs[i].name, name);
    studs[i].age = age;
    studs[i].gpa = gpa;
}

void display_students(Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Age: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }
}

void free_student_list(Student *students) {
    free(students);
}

int main() {
    int number_of_students = 3; //for a dynamic decision, use scanf(..)
    Student *student_list = create_student_list(number_of_students);
    // Dynamically decide the number of students

    add_student(student_list, 0, "Aladdin", 20, 3.5);
    add_student(student_list, 1, "Batman", 21, 3.7);
    add_student(student_list, 2, "Catwoman", 22, 3.8);

    display_students(student_list, number_of_students);

    free_student_list(student_list);

    return 0;
}
