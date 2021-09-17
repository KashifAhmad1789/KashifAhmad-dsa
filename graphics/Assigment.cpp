#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
int gd = DETECT, gm; initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int x=getmaxx()/2; int y=getmaxy()/2;

int i,j;
int maxx=2*x+1; int maxy=2*y+1;

line(0,0,0,maxy); line(0,0,maxx,0); line(maxx,0,maxx,maxy); line(0,maxy,maxx,maxy); line(0,50,50,0); line(0,maxy-50,50,maxy); line(maxx-50,0,maxx,50);
line(maxx-50,maxy,maxx,maxy-50);

setcolor(YELLOW);
circle(x,y,100);
setfillstyle(SOLID_FILL,YELLOW); floodfill(x,y,YELLOW); setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);

for(i=25;i<30;i++)
{
ellipse(x+30,y-20,45,135,20,i);   	           // 2nd eyebrow
}

for(i=25;i<30;i++)
{
ellipse(x-30,y-20,45,135,20,i);            } 	 // 1st eyebrow
fillellipse(x+30,y-20,10,15);                	 // 2nd eye
fillellipse(x-30,y-20,10,15);

for(i=j=0;i<7,j<12;i++,j++)
{
line(x,y+i,x-i,y+j); 	 	 // 1st eye
line(x-i,y+j,x+i,y+j);
line(x,y+i,x+i,y+j);
}

for(i=15;i<40;i++)
{ 	 	 // Nose
ellipse(x,y+27,205,335,30,i);       } 	 	// mouth
setcolor(WHITE);
settextstyle(5,0,4);
outtextxy(x-85,y+100,"Happy Soul!!");
getch();
closegraph();
}
