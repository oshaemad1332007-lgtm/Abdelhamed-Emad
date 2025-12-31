#include <stdio.h>
void Average(int a,int b ,int c ){

printf("Average of %d , %d , and %d: %d",a,b,c,(a+b+c)/3) ;

}

int main() {
int a,b,c ;
scanf("%d%d%d",&a,&b,&c);
Average(a,b,c);

    return 0;
}
