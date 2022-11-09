#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	int x , y , num , sum=0 ;
	cout<<"Enter a number to check wheater it is armstrong or not ";
	cin>>num;
	x= num;
	while (num!=0)
	{
		y=num%10;
		sum=sum+(y*y*y);
		num=num/10;
	}
	if(x==sum)
		cout<<"Armstrong Number"<<endl;
	else
		cout<<"Not Armstrong Number"<<endl;
	getch();
	return 0;
}
