#include "student.h"
#include <stdio.h>

void input_info(struct Student *students, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter details for Student %d:\n", (i + 1));
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("First Name: ");
        scanf("%s", students[i].name.firstName);

        printf("Middle Name: ");
        scanf("%s", students[i].name.middleName);

        printf("Last Name: ");
        scanf("%s", students[i].name.lastName);

        printf("Date of Birth (dd mm yyyy): ");
        scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, &students[i].dob.year);

        printf("Enter marks for the subject English : ");
        scanf("%lf", &students[i].marks[0]);

        printf("Enter marks for the subject Maths : ");
        scanf("%lf", &students[i].marks[1]);

        printf("Enter marks for the subject CS : ");
        scanf("%lf", &students[i].marks[2]);
    }
}
void display_info(struct Student *students, int count) {
    printf("Student Information:\n");
    double totalEnglish = 0, totalMaths = 0, totalCS = 0;

    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", (i + 1));
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s %s %s\n", students[i].name.firstName, students[i].name.middleName, students[i].name.lastName);
        printf("Date of Birth: %d/%d/%d\n", students[i].dob.day, students[i].dob.month, students[i].dob.year);
        printf("Marks of Eng : %.2lf\n", students[i].marks[0]);
        printf("Marks of Math : %.2lf\n", students[i].marks[1]);
        printf("Marks of CS : %.2lf\n", students[i].marks[2]);
        printf("-------------\n");

        totalEnglish += students[i].marks[0];
        totalMaths += students[i].marks[1];
        totalCS += students[i].marks[2];
    }

    double avgEnglish = totalEnglish / count;
    double avgMaths = totalMaths / count;
    double avgCS = totalCS / count;

    printf("Average mark of Eng: %.2lf\n", avgEnglish);
    printf("Average mark of Math: %.2lf\n", avgMaths);
    printf("Average mark of CS: %.2lf\n", avgCS);
} 
