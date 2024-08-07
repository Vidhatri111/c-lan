#include <stdio.h>

void main() {
    int rollnumber;
    float gujarati, hindi, english,economics,psychology,geography,Sociology, average;
    char grade;

    printf("Enter Your Rollnumber: ");
    scanf("%d", &rollnumber);

    printf("\nEnter Gujarati Marks : ");
    scanf("%f", &gujarati);

    printf("Enter Hindi Marks : ");
    scanf("%f", &hindi);

    printf("Enter English Marks : ");
    scanf("%f",&english);

    printf("Enter Economics Marks : ");
    scanf("%f",&economics);

    printf("Enter Psychology Marks : ");
    scanf("%f",&psychology);

    printf("Enter Geography Marks : ");
    scanf("%f",&geography);


    printf("Enter Sociology Marks : ");
    scanf("%f",&Sociology);

    average = (gujarati + hindi + english + economics + psychology + geography + Sociology) / 7;

    if (average >= 90) {
        grade = 'A1';
    } else if (average >= 80) {
        grade = 'A2';
    } else if (average >= 70) {
        grade = 'B1';
    } else if (average >= 60) {
        grade = 'B2';
    } else {
        grade = 'F';
    }

    printf("\nRollnumber : %d\n", rollnumber);
    printf("Average marks : %.2f\n", average);
    printf("Grade : %c\n", grade);
}
