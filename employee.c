#include <stdio.h>
struct employee{
    int id;
    char name[50];
    float basic;
    float da;
    float hra;
    float gross;
};
void inputEmployee(struct employee *e)
{
    printf("Enter Employee ID: ");
    scanf("%d", &e->id);
    printf("Enter Employee Name: ");
    scanf("%s", e->name);
    printf("Enter Basic Pay: ");
    scanf("%f", &e->basic);
    printf("Enter DA: ");
    scanf("%f", &e->da);
    printf("Enter HRA: ");
    scanf("%f", &e->hra);
    e->gross = e->basic + e->da + e->hra;
}
void displayEmployee(struct employee e)
{
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Basic Pay: %.2f\n", e.basic);
    printf("DA: %.2f\n", e.da);
    printf("HRA: %.2f\n", e.hra);
    printf("Gross Salary: %.2f\n", e.gross);
}
int main(){
    struct employee e1;

    printf("Input details for the employee:\n");
    inputEmployee(&e1);

    printf("\nDisplaying employee details:\n");
    displayEmployee(e1);
    return 0;
}