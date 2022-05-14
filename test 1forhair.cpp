#include<stdio.h>
int main(){
	float ow,s1,s2,fi,fo,h,s,sum=0,p1,p2,arr,arr1,arr2,co,us,ei;
	int m1,sum1;
char a;
		
//	for(int i=1;i<=a;i++)
//	{
do{

		printf("enter the amount of hair \n");
		scanf("%f",&arr);
		printf("enter the amount of shave \n");
		scanf("%f",&arr1);
		printf("enter the amount of oneanother \n");
		scanf("%f",&arr2);
		printf("enter the percentage of hair :\n");
		scanf("%f",&p1);
		printf("enter the percentage of shave :\n");
		scanf("%f",&p2);
		printf("\nenter the nu. of multiplication of both :");
		scanf("%d",&m1);
		h=(arr*p1)/100;
		printf("\ntotat percentage of %f hair is :\t %f",p1,h);
		s=(arr1*p2)/100;
		printf("\ntotat percentage of %f shave is :\t %f",p2,s);
		
		sum=h+s;
//		sum=sum+arr[i];
//	}
sum1=arr+arr1;
printf("\nhow much in which :: %f",sum1);
	printf("\ntotal amount of company is:: %f",sum);
	co=(sum*60)/100;
	printf("\n60 percentage of company is: %f",co);
	ow=(sum*40)/100;
	printf("\n40 percentage of owner :%f ",ow);
//	printf("\n40 percentage of owner in integer :%d ",ow);
	ei=(co*85)/100;
	printf("\n60 per of 85 per is : %f",ei);
	us=(co*25)/100;
	printf("\n25 per of user is : %f",us);
	s1=us*m1;
	printf("\nmulit of 15 per of user :%f",s1);
	s2=ei*m1;
	fo=(ei*40)/100;
	printf("\nrefers amount 40 per :%f",fo);
//	fi=m1*((ei*40)/100);
//	printf("\n multi of refers a  mount 40 per :%f",fi);
	fi=m1*((ei*55)/100);
	printf("\n multi of refers a  mount 55 per :%f",fi);
	printf("\nmulti of 85 per os company :%f",s2);
	printf("\ndo you want to continue then 1 ");
	scanf("%s",&a);
}while(a=='1');
	
}