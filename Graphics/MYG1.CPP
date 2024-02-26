#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
  clrscr();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\TURBOC3\BGI");

  getch();
}