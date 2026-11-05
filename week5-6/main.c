#include <stdio.h>

int main()
{
    float salaries[50];
    float total = 0, average, highest, lowest, searchSalary, temp;
    int i, j, found = 0;

    
    for (i = 0; i < 50; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

   
    printf("\nAll Salaries\n");
    for (i = 0; i < 50; i++)
    {
        printf("%.2f\n", salaries[i]);
    }

  
    highest = salaries[0];
    lowest = salaries[0];
    for (i = 0; i < 50; i++)
    {
        total = total + salaries[i];
        if (salaries[i] > highest) { highest = salaries[i]; }
        if (salaries[i] < lowest)  { lowest = salaries[i]; }
    }
    average = total / 50;

    printf("\nTotal salary expenditure: %.2f\n", total);
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    
    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);
    for (i = 0; i < 50; i++)
    {
        if (salaries[i] == searchSalary)
        {
            found = 1;
            printf("Salary found at position %d\n", i);
            break;
        }
    }
    if (!found)
    {
        printf("Salary not found.\n");
    }

   
    for (i = 0; i < 50 - 1; i++)
    {
        for (j = 0; j < 50 - i - 1; j++)
        {
            if (salaries[j] > salaries[j + 1])
            {
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }

    
    printf("\nSorted Salaries (lowest to highest)\n");
    for (i = 0; i < 50; i++)
    {
        printf("%.2f\n", salaries[i]);
    }

    return 0;
}