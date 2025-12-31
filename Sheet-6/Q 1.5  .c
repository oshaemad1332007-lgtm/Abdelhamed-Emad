#include <stdio.h>
void check(int a ){

if (a%2==0)
printf(" %d even \n",a);
else
printf(" %d odd \n",a);

}

int main() {
int a  ;
scanf("%d",&a);
check(a);

    return 0;
}
