#include<stdio.h>
int main(){

	int x;
	int a, b, c, d;
	int a_, b_, c_, d_;
	int e;

	printf("enter the password(4 numbers): ");
	scanf("%d", &x);

	a=x/1000;			//1//
	b=(x-a*1000)/100;		//2//
	c=(x-a*1000-b*100)/10;		//3//
	d=(x-a*1000-b*100-c*10)/1;	//4//

	a_=(a+7)%10; //1//
	b_=(b+7)%10; //2//
	c_=(c+7)%10; //3//
	d_=(d+7)%10; //4//

	e=1000*c_+100*d_+10*a_+1*b_; //3421//

	printf("new password is:%e\n", e);

	return 0;
	}
