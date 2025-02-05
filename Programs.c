// Print your name:

#include <stdio.h>

 int main() {
    char name[16]="Jayashree VR";
    printf("My name is %s",name);
    return 0;
}


//Get name from user and print it

#include <stdio.h>

 int main() {
    char name[20];
    printf("Enter your name:%s");
    scanf("%s",&name);
    printf("My name is %s",name);
    return 0;
}

//Multiply two floating point numbers

#include <stdio.h>

int main() {
    float num_1=23.4;
    float num_2=23.7;
    float res=num_1*num_2;
    printf("the product is %f",res);

    return 0;
}

//Print ASIIC Value:

 #include <stdio.h>

 int main() {
    char val;
    printf("Enter a character:%c");
    scanf("%c",&val);
    printf("%d",val);

    return 0;
}

// convert Fahrenheit to Celsius

#include <stdio.h>

int main() {
    float F;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&F);
    float C=(F-32.0)*(5.0/9.0);
    printf("the temperature in Celsius is %f",C);

    return 0;
}

//Size of int,float,double,char
#include <stdio.h>

int main() {
    int num=12;
    float n=23.1;
    char a='s';
    double q='q';
    printf("%d\n",sizeof(num));
    printf("%lu\n",sizeof(n));
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(q));
    return 0;
}

//Swap two numbers


//Odd or Even number

#include <stdio.h>

int main() {
    int a;
    printf("enter number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("A is even number");
    }
    else{
        printf("A is odd number");
    }

    return 0;
}

//positive or negative number

#include <stdio.h>

int main() {
    int a;
    printf("enter number:");
    scanf("%d",&a);
    if(a>=0){
        printf("A is positive number");
    }
    else{
        printf("A is negative number");
    }

    return 0;
}

//check wheather a character is alphabet or not

//Largest among 3 numbers

//check if a number is divisible by 5 and 11
