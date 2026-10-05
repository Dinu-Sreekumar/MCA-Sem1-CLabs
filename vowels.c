#include<stdio.h>
int main(){
char str[20];
char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
int num_vowels= 10;
int counts[3]={0,0,0};
printf("Enter a String: ");
scanf("%[^\n]s", str);
for (int i=0;str[i] !='\0'; i++){
char ch=str[i];
if(ch==' '){
counts[2]++;
}else if((ch>= 'a' && ch <= 'z') || (ch>='A' && ch <='Z')){
int j;

for(j=0; j<num_vowels; j++){
if(ch==vowels[j]){
counts[0]++;
break;
}
}
if(j==num_vowels){
counts[1]++;
}
}
}
printf("\nVowels:%d\n",counts[0]);
printf("\nConsonants:%d\n",counts[1]);
printf("\nSpaces:%d\n", counts[2]);
return 0;
}


