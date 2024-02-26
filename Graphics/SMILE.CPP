#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   clrscr();
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   circle(200,200,100);
   circle(160,155,10);
   circle(235,155,10);
   circle(200,200,7);
   arc(200,220,215,320,40);


   getch();

}