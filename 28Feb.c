/*#include <stdio.h>
int main(){
    int a,b,choice;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Select the arithmetic operation\n 1.Add\n 2.Subtraction\n 3.Multiplicaton\n 4.Division\n");
    scanf("%d",&choice);
    int sum,sub,div,mul;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    switch(choice)
    {
        case 1:
        printf("The sum is %d",sum);
        break;
        case 2:
        printf("The subtraction is %d",sub);
        break;
        case 3:
        printf("The product is %d",mul);
        break;
        case 4:
        printf("The quotient is %d",div);
        break;
        default:
        printf("Invalid input");

    }
  
    return 0;
}*/

// ternary operator//
/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    (a>b)?(b=1):(b=-1);
    printf("%d%d",a,b);
    return 0;
}*/

// nested ternary operator//
/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    (a!=b)?(a>b)?(printf("a>b")):(printf("a<b")):(printf("a==b"));
    return 0;
}*/

//goto statement//
/*#include <stdio.h>
int main(){
    int age;              XXXXX
    input_age:
    printf("Enter your age:");
    scanf("%d",&age);*/


//WAP TO PRINT FIRST 10 natural nos//
/*#include <stdio.h>
int main(){
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    i = 1;
    while(i<=a)
    {
      printf("\n %d",i);
      i+=1;
    }
    printf("\ndone");
}*/
//DO WHILE//
/*#include <stdio.h>
int main(){
    int a,b=0;
    printf("Enter a number:");
    scanf("%d",&a);
    do
    {   printf("values of b %d\n",b);
        b+=1;
         
    } while(b<=a); 
return 0;
}*/
//FOR LOOP//
/*#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}*/

//SUM OF N INTEGERS//
/*#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a number:");ww
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        sum=sum+i;
        
    }
    printf("The sum is %d",sum);
    return 0;
}*/
//SUM & AVG//
/*#include <stdio.h>
int main(){
    int n,i,a,sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
    }
    avg=sum/n;
    printf("%d\n",sum);
    printf("%d",avg);
    return 0;
}*/


#include<stdio.h>
int main(){
	int n,i,count,ocount,j=0;
	int max,sums=0;
	scanf("%d",&n);
    int matrix[n*n], sum[n*n];
    for(i=0;i<n*n;i++){
    	scanf("%d",&matrix[i]);
	}
	for(i=0;i<=(n-1)*(n-1);i++){
		if(ocount%(n-1)==0 && ocount!=0){
			i++;
		}
		j=i;
		count=1;
		while(count<5){
			sums=matrix[j]+sums;
			if(j==i+1){
				j=j+2;
				count++;
		    }
			else{
				count++;
				j++;
			}
		}
		sum[ocount]=sums;
		sums=0;
		ocount++;
	}
	max=sum[0];
	for(i=0;i<(n-1)*(n-1);i++){
		if(sum[i]>max){
			max=sum[i];
		}
	}
	printf("%d",max);
	return 0;
}       