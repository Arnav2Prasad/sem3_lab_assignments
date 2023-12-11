#define MAX_LENGTH 100

typedef int mis;
typedef char ch[MAX_LENGTH];

typedef struct Dob{
    mis day,month,year;
}Dob;

typedef struct Name {
    ch firstName, middleName, lastName;
}Name;

typedef struct Student {
    mis roll;
    struct Name name;
    struct Dob dob;
    double marks[3];
}Student;

void input_info(struct Student *students, int count);
void display_info(struct Student *students, int count);


