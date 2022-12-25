/*#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    printf("%d is the largest number",a);

    if(b>a && b>c)
    printf("%d is the largest number",b);

    if(c>b && c>a)
    printf("%d is the largest number",c);

    return 0;

}*/

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number between 1-7:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
    printf("Monday");
    break;

    case 2:
    printf("Tuesday");
    break;

    case 3:
    printf("Wednesday");
    break;

    case 4:
    printf("Thursday");
    break;

    case 5:
    printf("Friday");
    break;

    case 6:
    printf("Saturday");
    break;

    case 7:
    printf("Sunday");
    break;

    default:
    printf("Wrong input!!");
    }
return 0;
}
