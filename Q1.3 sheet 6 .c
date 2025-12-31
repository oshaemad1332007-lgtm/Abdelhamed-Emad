#include <stdio.h>
void area(float a){

printf("Area of the circle with radius %f is : %f \n",a,(3.14*(a*a)));

}

int main() {
float a;
scanf("%f",&a);
area(a);

    return 0;
}
