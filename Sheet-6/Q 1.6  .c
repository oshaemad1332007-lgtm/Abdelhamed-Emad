#include <stdio.h>
void power1(int a,int b ){
    int result = 1 ;
for (int i = 0 ;i<b;i++){
    result*=a;

}
printf("%d ^ %d = %d \n",a,b,result) ;

}

int main() {
int a,b;
scanf("%d%d",&a,&b);
power1(a,b);

    return 0;
}
