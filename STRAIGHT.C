//To draw a straight Line
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
   line(100.100,400,100);
   getch();
   closegraph();
   return 0;

}