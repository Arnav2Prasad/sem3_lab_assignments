#include <stdio.h>

//QUESTION-1
//using while loop

#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Enter a natural number : ");
	scanf("%d",&n);

	int sum=0;
	while (n>0){
		sum+=n;
		n--;
	}

	printf("The sum of the natural numbers upto %d : %d\n",n,sum);

	return 0;
}

// using for loop
#include <stdio.h>
#include <math.h>
int main(){
        int n;
        printf("Enter a natural number : ");
        scanf("%d",&n);
       
        int sum=0;
        for (int i=0;i<=n;i++){
		sum+=i;
	}
        
        printf("The sum of the natural numbers upto %d : %d\n",n,sum);
        
        return 0;
} 


//QUESTION-2
#include <stdio.h>
#include <math.h>
int main(){
        char ch='a';
        for (char ch='A';ch<='Z';ch++){
                printf("Ascii Value of %c is : %d\n",ch,ch);
        }
        for (char ch='a';ch<='z';ch++){
                printf("Ascii Value of %c is : %d\n",ch,ch);
        }
        
        return 0;
}


//QUESTION-3
#include <stdio.h>
#include <math.h>
int main(){
	int i;
	printf("Enter desired number : ");
	scanf("%d",&i);

	int sum=0;
	int x=i;
	while (i>0){
		sum+=i%10;
		i=i/100;
	}

	printf("sum of digits at even location in %d is : %d\n",x,sum);

	return 0;
}

//QUESTION-4
#include <stdio.h>
#include <math.h>
int answer(int n){
	//decimal to binary
	int i=n;
	int arr[100];
	int res;
	int counter=0;
	while (i>0){
		res=i%2;
		i=i/2;
		arr[counter]=res;
		counter++;
	}
	int k=0;
	for (int i=0;i<counter;i++){
		if (arr[i]==1){
			k++;
		}
	}
	return k;
}

int main(){
        int n;
        printf("Number : ");
        scanf("%d",&n);
        printf("Number of ones in %d = %d \n",n,answer(n));

        return 0;
}

//question-5
#include <stdio.h>
#include <math.h>
int main(){
        char ch;
        printf("Enter character : ");
        scanf("%c",&ch);

        if (ch>='A' && ch<='Z'){
                printf("Lower case of %c is : %c\n",ch,ch+32);
        }
        else if(ch>='a' && ch<='z'){
                printf("Upper case of %c is : %c\n",ch,ch-32);
        }
        else{
                printf("Print a valid character\n");
        }
        return 0;
}


//QUESTION-6

//pattern
#include <stdio.h>
#include <math.h>
void pattern(int n){
        int counter=0;
        for (int k=0;k<n;k++){
                for (int i=0;i<n-counter;i++){
                        printf(" ");
                }
                for (int j=0;j<(2*counter)+1;j++){
                        printf("%s","*");
                }
                counter++;
                printf("\n");
        }
}

int main(){
        int n;
        printf("Enter dimesnion of pattern : ");
        scanf("%d",&n);

        pattern(n);

        return 0;
}

//FLOYD'S TRIANGLE
#include <stdio.h>
#include <math.h>
void floyd(int n){
	int counter=1;
	for (int i=0;i<n;i++){
		for (int j=0;j<i+1;j++){
			printf("%d ",counter);
			counter++;
		}
		printf("\n");
	}
}

int main(){
	int n;
	printf("Enter dimesnion of Floyd's triangle : ");
	scanf("%d",&n);

	floyd(n);

	return 0;
}

//Pascal's Triangle
#include <math.h>
#include <stdio.h>

int fact(int n){
        if (n==0){
                return 1;
        }
        return n*fact(n-1);
}

int ncr(int n,int r){
        return fact(n)/(fact(n-r)*fact(r));
}

int main(){
        int n;
        printf("Enter dimension for pascal's traingle : ");
        scanf("%d",&n);

        int k;
        for (int i=0;i<n+1;i++){
                for (int j=0;j<n-i+1;j++){
                        printf(" ");
                }
                for (int k=0;k<=i;k++){
                        printf("%d ",ncr(i,k));
                }
                printf("\n");
        }
        return 0;
}

 

//part c
#include <stdio.h>
#include <math.h>

int main(){
        int n;

        printf("Enter dimesion : ");
        scanf("%d",&n);

        int counter=0;
        int temp=0;
        for (int i=0;i<n;i++){
                for (int j=0;j<counter+1;j++){
                        if (j%2==0){
                                printf("0");
                        }
                        else{
                                printf("1");
                        }
                }
                for (int k=0;k<(n-temp+2);k++){
                        printf(" ");
                }
                temp += 2;
                for (int p=0;p<counter+1;p++){
                        if (p%2==0){
                                printf("0");
                        }
                        else{
                                printf("1");
                        }
                }
                counter++;
                printf("\n");
        }
        return 0;
}


//Q7.
#include <stdio.h>
#include <math.h>
int gcd(int a,int b){
        for (int i=a;i>0;i--){
                if (a%i==0 && b%i==0){
                        return i;
                }
        }
        return -1;
}

int lcm(int a,int b){
        if (a==b){
                return a;
        }
        int max;
        if (a>b){
                max=a;
        }
        else{
                max=b;
        }
        for (int i=1;i<=b;i++){
                if ((b*i)%a==0){
                        return b*i;
                }
        }
        return -1;
}

int main(){
        int n;
        int a,b;
        printf("Enter 2 numbers : ");
        scanf("%d%d",&a,&b);

        printf("GCD of %d and %d is : %d\n",a,b,gcd(a,b));
        printf("LCM of %d and %d is : %d\n",a,b,lcm(a,b));

        return 0;
}      

//question-8
#include <stdio.h>
#include <math.h>

int isprime(int n){
	if (n==0 || n==1){
		return 0;
	}
	for (int i=2;i<n;i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int i;
	for (int i=0;i<=100;i++){
		if (isprime(i)){
			printf("%d ",i);
		}
	}
	return 0;
}

//Q9.
#include <stdio.h>
#include <math.h>
int fact(int n){
        if (n==1){
                return 1;
        }
        return n*fact(n-1);
}

int main(){
        printf("Enter degree : ");
        float n;
        scanf("%f",&n);

        float deg=(n*3.14)/180;

        int k;
        printf("How many times do you want to iterate the function(to get more accuaracy) :");
        scanf("%d",&k);
        float cos1=1;
        for (int i=1;i<k;i++){
                if (i%2==1){
                        cos1-=((pow(deg,(2*i)))/fact(2*i));
                }
                else{
                        cos1+=((pow(deg,(2*i)))/fact(2*i));
                }
        }

        float sin1=deg;
        for (int i=1;i<k;i++){
                if (i%2==1){
                        sin1-=((pow(deg,((2*i)+1)))/fact((2*i)+1));
                }
                else{
                        sin1+=((pow(deg,((2*i)+1)))/fact((2*i)+1));
                }
        }
        float ex=1;
        for (int i=1;i<k;i++){
                ex+=(pow(deg,i)/fact(i));
        }

        printf("The cosine of %f is : %f\n",n,cos1);
        printf("The sine of %f is : %f\n",n,sin1);
        printf("The e raised to %f is : %f\n",n,ex);
        return 0;
}
