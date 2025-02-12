//Programs using nested for loop

//1
#include<stdio.h>
int main(){
    int row=3,col=2;
    for(int i=0;i<row;i++){
        printf("\n");
        for(int j=0;j<col;j++){
            printf("*");
        }
    }
}

//2
#include<stdio.h>
int main(){
    int row=3,col=2;
    for(int i=1;i<=row;i++){
        printf("\n");
        for(int j=1;j<=col;j++){
            printf("%d",i);
        }
    }
}

//3.

#include<stdio.h>
int main(){
    int row=4,col=4;
    for(int i=1;i<=row;i++){
        printf("\n");
        for(int j=1;j<=col;j++){
            printf("%d",j);
        }
    }
}

//4.

#include<stdio.h>
int main(){
    int row=4,col=4;
    for(int i=row;i>0;i--){
        printf("\n");
        for(int j=col;j>0;j--){
            printf("%d",i);
        }
    }
}
