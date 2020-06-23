#include<stdio.h>
void ck(int n1,int n2,int n3,int n4,int nu1,int nu2,int nu3,int nu4) 
{ 
if (n1==nu1) printf(" -Бык\n"); 
if (n1==nu2) printf(" -Корова\n"); 
if (n1==nu3) printf(" -Корова\n"); 
if (n1==nu4) printf(" -Корова\n"); 

if (n2==nu1) printf(" -Корова\n"); 
if (n2==nu2) printf(" -Бык\n"); 
if (n2==nu3) printf(" -Корова\n"); 
if (n2==nu4) printf(" -Корова\n"); 

if (n3==nu1) printf(" -Корова\n"); 
if (n3==nu2) printf(" -Корова\n"); 
if (n3==nu3) printf(" -Бык\n"); 
if (n3==nu4) printf(" -Корова\n"); 

if (n4==nu1) printf(" -Корова\n"); 
if (n4==nu2) printf(" -Корова\n"); 
if (n4==nu3) printf(" -Корова\n"); 
if (n4==nu4) printf(" -Бык\n"); 

else printf("Попробуйте еще раз\n"); 
} 
