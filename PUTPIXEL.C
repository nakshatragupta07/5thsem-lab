#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm,color;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   putpixel(85,35,GREEN);
   putpixel(30,40,RED);
   putpixel(150,100,YELLOW);
   outtext("hello");
   outtextxy(200,200,"Draw Line") ;
   line(200,200,400,400);
   getch();
   closegraph();


}