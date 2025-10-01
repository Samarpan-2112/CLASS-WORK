#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
void inputStudent(struct student *s)
{
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}
void displayStudent(struct student s)
{
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
int main(){
    struct student s1;

    inputStudent(&s1);
    printf("\nStudent Details:\n");
    displayStudent(s1);
    return 0;
}