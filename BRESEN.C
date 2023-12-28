#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
 int gd=DETECT ,gm;
 int x1=100,y1=100,x2=150,y2=150,x3=50,y3=50,tx,ty,sx,sy;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  clrscr();
  printf("Enter the tx and ty for translation  and sx and sy for Scaling :-  ");
  scanf("%d%d",&tx,&ty);
  line(x1,y1,x2,y2);
  line(x1,y1,x3,y3);
  line(x2,y2,x3,y3);
  delay(50);
  printf("Triangele after Translation :- \n");
  line((x1+tx),(y1+ty),(x2+tx),(y2+ty));
  line((x1+tx),(y1+ty),(x3+tx),(y3+ty));
  line((x2+tx),(y2+ty),(x2+tx),(y2+ty));

  delay(50);
  printf(" Triangele after scaling :- \n");
  line((x1+tx)*sx,(y1+ty)*sy,(x2+tx)*sx,(y2+ty)*sy);
  line((x1+tx)*sx,(y1+ty)*sy,(x3+tx)*sx,(y3+ty)*sy);
  line((x2+tx)*sx,(y2+ty)*sy,(x2+tx)*sx,(y2+ty)*sy);


 getch();
 closegraph();
}