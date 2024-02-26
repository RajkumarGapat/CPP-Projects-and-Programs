#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
  clrscr();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  //now draw your picture
 // line(x1,y1,x2,y2);
 line(0,100,200,100);//here 0 is x1,100 is y1,200 is x2,100 is y2
 line(0,200,200,200);
 line(0,100,0,200);
 line(200,100,200,200);

  getch();
}