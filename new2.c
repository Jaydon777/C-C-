// #include <stdio.h>
// #include <malloc.h>
// void main(){
//     int n,i,*p,sum = 0;
//     float avg;
//     printf("Enter no of ele");
//     scanf("%d",&n);
//     p = (int*)malloc(n*sizeof(int));
//     if(p==NULL){
//         printf("insufficient memory");
//         exit(1);
//     }
//     for(i=0;i<n;i++){
//         printf("Enter no");
//         scanf("%d",p+i);
//     }
//     for(i=0;i<n;i++){
//         sum+=*(p+i);
//         printf("%d",*(p+i));
//     }
//     free(p);
//     printf("\nsum is %d",sum);
//     printf("\navg is %d", (float)sum/n);
// }

// #include <stdio.h>
// void show(int);
// int main(){
//     int x =5;
//     show(x);
//     return 0;
// }
// void show(int y){
//     if(y>0){
//         printf("%d\n",y);
//         show(y-1);
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>
// struct student
// {
//     int roll;
//     float grade;
//     char name;
// };

// void main(){
//     struct student s;
//     scanf("%d%f%c",&s.roll,&s.grade,&s.name);
//     printf("%d\n%0.2f\n%c",s.roll,s.grade,s.name);
    
// }
#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}