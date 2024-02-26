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
 line(20,100,20,200);
 line(40,100,40,200);
 line(60,100,60,200);
 line(80,100,80,200);
 line(100,100,100,200);
 line(120,100,120,200);
 line(140,100,140,200);
 line(160,100,160,200);
 line(180,100,180,200);
 line(200,100,200,200);

  getch();
}