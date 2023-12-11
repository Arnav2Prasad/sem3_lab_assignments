MIS : 612203011
NAME : ARNAV PRASAD
DIVISION : S1

//Q1 Write a C program to find out the size of variables of different data types (use sizeof()
//operator) and display their size as output.
//SOLUTION
#include <stdio.h>

int main(){
	int n;
	char ch;
	float f;
	long int a;
	long long int p;
	signed int x;
	unsigned int y;
	signed char l;
	unsigned char d;
	

	printf("The size of int is : %ld\n",sizeof(n));
	printf("The size of float is : %ld\n",sizeof(f));
	printf("The size of long int is : %ld\n",sizeof(a));
	printf("The size of long long int is : %ld\n",sizeof(p));
	printf("The size of signed int is : %ld\n",sizeof(x));
	printf("The size of unsigned int is : %ld\n",sizeof(y));
	printf("The size of signed char is : %ld\n",sizeof(l));
	printf("The size of unsigned char is : %ld\n",sizeof(d));

	return 0;
}

//QUESTION-2
//Write a C program to find largest number among 3 numbers using ternary operator
//(conditional operator i.e. ?:)

//SOLUTION
#include <stdio.h>

int main(){
	float a;
	float b;
	float c;

	printf("Number 1 : ");
	scanf("%f",&a);

	printf("Number 2 : ");
        scanf("%f",&b);
	
	printf("Number 3 : ");
        scanf("%f",&c);

	float largest_num;
	
	largest_num=a>b?(a>c?a:c):(b>c?b:c);

	printf("The largest number among %f %f %f is : %f\n",a,b,c,largest_num);

	return 0;
}	
//QUESTION-3
//Write a C program to check whether an alphabet entered by user is vowel or consonant
//a. using if else statement. b. using switch statement

//SOLUTION
//using if else statement
#include <stdio.h>

int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);

	if (ch=='a'||ch == 'e'||ch == 'i'||ch=='o'||ch=='u'||ch == 'A'||ch == 'E'||ch=='I'||ch=='O'||ch=='U'){
		printf("The entered alphabet %c is vowel\n",ch);
	}
	else{
		printf("The entered alphabet %c is vowel\n",ch);
	}

	return 0;

}


//using switch statement
#include <stdio.h>

int main(){
	char ch;
        printf("Enter a character : ");
        scanf("%c",&ch);
	
	switch (ch){
		case 'A':
			printf("The entered alphabet %c is vowel\n",ch);
			break;
		case 'E':
			printf("The entered alphabet %c is vowel\n",ch);
			break;
		case 'I':
			printf("The entered alphabet %c is vowel\n",ch);
			break;
		case 'O':
			printf("The entered alphabet %c is vowel\n",ch);
			break;
		case 'U':
			printf("The entered alphabet %c is vowel\n",ch);
			break;
		case 'a':
                        printf("The entered alphabet %c is vowel\n",ch);
                        break;
                case 'e':
                        printf("The entered alphabet %c is vowel\n",ch);
                        break;
                case 'i':
                        printf("The entered alphabet %c is vowel\n",ch);
                        break;
                case 'o':
                        printf("The entered alphabet %c is vowel\n",ch);
                        break;
                case 'u':
                        printf("The entered alphabet %c is vowel\n",ch);
                        break;
		default:
                        printf("The entered alphabet %c is consonant\n",ch);
			break;
		}
	return 0;
}
//QUESTION-4
/*
Write a C program to input basic salary of an employee and calculate DA as per
following rules:
For Basic Salary >= 10000 and <= 20000, 10% of basic salary.
For Basic Salary > 20000 and <= 50000, 15% of basic salary.
For Basic Salary > 50000 and <= 100000, 20% of basic salary.
For Basic Salary > 100000, DA is not given.
*/

//SOLUTION
#include <stdio.h>

int main()
{
    float sal;

    printf("Enter salary of an employee : ");
    scanf("%f",&sal);


    if(sal>=10000 && sal<=20000){
       printf("For your salary range DA is : %f\n",0.1*sal); 
    }
    else if(sal>20000 && sal<=50000){
    
        printf("For your salary range DA is : %fd\n",0.15*sal);
    }
    else if(sal>50000 && sal<=100000){
    
        printf("For your salary range DA is : %f\n",0.2*sal);
    }
    else if(sal > 100000){
        printf("For your salary range DA is not given\n");
    }
    return 0;
}

/*
//QUESTION-5

Write a C Program to display a day (Monday or Tuesday or Wednesday etc.) when a
number (1 or 2 or 3 etc.) of day of a week is entered. Assume that on 1st day of a week
is Monday (use switch case).
*/

//SOLUTION
#include <stdio.h>

int main(){
	int a;

	printf("Day Number (integer between 1 and 7): ");
	scanf("%d",&a);
	//printf("\n");

	switch (a){
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednessday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
				break;
		default:
			printf("Enter a valid integer between 1 and 7\n");
			break;
	}
	return 0;
}

//QUESTION-6
/*
Write C program to calculate area and circumference of circle using variables and
constant.
*/

//SOLUTION
#include <stdio.h>

float areaofcircle(float r){
	return 22/7*r*r;
}

float circumference(float r){
	return 2*22/7*r;
}

int main(){
	printf("Enter radius of circle : ");
	float r;
	scanf("%f",&r);
	printf("\n");
	printf("Circumference of the circle of radius %f is : %f\n",r,circumference(r));
	printf("Area of the circle of radius %f is %f\n",r,areaofcircle(r));

	return 0;
}


//QUESTION-7
/*
Write a C program to perform for different unit conversion (Fahrenheit to Celsius).
*/

//SOLUTION
#include <stdio.h>

float FToC(float F){
        return (F-32)/1.8;
}

float CToF(float C){
        return (C*9/5) + 32;
}

int main(){
        float a;
        float b;

        printf("Enter temperature in Celsius : ");
        scanf("%f",&a);
        printf("\n");

        printf("The celsius temperature %f is equal to %f Fahrenite\n",a,CToF(a));

        printf("Enter temperature in Fahrenite : ");
        scanf("%f",&b);
        printf("\n");

       printf("The Fahernite temperature %f is equal to %f Celsius\n",a,FToC(b));

       return 0;
}

