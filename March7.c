//ARRAY//
/*#include <stdio.h>
int main(){
    int i,n,sum=0,avg;
    printf("Enter no of elements:");
    scanf("%d",&n); 
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    avg=sum/n;
    printf("Sum is %d",sum);
    printf("\nAvg is %d",avg);
return 0;   
}   */

//2D ARRAY//
#include <stdio.h>
int main(){
    int arr[2][2],i,j;
    printf("Enter values");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",&arr[i][j]);
        }
    }
    return 0;   
}
