#include <stdio.h>
#include <string.h>

int main()
{
    int marks[25];
    int booster_marks[25];
    char month[20];
    int sum_original = 0, sum_revised = 0;
    float avg_original, avg_revised;

    for (int i = 0; i < 25; i++) 
    {
        printf("Enter the original marks and month of birth for student %d: ", i + 1);
        scanf("%d %s", &marks[i], month);

        if(strcmp(month, "January") == 0){
          booster_marks[i]=1;  
        }
        else if(strcmp(month, "February") == 0){
          booster_marks[i]=2;  
        }
        else if(strcmp(month, "March") == 0){
          booster_marks[i]=3; 
        }
        else if(strcmp(month, "April") == 0){
          booster_marks[i]=4;  
        }
        else if(strcmp(month, "May") == 0){
          booster_marks[i]=5;  
        }
        else if(strcmp(month, "June") == 0){
          booster_marks[i]=6;  
        }
        else if(strcmp(month, "July") == 0){
          booster_marks[i]=7;  
        }
        else if(strcmp(month, "August") == 0){
          booster_marks[i]=8;  
        }
        else if(strcmp(month, "September") == 0){
          booster_marks[i]=9;  
        }
        else if(strcmp(month, "October") == 0){
          booster_marks[i]=10;  
        }
        else if(strcmp(month, "November") == 0){
          booster_marks[i]=11;  
        }
        else if(strcmp(month, "December") == 0){
          booster_marks[i]=12;  
        }
    }

    for (int i = 0; i < 25; i++) {
        sum_original += marks[i];
    }
    avg_original = (float) sum_original / 5;

    // Calculate revised marks and class average for revised marks
    for (int i = 0; i < 25; i++) {
        marks[i] += booster_marks[i];
        sum_revised += marks[i];
    }
    avg_revised = (float) sum_revised / 5;

    // Decide whether to implement revision or not based on significant increase
    if (avg_revised - avg_original >= 5.0) {
        printf("Can implement - Significant increase in class average\n");
    } else {
        printf("Need not implement - No significant increase in class average\n");
    }

    return 0;
}
