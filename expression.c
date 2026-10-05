#include <stdio.h>
int main(){
int expr,a,b,c,d,e,f,g;
printf("Enter the values of a,b,c,d,e,f and g: ");
scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g );
expr=((a - b / c * d + e)*(f + g));
printf("The expression value is: %d\n",expr);
return 0;
}
