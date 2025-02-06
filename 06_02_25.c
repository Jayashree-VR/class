//Find if a number is divisible by 5 or 3 or both

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%5==0 && num%3==0){
        printf("The number is divisible by 5 and 3");
    }
    else if(num%5==0){
        printf("The number is diviisible by 5 but not by 3");
    }
    else if(num%3==0){
        printf("The number is diviisible by 3 but not by 5");
    }
    else{
        printf("The number is not divisible by 5 and 3");
    }
    
    return 0;
}


//Calculator with int choice

#include<stdio.h>
int main(){
    int a,b,c,choice;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("ENter your choice: \n 1.ADD \n 2.SUB \n 3.MULTIPLY \n 4.DIVIDE\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        c=a+b;
        printf("The addition of %d and %d is %d",a,b,c);
        break;
        
        case 2:
        c=a-b;
        printf("The subtraction of %d and %d is %d",a,b,c);
        break;
        
        case 3:
        c=a*b;
        printf("The multiplication of %d and %d is %d",a,b,c);
        break;
        
        case 4:
        c=a/b;
        printf("The division of %d and %d is %d",a,b,c);
        break;
        
        default:
        printf("Enter a valid choice");
        break;
    }
}

//calculator with character choice
#include <stdio.h>

int main() {
    int a, b;
    char choice;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    getchar(); 
    printf("Enter your choice: \n + for ADD \n - for SUB \n * for MULTIPLY \n / for DIVIDE\n");
    scanf("%c", &choice);

    switch (choice) {
        case '+':
            printf("The addition of %d and %d is %d\n", a, b, a + b);
            break;
        
        case '-':
            printf("The subtraction of %d and %d is %d\n", a, b, a - b);
            break;
        
        case '*':
            printf("The multiplication of %d and %d is %d\n", a, b, a * b);
            break;
        
        case '/':
            printf("The div of %d and %d is %d\n", a, b, a / b);
            break;
        
        default:
            printf("Enter a valid choice.\n");
            break;
    }

    return 0;
}

//Example program using for loop 1

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("\nThe roll no is %d",i);
    }
    return 0;
}

//sum of n numbers

#include<stdio.h>
int main(){
    int num,res;
    res=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        
        res+=i;
    }
    printf("The sum is %d",res);
    return 0;
}

//print even number in range using for loop
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2==0){
            printf("%d\t",i);
        }
    }
    return 0;
}

//print even numbers in range using while loop

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int i=0;
    while(i<=num){
        if(i%2==0){
            printf("%d\t",i);
        }
        i++;
        
    }
    
    return 0;
}

//print even numbers in range using do while loop

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int i=0;
    do{
        if(i%2==0){
            printf("%d\t",i);
        }
        i++;
        
    }while(i<=num)
    
    return 0;
}

//sum of even numbers using for loop

#include<stdio.h>
int main(){
    int num;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2==0){
            printf("%d\t",i);
            sum+=i;
        }
    }
    printf("\nThe sum of even numbers is %d",sum);
    return 0;
}

//sum of even numbers using while loop

#include<stdio.h>
int main(){
    int num;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        if(i%2==0){
            printf("%d\t",i);
            sum+=i;
        }
        i++;
    }
    printf("\nThe sum of even numbers is %d",sum);
    return 0;
}

//sum of even numbers using do while loop

#include<stdio.h>
int main(){
    int num;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int i=1;
    do{
        if(i%2==0){
            printf("%d\t",i);
            sum+=i;
        }
        i++;
    }while(i<=num);
    printf("\nThe sum of even numbers is %d",sum);
    return 0;
}

//Multiplication table

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("\n%d x %d = %d",i,num,i*num);
    }
}

//print the digits of a number

#include<stdio.h>
int main(){
    int num,d,r;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter the number of digits in the number you entered:");
    scanf("%d",&d);
    for(int i=0;i<d;i++){
        r=num%10;
        printf("%d\t",r);
        num/=10;
    }
}
































