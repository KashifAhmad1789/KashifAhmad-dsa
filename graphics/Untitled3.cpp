#include <graphics.h>
#include <dos.h>
int main()
{
int gd = DETECT,gm;
   int x ,y;
   initgraph(&gd, &gm, "");

    /*

    x = getmaxx()/2;
    y = getmaxy()/2;

   outtextxy(240, 50, "Concentric Circles");

   setcolor(RED);
   circle(x, y, 30);
   setcolor(GREEN);
   circle(x, y, 50);
   setcolor(YELLOW);
   circle(x, y, 70);
   setcolor(BLUE);
   circle(x, y, 90);

   */
   outtextxy(240, 50, "Concentric Circles");
   for(int i=10;i<=200;i++){
    setcolor(i);
    circle(200,200,i);
    delay(50);
   }

   getch();
   closegraph();
   return 0;
}


