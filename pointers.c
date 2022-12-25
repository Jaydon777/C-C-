// //21BRS1419// - INT 
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int a=20;
//     int*ptr;
//     ptr = &a;
//     printf("The address of pointer is %p the address of a is %p and value of a is %d", &ptr,&a,*ptr);
//     return 0;
// }

// //21BRS1419// - FLOAT
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     float a;
//     scanf("%f",&a);
//     float*ptr;
//     ptr = &a;
//     printf("The address of pointer is %p the address of a is %p and value of a is %0.2f", &ptr,&a,*ptr);
//     return 0;
// }

// //21BRS1419// - CHAR
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     char a ;
//     scanf("%c",&a);
//     char*ptr;
//     ptr = &a;
//     printf("The address of pointer is %p the address of a is %p and value of a is %c", &ptr,&a,*ptr);
//     return 0;
// }

// //21BRS1419// - ARRAY
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int lst[5],i;
//     int*p;
//     p = lst;
//     for(i=0;i<5;i++){
//         printf("Enter value:");
//         scanf("%d",p+i);
//     }
//     for(i=0;i<5;i++){
//         printf("%d",*(p+i));
//     }
//     return 0;
// }

// //21BRS1419// - SUM OF ARRAY
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int lst[5],i,sum=0;
//     int*p;
//     p = lst;
//     for(i=0;i<5;i++){
//         printf("Enter value:");
//         scanf("%d",p+i);
//     }
//     for(i=0;i<5;i++){
//         sum+= *(p+i);
//     }
//     printf("Sum is %d",sum);
//     return 0;
// }

// //21BRS1419// - INCREMENT
// #include <stdio.h>

// void incro(int* x,int* y){
//     *x+=5;
//     *y+=5;
// }

// void main(){
//     int a,b;
//     printf("Enter value of a:");
//     scanf("%d",&a);
//     printf("Enter value of b:");
//     scanf("%d",&b);
//     printf("Values before increment is %d, %d",a,b);
//     incro(&a,&b);
//     printf("\nValues after increment is %d, %d",a,b);
// }

//21BRS1419// - SWAPPING
#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Values before swap is %d, %d",a,b);
    swap(&a,&b);
    printf("\nValues after swap is %d, %d",a,b);   
}

