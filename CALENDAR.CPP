#define TRUE    1
#define FALSE   0
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};



int inputyear(void)
{
	int year;
printf("Please enter a valid year: ");
	scanf("%d", &year);
	return year;
}

int determinedaycode(int year)
{
	int daycode;

int d1, d2, d3;
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	return daycode;
}

int determineleapyear(int year)
{
	if(year% 4 == FALSE)
	{
		days_in_month[2] = 29;
		printf("\n It is a leap year !!");
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar(int year, int daycode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );
if ( ( day + daycode ) % 7>0 )
				printf("   " );
			else
				printf("\n " );
		}

			daycode = ( daycode + days_in_month[month] ) % 7;
getch();
	}
}

int main(void)
{
	int gd= DETECT ,gm,i,k,l;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	for(l=0;l<=155;l=l+5)
	{
	rectangle(0,155,160,260);
	line(0,170,160,170);
	setcolor(RED);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(160,20,"THE CALENDAR");

setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(20,0+l,"CODED BY:");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,20+l,"AADARSHA CHAPAGAIN");
outtextxy(10,40+l,"AASHISH PAUDEL");
outtextxy(10,60+l,"ANKIT BHATTARAI");
outtextxy(10,80+l,"DAKSHINA PANTHI");

delay(100);
clearviewport();
       }



for(i=60;i<=300;i=i+5)
       {

rectangle(0,155,160,260);
line(0,170,160,170);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(200,400,"LOADING DATA.");
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(160,20,"THE CALENDAR");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(20,160,"CODED BY:");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,180,"AADARSHA CHAPAGAIN");
outtextxy(10,200,"AASHISH PAUDEL");
outtextxy(10,220,"ANKIT BHATTARAI");
outtextxy(10,240,"DAKSHINA PANTHI");

	outtextxy(475,100,"CALENDAR");
	rectangle(390,90,625,325);
	line(390,120,625,120);
	outtextxy(117+i,135,"JANUARY");
	rectangle(100+i,130,205+i,200);
	line(100+i,145,205+i,145);
	line(115+i,145,115+i,200);
	line(130+i,145,130+i,200);
	line(145+i,145,145+i,200);
	line(160+i,145,160+i,200);
	line(175+i,145,175+i,200);
	line(190+i,145,190+i,200);
	line(100+i,145,205+i,145);
	line(100+i,165,205+i,165);
	line(100+i,185,205+i,185);
	delay(100);
clearviewport();
	}

	for(i=60;i<=400;i=i+5)
	{
rectangle(0,155,160,260);
line(0,170,160,170);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(200,400,"LOADING DATA..");
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(160,20,"THE CALENDAR");

setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(20,160,"CODED BY:");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,180,"AADARSHA CHAPAGAIN");
outtextxy(10,200,"AASHISH PAUDEL");
outtextxy(10,220,"ANKIT BHATTARAI");
outtextxy(10,240,"DAKSHINA PANTHI");
	outtextxy(475,100,"CALENDAR");
	rectangle(390,90,625,325);
	line(390,120,625,120);
	outtextxy(417,135,"JANUARY");
	rectangle(400,130,505,200);
	line(415,145,415,200);
	line(430,145,430,200);
	line(445,145,445,200);
	line(460,145,460,200);
	line(475,145,475,200);
	line(490,145,490,200);
	line(400,145,505,145);
	line(400,165,505,165);
	line(400,185,505,185);
outtextxy(117+i,135,"FEBURARY");
rectangle(100+i,130,205+i,200);
	line(100+i,145,205+i,145);
	line(115+i,145,115+i,200);
	line(130+i,145,130+i,200);
	line(145+i,145,145+i,200);
	line(160+i,145,160+i,200);
	line(175+i,145,175+i,200);
	line(190+i,145,190+i,200);
	line(100+i,145,205+i,145);
	line(100+i,165,205+i,165);
	line(100+i,185,205+i,185);
	delay(100);
	clearviewport();
	}

	for(k=60;k<=300;k=k+5)
	{
rectangle(0,155,160,260);
line(0,170,160,170);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(200,400,"LOADING DATA...");
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(160,20,"THE CALENDAR");
setcolor(WHITE);

settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(20,160,"CODED BY:");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,180,"AADARSHA CHAPAGAIN");
outtextxy(10,200,"AASHISH PAUDEL");
outtextxy(10,220,"ANKIT BHATTARAI");
outtextxy(10,240,"DAKSHINA PANTHI");

	outtextxy(475,100,"CALENDAR");
	rectangle(390,90,625,325);
	line(390,120,625,120);
	outtextxy(417,135,"JANUARY");
	rectangle(400,130,505,200);
	line(415,145,415,200);
	line(430,145,430,200);
	line(445,145,445,200);
	line(460,145,460,200);
	line(475,145,475,200);
	line(490,145,490,200);
	line(400,145,505,145);
	line(400,165,505,165);
	line(400,185,505,185);
	outtextxy(530,135,"FEBURARY");
	line(510,145,615,145);
	line(525,145,525,200);
	line(540,145,540,200);
	line(555,145,555,200);
	line(570,145,570,200);
	line(585,145,585,200);
	line(600,145,600,200);
	line(510,145,615,145);
	line(510,165,615,165);
	line(510,185,615,185);
	rectangle(510,130,615,200);

	outtextxy(125+k,225,"MARCH");
	line(105+k,235,105+k,235);
	line(115+k,235,115+k,300);
	line(130+k,235,130+k,300);
	line(145+k,235,145+k,300);
	line(160+k,235,160+k,300);
	line(175+k,235,175+k,300);
	line(190+k,235,190+k,300);
	line(100+k,235,205+k,235);
	line(100+k,255,205+k,255);
	line(100+k,275,205+k,275);
	rectangle(100+k,220,205+k,300);
	delay(100);
	clearviewport();
	}




	for(k=60;k<=400;k=k+5)
{
rectangle(0,155,160,260);
line(0,170,160,170);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(200,400,"LOADING DATA....");
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(160,20,"THE CALENDAR");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(20,160,"CODED BY:");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,180,"AADARSHA CHAPAGAIN");
outtextxy(10,200,"AASHISH PAUDEL");
outtextxy(10,220,"ANKIT BHATTARAI");
outtextxy(10,240,"DAKSHINA PANTHI");

outtextxy(475,100,"CALENDAR");
	rectangle(390,90,625,325);
	line(390,120,625,120);
outtextxy(417,135,"JANUARY");
	rectangle(400,130,505,200);
	line(415,145,415,200);
	line(430,145,430,200);
	line(445,145,445,200);
	line(460,145,460,200);
	line(475,145,475,200);
	line(490,145,490,200);
	line(400,145,505,145);
	line(400,165,505,165);
	line(400,185,505,185);
	outtextxy(530,135,"FEBURARY");
	line(510,145,615,145);
	line(525,145,525,200);
	line(540,145,540,200);
	line(555,145,555,200);
	line(570,145,570,200);
	line(585,145,585,200);
	line(600,145,600,200);
	line(510,145,615,145);
	line(510,165,615,165);
	line(510,185,615,185);
	rectangle(510,130,615,200);
	outtextxy(425,225,"MARCH");
	line(405,235,405,235);
	line(415,235,415,300);
	line(430,235,430,300);
	line(445,235,445,300);
	line(460,235,460,300);
	line(475,235,475,300);
	line(400,255,505,255);
	line(400,275,505,275);
	rectangle(400,220,505,300);
	outtextxy(125+k,225,"APRIL");
	line(105+k,235,105+k,235);
	line(115+k,235,115+k,300);
	line(130+k,235,130+k,300);
	line(145+k,235,145+k,300);
	line(160+k,235,160+k,300);
	line(175+k,235,175+k,300);
	line(190+k,235,190+k,300);
	line(100+k,235,205+k,235);
	line(100+k,255,205+k,255);
	line(100+k,275,205+k,275);
	rectangle(100+k,220,205+k,300);
	delay(100);
	clearviewport();
	}
rectangle(0,155,160,260);
line(0,170,160,170);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(160,370,"LOADING COMPLETED");
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(160,20,"THE CALENDAR");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(20,160,"CODED BY:");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,180,"AADARSHA CHAPAGAIN");
outtextxy(10,200,"AASHISH PAUDEL");
outtextxy(10,220,"ANKIT BHATTARAI");
outtextxy(10,240,"DAKSHINA PANTHI");

outtextxy(475,100,"CALENDAR");
rectangle(390,90,625,325);
line(390,120,625,120);
outtextxy(417,135,"JANUARY");
rectangle(400,130,505,200);
line(415,145,415,200);
line(430,145,430,200);
line(445,145,445,200);
line(460,145,460,200);
line(475,145,475,200);
line(490,145,490,200);
line(400,145,505,145);
line(400,165,505,165);
line(400,185,505,185);
outtextxy(530,135,"FEBURARY");
line(510,145,615,145);
line(525,145,525,200);
line(540,145,540,200);
line(555,145,555,200);
line(570,145,570,200);
line(585,145,585,200);
line(510,145,615,145);
line(510,165,615,165);
line(510,185,615,185);
rectangle(510,130,615,200);
outtextxy(425,225,"MARCH");
line(405,235,405,235);
line(430,235,430,300);
line(445,235,445,300);
line(460,235,460,300);
line(475,235,475,300);
line(490,235,490,300);
line(400,235,505,235);
line(400,255,505,255);
line(400,275,505,275);
rectangle(400,220,505,300);
outtextxy(535,225,"APRIL");
line(510,200,515,200);
line(525,235,525,300);
line(540,235,540,300);
line(555,235,555,300);
line(570,235,570,300);
line(600,235,600,300);
line(510,235,615,235);
line(510,255,615,255);
line(510,275,615,275);
rectangle(510,220,615,300);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(200,400,"PRESS ENTER");
	getch();
	closegraph();
int year, daycode, leapyear;
	clrscr();
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");

	getch();
}



