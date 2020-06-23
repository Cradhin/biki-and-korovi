# include <stdio.h> 
# include <locale.h> 
# include <stdlib.h> 
# include "way.h"
int main() 
{ 
setlocale (0,"Russian");  
r(); 
printf("Загадайте 4-значное число\n"); 
scanf("%d",&numk); 
system("clear"); 
start: 


printf("Введите 4-значное число\n"); 
nu1=numk/1000; 
nu2=numk/100-10*nu1; 
nu3=numk/10-100*nu1-10*nu2; 
nu4=numk-1000*nu1-100*nu2-10*nu3; 

scanf("%d",&num); 
printf("\n"); 
n1=num/1000; 
n2=num/100-10*n1; 
n3=num/10-100*n1-10*n2; 
n4=num-1000*n1-100*n2-10*n3; 

if (!(num/10000!=0||num/1000==0)); 

else printf("Нужно ввести 4-значное число\n"); 
if (n1==n2||n1==n3||n1==n4||n2==n3||n2==n4||n4==n3) printf("Ввод одинаковых чисел недопустимо\n"); 

eg(num,numk); 
ck(n1,n2,n3,n4,nu1,nu2,nu3,nu4); 


goto start; 

system ("pause"); 
return 0; 

}
