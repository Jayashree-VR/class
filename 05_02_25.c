#include <stdio.h>

 int main() {
    int n1,n2,n3;
    float avg_1;
    float avg_2;
    n1=12;
    n2=23;
    n3=45;
    avg_1=(n1+n2+n3)/3;
    avg_2=(float)(n1+n2+n3)/3;
    printf("avergage is %f\n",avg_1);
     printf("avergage is %f",avg_2);

    return 0;
}
