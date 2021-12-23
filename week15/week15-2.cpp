///輾轉相除法,可以算出最大公因數

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a%b;
    while (1){
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d", b);
}
