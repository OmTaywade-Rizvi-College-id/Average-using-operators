#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct employee e;
    FILE *fp;
    int n, i;

    fp = fopen("employee.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Write employee data to the file
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &e.id);

        printf("Name: ");
        scanf("%s", e.name);

        printf("Salary: ");
        scanf("%f", &e.salary);

        fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
    }

    fclose(fp);

    // Now read data from file
    fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n------ Employee Database ------\n");
    while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
    }

    fclose(fp);

    return 0;
}
