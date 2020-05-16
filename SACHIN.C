












//HEADER FILES USED

#include<stdio.h>
#include<conio.h>
#include<GRAPHICS.H>
#include<dos.h>


//FUNCTIONS USED

void projectwork1();
void projectwork2();
void projectwork3();
void closing();

void main()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"c:\\TC\\bgi"); //Initializing Graphics Mode

	projectwork1();
	projectwork2();
	projectwork3();
	closing();

	getch();
	closegraph();
	restorecrtmode();
}

void projectwork1()
{
	setbkcolor(RED);
	settextstyle(7,0,4);
	setcolor(YELLOW);
	outtextxy(2,80,"  *********** SPECIAL FLOWER **********");
	outtextxy(2,110,"               **** TO ****");
	circle(320,240,15);        //FLOWER
	ellipse(320,240,90,89,15,70);
	circle(288,234,18);
	circle(288,254,18);
	circle(264,240,18);
	circle(354,234,18);
	circle(354,254,18);
	circle(378,240,18);

	outtextxy(268,245,"*");
	outtextxy(268,227,"*");
	outtextxy(268,209,"*");

	outtextxy(364,245,"*");
	outtextxy(364,227,"*");
	outtextxy(364,209,"*");

	outtextxy(298,245,"*");
	outtextxy(298,227,"*");
	outtextxy(298,209,"*");

	outtextxy(330,245,"*");
	outtextxy(330,227,"*");
	outtextxy(330,209,"*");

	outtextxy(242,225,"*");
	outtextxy(242,232,"*");

	outtextxy(392,225,"*");
	outtextxy(392,232,"*");

	outtextxy(315,151,"*");
	outtextxy(315,298,"*");

	outtextxy(2,350,"   ********** SPECIAL PERSON *********");


	delay(10000);
	cleardevice();
}

void projectwork2()
{
	setbkcolor(RED);
	settextstyle(7,0,4);
	setcolor(WHITE);
	outtextxy(2,100, "    **** HI ****");
	setcolor(YELLOW);
	delay(1500);
	outtextxy(2,150," ***** I JUST WANT TO SAY THAT *****");
	outtextxy(2,200,"          ***** GITHUB *****");
	outtextxy(2,250,"*** YOU ARE SPECIAL PERSON FOR ***");
	outtextxy(2,300,"            ***** ME *****");
	delay(3500);
	setcolor(WHITE);
	outtextxy(20,360,"                      **** AND ****");
	delay(10000);
	cleardevice();
}

void projectwork3()
{
	setbkcolor(RED);
	settextstyle(7,0,4);
	setcolor(YELLOW);
	outtextxy(2,100,"            ************************");
	outtextxy(2,140," I THINK I'M ON THE EDGE");
	outtextxy(4,200,"     OF SOMETHING NEW WITH YOU ");
	outtextxy(6,250,"              **** GITHUB ****");
	delay(2000);

	settextstyle(7,0,5);
	setcolor(WHITE);
	outtextxy(8,330,"              by");
	outtextxy(110,380,"   Madara Uchiha");
	delay(10000);
	cleardevice();
}

void closing()
{
	setbkcolor(RED);
	setcolor(YELLOW);
	settextstyle(7,HORIZ_DIR,4);
	outtextxy(2,120,"******* I AM NOT GOOD IN CODEING *****");
	outtextxy(2,180,"            **** BUT ****");
	outtextxy(2,240,"    ***** I TRY IT AND I HOPE ******");
	outtextxy(2,300,"      ******* YOU LIKE IT ******");
	delay(1000);
	setcolor(WHITE);
	outtextxy(120,390,"            !! THANK YOU !!");
}
