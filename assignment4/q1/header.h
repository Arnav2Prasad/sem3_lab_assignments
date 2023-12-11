#include <stdio.h>

typedef struct Distance{
    int kms;
    int meters;
}Distance;

struct Distance read(int i);
void display(struct Distance ans);
struct Distance Add(struct Distance dist1,struct Distance dist2);
struct Distance subtract(struct Distance s1,struct Distance s2);


