#include <stdio.h>
#include <string.h>

#define MAX_MONTHS 12

typedef struct {
    char month[15];
    float units;
    float bill;
} Usage;

float calculate_bill(float units) {
    float bill = 0.0f;

    /* Example slab calculation for project demonstration */
    if (units <= 100)
        bill = units * 1.50f;
    else if (units <= 200)
        bill = 100 * 1.50f + (units - 100) * 2.50f;
    else if (units <= 500)
        bill = 100 * 1.50f + 100 * 2.50f + (units - 200) * 4.00f;
    else
        bill = 100 * 1.50f + 100 * 2.50f + 300 * 4.00f
             + (units - 500) * 6.00f;

    return bill;
}

void print_summary(Usage u[], int n) {
    float total_units = 0.0f, total_bill = 0.0f;
    int highest = 0, lowest = 0;

    for (int i = 0; i < n; i++) {
        total_units += u[i].units;
        total_bill += u[i].bill;

        if (u[i].units > u[highest].units) highest = i;
        if (u[i].units < u[lowest].units) lowest = i;
    }

    printf("\n========== YEARLY SUMMARY ==========\n");
    printf("Total consumption : %.2f units\n", total_units);
    printf("Average/month     : %.2f units\n", total_units / n);
    printf("Total bill        : Rs. %.2f\n", total_bill);
    printf("Average bill      : Rs. %.2f\n", total_bill / n);
    printf("Highest usage     : %s (%.2f units)\n",
           u[highest].month, u[highest].units);
    printf("Lowest usage      : %s (%.2f units)\n",
           u[lowest].month, u[lowest].units);
}

int main(void) {
    Usage usage[MAX_MONTHS];
    int n;

    printf("========================================\n");
    printf("      ELECTRICITY USAGE ANALYZER\n");
    printf("========================================\n");

    printf("Enter number of months (1-12): ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_MONTHS) {
        printf("Invalid number of months.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nMonth %d name: ", i + 1);
        scanf("%14s", usage[i].month);

        printf("Units consumed: ");
        scanf("%f", &usage[i].units);

        if (usage[i].units < 0) {
            printf("Units cannot be negative.\n");
            return 1;
        }

        usage[i].bill = calculate_bill(usage[i].units);
    }

    printf("\n---------------- MONTHLY REPORT ----------------\n");
    printf("%-12s %-15s %-15s\n", "Month", "Units", "Bill (Rs.)");

    for (int i = 0; i < n; i++) {
        printf("%-12s %-15.2f %-15.2f\n",
               usage[i].month, usage[i].units, usage[i].bill);
    }

    print_summary(usage, n);

    printf("\nUsage status:\n");
    for (int i = 0; i < n; i++) {
        if (usage[i].units > 500)
            printf("%s: HIGH usage\n", usage[i].month);
        else if (usage[i].units > 300)
            printf("%s: MODERATE-HIGH usage\n", usage[i].month);
        else
            printf("%s: NORMAL usage\n", usage[i].month);
    }

    printf("\nProject completed successfully.\n");
    return 0;
}
