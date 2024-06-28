#include<stdio.h>
#include<math.h>
int main()
{
	int d,m,y,y1,y2,k,l,n,o,p,q=0,r,s,i;
	int a[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	scanf("%d%d%d",&d,&m,&y);
	y1=y-1;
	y2=y1/100;
	y1=y1%100;
	k=y2%4;
	switch(k)
	{
		case 0:l=0;break;
		case 1:l=5;break;
		case 2:l=3;break;
		case 3:l=1;break;
	}
	if (d>31 || m>12 || d<0 || m<0 || y<0 || (m==2 && d>28 && (y%4!=0||k==0)) || (a[m-1]!=3 && d>30))
	{
		printf("Invalid Date");
	}
	else
	{
		n=y1/4;
		o=y1-n;
		p=n*2+o;
		if ((y%4==0 && k!=0) || (k==0 && y1 ==0))
		{
			a[1]=1;
		}
		for (i=0;i<m-1;i++)
		{
			q+=a[i];
		}
		r=l+p+q+d;
		s=r%7;
		switch (s)
		{
			case 0:printf("Sunday");break;
			case 1:printf("Monday");break;
			case 2:printf("Tueday");break;
			case 3:printf("Wednesday");break;
			case 4:printf("Thursday");break;
			case 5:printf("Friday");break;
			case 6:printf("Saturday");break;
		}
	}
}
