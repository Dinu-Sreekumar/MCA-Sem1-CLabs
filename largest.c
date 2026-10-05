#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the 3 numbers: ");
scanf("%d %d %d",&a, &b, &c);
if (a>b&&a>c){
	printf("The largest is %d\n", a);
}
else if(b>c&&b>a){
	printf("The largest is %d\n", b);
}
else if(c>a&&c>b){
	printf("The largest is %d\n", c);
}
else{
	printf("The numbers are equal\n");
}
return 0;
}
