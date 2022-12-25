// #include <stdio.h>

// int main(){
//     int nums[10], i, ele, check = 0;
//     for (i = 0; i<10; i++){
//         printf("Enter number %d: ", i+1);
//         scanf("%d", &nums[i]);
//     }
//     printf("Enter the number to be searched: ");
//     scanf("%d", &ele);
//     for (i = 0; i < 10; i++){
//         if (nums[i] == ele){
//             printf("Index of the element is %d\n", i);
//             check = 1;
//         }
//     }
//     if (check == 0)
//         printf("Number not found");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int nums[10], i, sum=0,avg;
//     for (i = 0; i<10; i++){
//         printf("Enter number %d: ", i+1);
//         scanf("%d", &nums[i]);
//         sum+=nums[i];
//     }
//     avg=sum/10;
//     printf("Sum is %d",sum);
//     printf("\nAverage is %d", avg);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int nums[10], i, sum1=0,sum2=0,avg1,avg2;
//     for (i = 0; i<10; i++){
//         printf("Enter number %d: ", i+1);
//         scanf("%d", &nums[i]);
//         if(nums[i]%2==0){
//             sum1+=nums[i];
//         }
//         else{
//             sum2+=nums[i];
//         }
//     }
//     avg1=sum1/10;
//     avg2=sum2/10;
//     printf("Sum is %d",sum1);
//     printf("\nSum is %d",sum2);
//     printf("\nAverage is %d", avg1);
//     printf("\nAverage is %d", avg2);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i = 0, j = 0, std_mk[3][4], sum=0, Totmks[3], highest[3], Hmks=0, index[3], cntr=0;
//     for (i = 0; i < 3; i++){
//         for (j = 0; j < 4; j++){
//             printf("Enter the student %d sub %d mark: ", i + 1, j + 1);
//             scanf("%d", &std_mk[i][j]);
//         }
//     }
//     printf("\n");
//     for (i = 0; i < 3; i++){
//         for (j = 0; j < 4; j++){
//             printf("%d ", std_mk[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for (i = 0; i < 3; i++){
//         for (j = 0; j < 4; j++){
//             sum+= std_mk[i][j];
//             if (std_mk[i][j] > Hmks)
//                 Hmks = std_mk[i][j];
//                 index[cntr] = j;
//         }
//         cntr++;
//         highest[i] = Hmks;
//         Totmks[i] = sum;
//         sum=0;
//         Hmks=0;
//     }
//     for (i = 0; i < 3; i++){
//         printf("Total mks obtained by student %d = %d\n", i+1, Totmks[i]);
//         printf("Highest mks of student %d = %d and its index is %d\n", i+1, highest[i], index[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int grad;
//     do{
//         printf("Enter a grade between 1 - 100:");
//         scanf("%d", &grad);}
//     while(grad<0 || grad>100);

//     printf("Valid Grade");
//     return 0;
// }
// 123 Pattern
// #include <stdio.h>
// int main()
// {
//     int n, i, j;
//     printf("Enter a value for n:");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {

//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// void maxmin()
// {   int n1, n2, n3;
//     // printf("enter number 1:\n enter number 2:\n enter  number 3: ");
//     scanf("%d%d%d", &n1,&n2,&n3);

//     if (n1 > n2 && n1 > n3)
//     {
//         printf("Maximum number is %d", n1);

//     }

//     else if (n2 > n1 && n2 > n3)
//     {
//         printf("Maximum number is %d", n2);

//     }

//     else
//     {
//         printf("Maximum number is %d", n3);
//     }
// }
// int main()
// {
//     maxmin();
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int grade[5],low,i;
//     for(i=0;i<5;i++){
//         printf("Enter the number:",i+1);
//         scanf("%d", &grade[i]);
//     }
//     low = grade[0];
//     for(i=1;i<=5;i++){
//         if (grade[i]<low){
//             low = grade[i];
//         }
//     }
//     printf("Lowest grade is %d",low);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// { 
//     char a[10];
//     printf("Enter value");
//     gets(a);
//     char name[] = "haniel jaydon";
//     int i=0;
//     while(name[i] != '\0'){
//         printf("%c", name[i]);
//         i++;
//     }
    
//     printf("%d",strlen(name));
//     return 0;
// }


#include <stdio.h>
#include <malloc.h>
int main(){
     int a,sum=0,i;
     scanf("%d",&a);
     for(i=1;i<a;i++){
         sum+=i;
     }
     printf("%d",sum);
     return 0;
 }
