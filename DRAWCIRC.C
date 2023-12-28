#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm;

   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   circle(100,100,50);
   rectangle(100,338,263,453);
   line(50,40,190,40);
   arc(120,200,180,0,30);
   ellipse(120,350,0,360,30,20);

   getch();
   closegraph();



}