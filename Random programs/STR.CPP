#include<stdio.h>
#include<conio.h>
struct Calci
{
    int a,b;
    void input()
    {
	printf("Enter Two Values = ");
	scanf("%d %d",&a,&b);
    }
    void output()
    {
	printf("Value of a = %d \n",a);
	printf("Value of b = %d \n",b);

    }

};
void main()
{   clrscr();
    Calci c1;
    printf("\n ********** C1 Member is Active Now *********** \n");
    c1.input();
    c1.output();

    Calci c2;
    printf("\n ********** C2 Member is Active Now *********** \n");
    c2.input();
    c2.output();

    Calci c3;
    printf("\n ********** C3 Member is Active Now *********** \n");
    c3.a=90;
    c3.b=50;
    c3.output();

    Calci c4;
    printf("\n ********** C4 Member is Active Now *********** \n");
    printf("Enter Two Numbers = ");
    scanf("%d%d",&c4.a,&c4.b);
    c4.output();
    getch();
}