#include <stdio.h>
void area(int a ,int b , int c){

printf("Product of %d , %d, and %d  of : %d \n",a,b,c,a*b*c);

}

int main() {
int a ,b,c ;
scanf("%d%d%d",&a,&b,&c);
area(a,b,c);

    return 0;
}
