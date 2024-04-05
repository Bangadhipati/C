#include <stdio.h>

#define TOTAL_MARKS 60

int main()
{
    int marks[4];
    int i;

    printf("Enter marks of 4 subjects: \n");
    printf("-----------------------------------------\n");
    printf("M2     : ");
    scanf("%d", &marks[0]);
    printf("PPS    : ");
    scanf("%d", &marks[1]);
    printf("Chemistry: ");
    scanf("%d", &marks[2]);
    printf("English : ");
    scanf("%d", &marks[3]);

    printf("\n\nSubjects    Marks    Percentage    Highest Marks\n");
    printf("----------------------------------------------------\n");

    for (i = 0; i < 4; i++)
    {
        int percentage = (marks[i] * 100) / TOTAL_MARKS;

        printf("%-10s %-8d %-12d %-12d\n",
               (i == 0) ? "M2" :
               (i == 1) ? "PPS" :
               (i == 2) ? "Chemistry" : "English",
               marks[i], percentage, TOTAL_MARKS);
    }

    return 0;
}