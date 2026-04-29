#include <stdio.h>

int main()
{
   int n =0, a=0, b=0, c=0;
   scanf("%d", &n);
   for(a=1, n; a<=n/900; a++) {
        for(b=2, n; b<=n/750; b+=2) {
            for(c=1; c<=n/200 && c<b || c<a; c++) {
                if(n==900*a+750*b+c*200) {
                printf("%d %d %d\n", a,b,c);
        }   
   }
}
}
if(n!=900*a+750*b+c*200) {
    printf("none");
}
}
