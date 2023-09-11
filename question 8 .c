#include<stdio.h>
struct Marks{

	int roll_no;
	char name[50];
	float ba_marks,acc_marks,eco_marks;
};	

int main()
{
	int i;
	struct Marks marks[5];
	for(i=0;i<5;i++)
	{
		printf("Student %d\n",i+1);
		
		printf("Enter a roll-no : ");
		scanf("%d",&marks[i].roll_no);
		
		printf("Enter a name : ");
		scanf("%s",&marks[i].name);
		
		printf("Enter a b.a marks : ");
		scanf("%f",&marks[i].ba_marks);
		
		printf("Enter a acc marks : ");
		scanf("%f",&marks[i].acc_marks);
		
		printf("Enter a eco  marks :\n");
		scanf("%f",&marks[i].eco_marks);
	}
	
	for(i=0;i<5;i++)
	{
		
		printf("Student %d\n",i+1);
		float percentage=(marks[i].ba_marks+marks[i].acc_marks+
		marks[i].eco_marks)/300.0*100;
		
		printf("Percentages Of Student :%f\n",percentage);
	}
	
	return 0;
}