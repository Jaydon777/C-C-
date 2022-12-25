/*#include <stdio.h>
int main(){
  int a=15,b=7;
  int sum,sub,mul,mod;
  sum=a+b;
  sub=a-b;
  mul=a*b;
  mod=a%b;
  printf("sum = %d\nsub = %d\nmul = %d\nmod = %d\n",sum,sub,mul,mod); 
  return 0;
}*/

/*#include <stdio.h>
int main(){
   printf("  *\n ***\n*****");
   return 0;
}*/
/*
*     *
 *   *
  * *
   *
  * * 
 *   *
*     *
*/
/*#include <stdio.h>
int main(){
   printf("*     *\n *   *\n  * *\n   *\n  * *\n *   *\n*     *");
   return 0;
}*/

/*Area of rectangle

#include<stdio.h>

int main(){
   int a = 0;
   int b = 0;
   int area = 0;
   printf("Enter a length: ");
   scanf("%d", &a);
   printf("Enter a width: ");
   scanf("%d",&b);
   area=a*b;
   printf("Area of rectangle = %d", area);
   return 0;
} */

/*#include <stdio.h>
int main(){
   int rollno = a;
   char name = v;
   printf("Enter rollno");
   scanf("%d",&a);
   printf("Enter name:")
   scanf("%f",&v)
   printf("the rollno is %d and name is %f ",a,v);
   return 0;
}*/
#include <stdio.h>

// int main(){
//     int a=10, b=10, c=15,d;
//     d = a>b && b>c;
//     printf("%d\n", d);
//     d = a>b || b>c;
//     printf("%d\n", d);
//     return 0;
// }
int main()

{
char c[]=”VITEEE2022”;

char *p=c;

printf(“%s”,p+p[1]-p[3]);
return 0;
}