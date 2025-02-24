#include<stdio.h>

int main() {
      
    char name[15];

    printf("Please your real-name :");
    scanf("%s", &name);
    printf("Welcome %s to Coding c classes");



    // taking input from user and sum of the two number
    int num1, num2, sum;

    printf("please enter your fisrt number :");
    // taking input
    scanf("%d", &num1);
    printf("Please enter your seconde number :");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("sum of two number is : %d ", sum);

  

    return 0;
}