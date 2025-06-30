#include <stdio.h>

void main() {
    // Write a C program to add two integers and display the result
    int no1 = 30;
    int no2 = 70;
    int sum = no1 + no2;
    printf("Add to integer %d\n", sum);

    // Write a C program to find the area of a circle.
    double radius = 2;
    double area;
    double pi = 3.1416;
    area = pi * radius * radius;
    printf("%f\n", area);

    // Write a C program to convert temperature from Celsius to Fahrenheit.
    int celcius = 42;
    int fahrenheit;
    fahrenheit = (celcius * 9 / 5) + 32;
    printf("%d\n", fahrenheit);

    // Write a C program to swap two numbers using a temporary third variable.
    int n1 = 20;
    int n2 = 40;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("%d\n", n1);
    printf("%d\n", n2);

    // Write a C program to input two numbers and find their average.
    int num1 = 20;
    int num2 = 60;
    int avg = (num1 + num2) / 2;
    printf("%d\n", avg);

    // Write a C program to find the square and cube of a given number.
    int square = num1 * num1;
    int cube = num1 * num1 * num1;
    printf("%d\n", square);
    printf("%d\n", cube);

    // Write a C program to convert given minutes into hours and remaining minutes.
    int hours, remaining;
    int minutes = 503;
    hours = minutes / 60;
    remaining = minutes % 60;
    printf("%d\n", hours);
    printf("%d\n", remaining);

    // Write a C program to input the length and width of a rectangle and find its perimeter.
    int perimeter;
    int length = 20;
    int width = 90;
    perimeter = 2 * (length + width);
    printf("%d\n", perimeter);

    // Write a C program to input the base and height of a triangle and calculate its area.
    int base = 300;
    int height = 200;
    double areat;
    areat = 0.5 * base * height;
    printf("%f\n", areat);

    // Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
    int hindi = 80;
    int english = 40;
    int math = 30;
    int science = 50;
    int sst = 70;
    int total = hindi + english + math + science + sst;
    int percentage = total / 5;
    printf("%d\n", percentage);

    
}