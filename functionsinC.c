#include <stdio.h>



int func(int a,int b,int c,int d)
{
     if (a>b)
     {

           if(a>c)
                {
                  if (a>d)
                       {
                           printf("%d",a);
                       }
                   else
                   {
                       printf("%d",d);
                   }
                }
            else
                {
                    if(c>d)
                    {
                        printf("%d",c);
                    }
                    else
                        {
                        printf("%d",d);
                        }
                }
     }

      else
      {
          if(b>c)
          {
              if(b>d)
              {
                  printf("%d",b);
              }
              else
              {
                  printf("%d",d);
              }
          }
          else
          {
           if(c>d)
                    {
                        printf("%d",c);
                    }
                    else
                        {
                        printf("%d",d);
                        }
          }
      }

      return ;
}

int main()
{

    int p,q,r,s;
    scanf("%d%d%d%d",&p,&q,&r,&s);
    func(p,q,r,s);
}
