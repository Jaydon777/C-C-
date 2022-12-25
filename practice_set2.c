//AGE//
/*#include <stdio.h>
int main(){
    int age;
    scanf("%d", &age);
    if (age>0){
        printf("Your age is %d",age);
    }
    else{
        printf("Invalid age try again");
    }
    return 0;
}*/

//FACTORIAL//
/*#include <stdio.h>
int main(){
    int n,i,fact=1;
    scanf("%d",n);
    for(i=1;i<n+1;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}*/

//SUM OF DIGITS//
/*#include<stdio.h>  
int main(){    
    int a,b,sum;    
    scanf("%d",&a); 
    sum =0;   
    while(a>0){    
    b=a%10;    
    sum=sum+b;    
    a = a/10;    
    }   
    printf("%d",sum);    
    return 0;
}*/
//SUM OF n NUMBERS INCLUDING POSITIVE AND NEGATIVE BUT CONSIDER ONLY POSITIVE//
#include <stdio.h>

int main(){
    int n, i, sum=0, temp;
    scanf("%d", &n);
    for (i=0 ;i<n ;i++){
        scanf("%d", &temp);
        if (temp >0){
            sum+=temp;
        }
    }
    printf("%d\n", sum);
    return 0;
}