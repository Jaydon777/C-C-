/*#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
    int sum=0;
    float avg=0;
    sum = a+b+c;
    avg = sum/3.0;
    printf("The sum is: %d\n",sum);
    printf("The average is: %.2f",avg);
    return 0;
}*/

/*#include <stdio.h>
int main(){ 
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);
    float area,circum;
    area = 3.14*r*r;
    circum = 2*3.14*r;
    printf("Area of the circle is: %.2f\n",area);
    printf("Circumference of circle is: %.2f\n", circum);
    return 0;
}*/


/*#include <stdio.h>
int main(){
  int b=2,c=3,d=4,e=5,f=6;
  int a = b+c*d-e;
  printf("%d \n", a);
  int a1 = (b+d)*(d-e);
  printf("%d \n", a1);
  int a2 = b*(c-(d+e));
  printf("%d \n", a2);
  int a3 = b+c>d*e==f;
  printf("%d \n", a3);
  return 0;
}*/

// #include<stdio.h>
// int main(){
//   int a;
//   printf("Enter the number:");
//   scanf("%d",&a);
//   if(a>0)
//   {
//     printf("+ve");
//     }
//   else
//   {
//     printf("-ve");
// }
// return 0;
  
// }

#include <stdio.h>
#include <string.h>
//include header files

//Marks structure definition
struct Marks
{
	int roll_no;
	string name;
	int chem_marks;
	int maths_marks;
	int phy_marks;
};
//main function
int main()
{
	//array of type Marks of size 5
	struct Marks students[5];
	//input marks for each student in each subject
	for(int i=0;i<5;i++)
	{
		cout<<"Enter marks for student "<<i+1<<" in Chemistry\n";
		cin>>students[i].chem_marks;
		cout<<"Enter marks for student "<<i+1<<" in Mathematics\n";
		cin>>students[i].maths_marks;
		cout<<"Enter marks for student "<<i+1<<" in Physics\n";
		cin>>students[i].phy_marks;
	}
	//for each student in array
	for(int i=0;i<5;i++)
	{
		//sum of marks in 3 subjects
		float sum=students[i].chem_marks+students[i].maths_marks+students[i].phy_marks;
		//calculate the percentage
		float per=sum/3;
		//display the percentage
		cout<<"Percentage of student "<<i+1<<" is: "<<per<<"\n";
	}
	return 0;
}//main function terminates