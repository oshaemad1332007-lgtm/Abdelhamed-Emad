#include <stdio.h>
void max1 (int a,int b ){
    int result;
    if (a>b)
         result = a ;
    else
         result =b ;

printf("Maximum of %d and %d : %d \n ",a,b,result) ;

}

int main() {
int a,b;
scanf("%d%d",&a,&b);
max1 (a,b);

    return 0;
}
