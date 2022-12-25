// #include <stdio.h>

// int main(){

//     int i,j,k,n,c;
//     scanf("%d",&n);
//     int arr[n];

//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(i=0;i<n;i++){
//         if(i==(n-1)){
//             printf("%d",arr[i]);
//         }
//         else{
//             for(j=i+1;j<n;j++){
//                 if(arr[i]>arr[j]){
//                     c=1;
//                     continue;
//                 }
//                 else{
//                     c=0;
//                     break;
//                 }
//             }
//             if(c==1){
//                 printf("%d",arr[i]);
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main(){

    float units=0;

    scanf("%f",&units);

    if(units<=100) printf(0);

    else if(units>100 && units<200) printf("%.2f",(units-100)*1.5);
    else if(units>200 && units<300) printf("%.2f",(units-100)*2.5);
    else if(units>300 && units<500) printf("%.2f",(units-100)*4.5);

    else printf("%.2f",(units-100)*6); 
return 0;
}