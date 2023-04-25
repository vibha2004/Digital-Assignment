#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void qsort();
struct Employee {
    char name[100];
    int age;
    char position[50];
    int day;
    int month;
    int year;
};

int compname(const void* a, const void* b) {
    struct Employee* emp1 = (struct Employee*) a;
    struct Employee* emp2 = (struct Employee*) b;
    return strcmp(emp1->name, emp2->name);
}

int compdate(const void* a, const void* b) {
    struct Employee* emp1 = (struct Employee*) a;
    struct Employee* emp2 = (struct Employee*) b;
    if (emp1->year != emp2->year) {
        return emp1->year - emp2->year;
    }
    if (emp1->month != emp2->month) {
        return emp1->month - emp2->month;
    }
    return emp1->day - emp2->day;
}

int main() {
    struct Employee employees[100];
    int num_employees;
    
    scanf("%d", &num_employees);

    for (int i = 0; i < num_employees; i++) {
        
       
        scanf("%s", employees[i].name);
        
        scanf("%d", &employees[i].age);
        
        scanf("%s", employees[i].position);
        
        scanf("%d/%d/%d", &employees[i].day, &employees[i].month, &employees[i].year);
    }

    // sort by name and print
    qsort(employees, num_employees, sizeof(struct Employee), compname);
    printf("\nEmployee List sorted by name:\n");
    for (int i = 0; i < num_employees; i++) {
        printf(" %s\n", employees[i].name);
        printf(" %d\n", employees[i].age);
        printf(" %s\n", employees[i].position);
        printf(" %d/%d/%d\n", employees[i].day, employees[i].month, employees[i].year);
        printf("\n");
    }

    // sort by joining date and print
    qsort(employees, num_employees, sizeof(struct Employee), compdate);
    printf("\nEmployee List sorted by date of joining:\n");
    for (int i = 0; i < num_employees; i++) {
        printf(" %s\n", employees[i].name);
        
    }

    return 0;
}
