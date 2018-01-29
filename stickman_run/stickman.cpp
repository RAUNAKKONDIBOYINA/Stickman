#include<iostream>
#include<graphics.h>
#include<conio.h>
#include <stdlib.h>

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>
using namespace std;
int main()
{
    //cout<<"ddd";
   int gd = DETECT,gm;//,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //rectangle(left, top, right, bottom);
   //circle(x, y, radius);
   //bar(left + 300, top, right + 300, bottom);
   //line(left - 10, top + 150, left + 410, top + 150);
   int x=0;
   line(x+20,10,x+40,10);
   line(x+20,30,x+40,30);
   line(x+40,10,x+40,30);
   line(x+20,10,x+20,30);
   line(x+30,30,x+30,90);

    int flag=0;

    int z=1;
    while(z!=0)
    {
        line(x+20,10,x+40,10);
   line(x+20,30,x+40,30);
   line(x+40,10,x+40,30);
   line(x+20,10,x+20,30);
   line(x+30,30,x+30,90);

        if(flag==0)
   {
        line(x+30,60,x+20,75);
        line(x+30,60,x+40,75);

        line(x+30,90,x+20,100);
        line(x+30,90,x+40,100);

        _sleep(100);

        cleardevice();





   }
   else if(flag==1)
    {
        line(x+30,60,x+25,85);
        line(x+30,60,x+35,85);

        line(x+30,90,x+25,110);
        line(x+30,90,x+35,110);

        _sleep(100);

        cleardevice();




    }
    if(flag==0)
        flag=1;
    else
        flag=0;

        x++;
    }







   //ellipse(x, y + 200, 0, 360, 100, 50);
   //outtextxy(left + 100, top + 325, "My First C Graphics Program");

    closegraph();
   //getch();
   _getch;

   return 0;
}
