#include<stdio.h>
#include<math.h>
 
void main()
{
int n=8, sum=0 , i; 
char ch[]="00101111";
  for (i=n-1;i>-1;i--){
   if (ch[i]=='1')
   sum+=pow(2,n-(i+1)) ;}
  printf("В 10-ной:\n%d",sum);
}