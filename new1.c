// #include <stdio.h>
// int main(){
//     int a,i;
//     scanf("%d",&a);
//     for(i=1;i<=a;i++){
//         printf("%d",i);
//     }
//     printf("\n");
//     for(i=a;i>0;i--){
//         printf("%d",i);
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        sum+=i+1;
    }
    printf("%d",sum);
    return 0;
}