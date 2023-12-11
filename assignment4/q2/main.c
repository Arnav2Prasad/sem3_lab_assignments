#include <stdio.h>
#include "student.c"

int main() {
    int count = 5;
    struct Student students[5];

    // Input info
    input_info(students, count);

    // Display info
    display_info(students, count);

    return 0;
}

