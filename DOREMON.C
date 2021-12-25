#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gm,gd,i;
gm=gd=DETECT;
initgraph(&gm,&gd,"..\\bgi");



setcolor(15);
arc(120,220,55,120,100);

line(70,133,70,170);
line(173,135,170,170);
line(70,165,80,165);
arc(120,180,180,0,50);
line(160,170,170,168);


//EYE AND EYEGLASS

arc(95,155,60,160,20);
circle(100,165,20);
setfillstyle(1,0);
floodfill(100,165,15);
circle(106,165,9);
setfillstyle(1,15);
floodfill(106,165,15);
setcolor(BLACK);
circle(108,165,5);
setfillstyle(1,3);
floodfill(108,165,BLACK);

setcolor(15);
arc(145,150,-5,130,18);
circle(140,165,20);
circle(134,165,9);
setfillstyle(1,15);
floodfill(134,165,15);
setcolor(BLACK);
circle(133,165,5);
setfillstyle(1,3);
floodfill(133,165,BLACK);


//nose

setcolor(15);
arc(122,185,200,120,5);


//ears

arc(75,140,120,-130,22);
arc(118,150,10,152,60);
ellipse(120,202,180,0,15,20);
line(105,201,140,201);
arc(70,173,90,278,20);
arc(60,175,350,80,5);

arc(163,175,278,67,25);
arc(179,175,100,-120,5);

// nack and coalor
arc(120,220,190,-10,20);
arc(145,240,30,-260,15);
arc(100,240,90,150,15);
arc(120,260,10,75,20);
line(140,255,159,233);
arc(120,255,120,-180,20);
line(100,255,85,233);



//sirt

setfillstyle(XHATCH_FILL,RED);
arc(95,273,100,150,40);
arc(145,270,10,75,40);
line(60,253,40,320);
arc(60,300,350,20,100);
line(185,263,198,275);
line(195,277,220,265);
arc(189,285,190,-130,30);
arc(182,293,190,278,20);
line(185,313,232,285);
arc(150,299,150,198,70);
arc(240,265,160,-50,20);

//hand
setcolor(15);
ellipse(225,265,20,180,5,25);
line(229,255,255,245);
line(234,262,259,250);
arc(229,262,320,0,30);
line(240,272,260,260);
arc(229,250,300,0,30);
arc(245,245,300,0,10);

line(81,300,75,320);
line(10,320,200,318);

getch();
}














































