#include <stdio.h>
int fact(int n)
{
int f=1,i;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
int main()
{
int n,r,c,d,e,result;
printf("Enter the value of N in NcR: \n");
scanf("%d",&n);
printf("Enter the value of R in NcR: \n");
scanf("%d",&r);
c=fact(n);
d=fact(r);
e=fact(n-r);
result= c/(d*e);
printf("The value of NcR as per the data Entered above is: %d\n",result);
return 0;
}
