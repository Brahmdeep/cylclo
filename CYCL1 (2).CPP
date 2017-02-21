#include<stdlib.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void design1()
{
 setbkcolor(LIGHTRED);
 setcolor(RED);
 settextstyle(0,0,4);
 outtextxy(150,40,"CYCLOTRON");
 delay(500);
 setcolor(MAGENTA);
 settextstyle(0,0,2);
 outtextxy(150,110,"-*** USES ***-");
 setcolor(WHITE);
 settextstyle(0,0,1);
 outtextxy(40,140,"(1). It is used to ACCELRATE a charged particle. ");
 delay(1000);
 setcolor(WHITE);
 settextstyle(0,0,1);
 outtextxy(40,160,"(2). It is used to impart ions into solids and modify their body.");
 delay(1000);
 setcolor(WHITE);
 settextstyle(0,0,1);
 outtextxy(40,180,"(3). It is used in hospitals for diagnosis and treatment.");
 delay(1500);

 setcolor(MAGENTA);
 settextstyle(0,0,2);
 outtextxy(150,200,"-*** PRINCIPLE ***-");
 setcolor(WHITE);
 settextstyle(0,0,1);
 delay(1000);
 outtextxy(40,220,"A positively charged particle can be accelerated to high energy");
  delay(1000);
 outtextxy(40,240,"with the help of an oscillating electric field,by making it cross");
  delay(1000);
 outtextxy(40,260,"the same electric field time and again with the use of a strong");
  delay(1000);
 outtextxy(40,280,"magnetic field.");

 delay(1500);
 setcolor(MAGENTA);
 settextstyle(0,0,2);
 outtextxy(150,300,"-*** CONSTRUCTION ***-");
 setcolor(WHITE);
 settextstyle(0,0,1);
  delay(1000);
 outtextxy(40,320,"It consists of two dees or D-shaped metal chambers D1 and D2.The dees ");
  delay(1000);
 outtextxy(40,340,"are separated by a small distance. The two dees are perpendicular to ");
  delay(1000);
 outtextxy(40,360,"their plane. P is the position where the ion source is placed.The dees ");
  delay(1000);
 outtextxy(40,380,"are maintained to a potential difference whose polarity alternates with ");
  delay(1000);
 outtextxy(40,400,"the same frequency as the circular motion of the particles. The dees are");
  delay(1000);
 outtextxy(40,420,"closed in a steel box placed between the poles of a strong electromagnet.");
  delay(1000);
 outtextxy(40,440,"The magnetic field is perpendicular to the plane of the dees.");
 delay(2000);
 cleardevice();

}
void design2()
{
     int x,y,up,p,dn,n=0,q=0;
   up=1;dn=0;
   x=250;
   y=210;
   p=15;
   int tm=600;
   while(n!=6)
   {
     //magnet design begins
     setbkcolor(RED);
     setcolor(GREEN);
     setfillstyle(1,LIGHTGREEN);
     bar3d(100,50,400,100,20,50);
     setcolor(BLUE);
     settextstyle(11,0,3);
     outtextxy(200,70,"NORTH POLE");
     setcolor(GREEN);
     bar3d(100,380,400,430,20,50);
     setcolor(BLUE);
     settextstyle(11,0,3);
     outtextxy(200,400,"SOUTH POLE");
     //magnet design ends
     //target and oiscillator begins
     setcolor(WHITE);
     rectangle(20,50,80,70);
     settextstyle(11,0,1);
     outtextxy(25,55,"TARGET");
      setcolor(WHITE);
     settextstyle(11,0,2);
     outtextxy(220,130,"OSCILLATOR");
      setcolor(WHITE);
     settextstyle(1,0,2);
     outtextxy(150,300,"D1");

      setcolor(WHITE);
     settextstyle(1,0,2);
     outtextxy(330,300,"D2");
     //target and oscillator ends

     int midx, midy;
     int stangle = 270, endangle = 450;
     int radius = 110;

     midx = getmaxx() / 2;
     midy = getmaxy() / 2;
     arc(midx, midy, stangle, endangle, radius);
     int midx1, midy1;
     int stangle1 = 90, endangle1 = 270;
     int radius1 = 110;

     midx1 = getmaxx() / 3.5;
     midy1 = getmaxy() / 2;
     arc(midx1, midy1, stangle1, endangle1, radius1);


     rectangle(180,115,180,350);
     rectangle(320,115,320,350);
     rectangle(320,115,180,115);

     circle(250,115,12);
     setfillstyle(1,GREEN);
     circle(x,y,5);
     floodfill(x,y,WHITE);
     delay(tm);
     tm-=4;
     setfillstyle(1,RED);
     circle(x,y,5);
     floodfill(x,y,RED);

     setcolor(WHITE);
     settextstyle(11,0,2);
     outtextxy(420,110,"A positive charged particle");
     outtextxy(420,120,"attracted  toward -ve D");
     outtextxy(420,130,"Due to magnetic force it");
     outtextxy(420,140,"follows circular path");


     if(x==250)
     {
      if(q%2==0)
      {
	setcolor(WHITE);
	settextstyle(11,0,4);
	outtextxy(500,250,"POLARITY CHANGES");
	outtextxy(500,260," D1 is +ve");
	outtextxy(500,270," D2 is -ve");
	setcolor(RED);
	settextstyle(11,0,4);
	outtextxy(500,350,"POLARITY CHANGES");
	outtextxy(500,360," D1 is -ve");
	outtextxy(500,370," D2 is +ve");

       }
       else
       {
	setcolor(RED);
	settextstyle(11,0,4);
	outtextxy(500,250,"POLARITY CHANGES");
	outtextxy(500,260," D1 is +ve");
	outtextxy(500,270," D2 is -ve");
	setcolor(WHITE);
	settextstyle(11,0,4);
	outtextxy(500,350,"POLARITY CHANGES");
	outtextxy(500,360," D1 is -ve");
	outtextxy(500,370," D2 is +ve");



       }
	q++;
      }
     if(x==400)
     {
	y=y-p;
	up=0;
	dn=1;
	n++;
	p+=15;
     }
     if(x==100)
     {
       y=y+p;
       up=1;
       dn=0;
       n++;
       p+=15;
     }
     if(up==1)
       x+=15;
     else
       x-=15;

   }

   delay(300);
   setfillstyle(1,GREEN);
   circle(60,110,5);
   delay(300);
   setfillstyle(1,RED);
   circle(50,100,5);
   delay(300);
   setfillstyle(1,GREEN);
   circle(40,90,5);
   delay(300);
   setfillstyle(1,RED);
   circle(40,90,5);
   delay(200);
   setfillstyle(1,GREEN);
   circle(30,80,5);
   delay(200);
   setcolor(BLUE);
   settextstyle(11,0,4);
   outtextxy(450,400,"NOW IT HITS THE TARGET");

   cleardevice();
   }
 void design3()
 {
  setbkcolor(CYAN);
   setcolor(BLUE);
   settextstyle(0,0,4);
   outtextxy(20,100,"THANKS FOR WATCHING");
    setcolor(BLUE);
   settextstyle(0,0,3);
   outtextxy(30,300,"PRESS **ENTER** TO EXIT") ;
  getch();
  }
  void main()
 {
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  design1();
  getch();
   delay(500);
   design2();
  getch();
   delay(500);
   design3();
   closegraph();
   restorecrtmode();
   getch();
  }
