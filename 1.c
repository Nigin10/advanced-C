#include <stdio.h>

struct Day
{
    char dayName[20];
    char tasks[3][50];
};

int main()
{
    struct Day week[7] = {
        {"Monday"},
        {"Tuesday"},
        {"Wednesday"},
        {"Thursday"},
        {"Friday"},
        {"Saturday"},
        {"Sunday"}
    };

    int i, j;

    // Input tasks
    for(i = 0; i < 7; i++)
    {
        printf("\nEnter 3 tasks for %s:\n", week[i].dayName);

        for(j = 0; j < 3; j++)
        {
            printf("Task %d: ", j + 1);
            scanf(" %[^\n]", week[i].tasks[j]);
        }
    }

    // Display tasks
    printf("\n\nWEEKLY CALENDAR\n");

    for(i = 0; i < 7; i++)
    {
        printf("\n%s:\n", week[i].dayName);

        for(j = 0; j < 3; j++)
        {
            printf("- %s\n", week[i].tasks[j]);
        }
    }

    return 0;
}
