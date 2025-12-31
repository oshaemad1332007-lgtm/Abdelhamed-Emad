#include <stdio.h>
void swapp(int n,int x)
{
    int t = x;
    x = n;
    n = t;

}

int main()
{
    int n,x;
    scanf("%d%d",&x, &n);
    swapp(n,x);
    printf("n = %d x = %d ", n,x);

    return 0;
}
