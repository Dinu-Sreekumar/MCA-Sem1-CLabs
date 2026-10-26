#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Read employee details
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Print employee details
    printf("\n--- Employee List ---\n");
    printf("%s %s %s\n", "Name", "ID", "Salary");
    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", emp[i].name, emp[i].id, emp[i].salary);
    }

    return 0;
}
