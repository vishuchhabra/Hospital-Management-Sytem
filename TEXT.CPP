//HEADERS FILES**************************************************
    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<dos.h>
    #include<stdlib.h>
    #include<stdio.h>
    #include<ctype.h>
    #include<fstream.h>
    #include<process.h>
    #include<string.h>
    #include<iomanip.h>
    //FUNCTION PART**********************************************
    void   exot();
    void page1()
	{
	    clrscr();
	    cleardevice();
	    setbkcolor(0);
	    setcolor(4);
	    rectangle(210,200,450,290);
	    rectangle(275,130,385,240);
	    rectangle(275,200,385,350);
	    setfillstyle(1,4);
	    floodfill(300,250,4);
	    floodfill(220,201,4);
	    floodfill(276,131,4);
	    floodfill(276,201,4);
	    floodfill(276,301,4);
	    floodfill(449,285,4);
	    settextstyle(10,0,2);
	    setcolor(15);
	    outtextxy(5,40,"POST GRADUATE INSTITUTE(PGI),ABH.");
	    settextstyle(0,0,2);
	    setcolor(15);
	    outtextxy(455,200, "An apple a");
	    outtextxy(455,240,"day keeps");
	    outtextxy(455,280,"the doctor");
	    outtextxy(455,320,"away.");
	    outtextxy(2,200,"Prevention is");
	    outtextxy(10,240,"better than");
	    outtextxy(30,280,"cure.");
	    setcolor(0);
// outtextxy(220,210,"SAVE EARTH");
// outtextxy(280,250,"SAVE LIFE");

	    setcolor(15);
	    line (320-150,420-13,320+150,420-13);
	    line (320-150,420+12,320+150,420+12);
	    line (320-150,420-13,320-150,420+12);
	    line (320+150,420+12,320+150,420-13);
	    int s=6,w;
	for (int x1=171,x2=171,y1=408,y2=431,y=1,S=0;x1<470;x1++,x2++,y++,S++)
		{
			settextstyle(8,0,2);
			setcolor(15);
			line (x1,y1,x2,y2);
			w=(x1-169)/3;
			for (int i=34; i<=78; i++)
			{
				gotoxy(i,23) ;
				cout <<" " ;
			}
			setcolor(RED+BLINK);
			outtextxy(310,440,"LOADING......");
			if (x2>270) s=2; if (x2>370) s=2;
			if (x2==320) delay(2); else
			delay(s);
		}
			delay(2);
			for (int i=27; i<=78; i++)
			{
				gotoxy(i,23) ;
				cout <<" " ;
			}
			settextstyle(2,0,5);
			outtextxy(435,460,"PRESS ANY KEY TO CONTINUE.... ");
			getch();
	}


void page2()		//Function definition #1
{
clrscr();
cleardevice();
setbkcolor(0);
settextstyle(10,0,2);
outtextxy(150,20,"INFORMATION ABOUT PGI:-");
line(20,80,620,80);
line(20,90,620,90);
setcolor(4);
settextstyle(0,0,2);
outtextxy(15,120,"TYPE->");
outtextxy(15,180,"MOTTO->");
outtextxy(15,240,"ESTABLISHED->");
outtextxy(15,300,"DEAN->");
outtextxy(15,360,"DIRECTOR->");
setcolor(15);
outtextxy(50,140,"INSTITUTE OF NATIONAL IMPORTANCE");
outtextxy(50,200,"SERVICE TO COMMUNITY");
outtextxy(250,260,"1962");
outtextxy(150,320,"SUBHASH VERMA");
outtextxy(150,380,"JAGAT RAM");
settextstyle(2,0,5);
setcolor(4);
outtextxy(435,460,"PRESS ANY KEY TO CONTINUE........");
getch();
}
void page3()
{
cleardevice();
setcolor(15);
setfillstyle(1,15);
rectangle(40,0,596,476);
floodfill(81,1,15);
setcolor(1);
setfillstyle(1,1);
circle(318,238,220);
floodfill(318,238,1);
setcolor(0);
settextstyle(4,0,4);
outtextxy(150,180,"REPRESNENTED BY :-");
setcolor(15);
settextstyle(10,0,4);
outtextxy(200,50,"HOSPITAL");
settextstyle(10,0,2);
outtextxy(140,120,"MANAGEMENT SYSTEM");
settextstyle(8,0,1);
outtextxy(120 ,240,":-VISHU CHHABRA :- ABHISHEK PANDEY");
outtextxy(120,280, ":-AMMAR HUSEN   :-NANDAN KUMAR");
outtextxy(130,320," :-DEVVRAT    :-RAMESH KUMAR RAM");
settextstyle(0,0,2);
setcolor(1);
outtextxy(400,450,"PRESS ENTER.....");
getch();
}
void page4()
{
clrscr();
cleardevice();
setbkcolor(1);
setcolor(15);
settextstyle(10,0,1);
outtextxy(20,40,"ENTER THE PASSWORD FOR MANAGEMENT ");
char c[6];
char a[6]={"vishu"};
gotoxy(10,10);
cout<<"1.PRESS ONE FOR PASSWORD/IF PASS. IS INCORRECT IT WILL AUT. EXIT"<<endl;
gotoxy(10,12);
cout<<"2.PRESS TWO FOR EXIT FROM THE SOFTWARE";
int p,q,y;
gotoxy(10,14);
cin>>p;
 //   while(1)
   // {
    switch(p)
    {
    case 1:
    gotoxy(20,18);
    cout<<"ENTER THE FIVE CHARACTER PASSWORD"<<endl;
    gotoxy(20,19);
    gets(c);

    gotoxy(20,19);
    cout<<"************";
    q=strcmp(a,c);
    gotoxy(25,21);
    if(q==0)
    {
    cout<<"password is correct press enter to continue"<<endl;


}
    else
    {
    gotoxy(25,21);
    sound(28);
    delay(1000);
    nosound();
  cout<<"password is incorrect !!!! try again"<<endl;
  exit(0);
    }
    break;
    case 2:
    exot();
    break;
    default :
    gotoxy(25,21);
    cout<<"INVALID CHIOCE!!!!TRY AGAIN";
    getch();
    exit(0);
	     }//  }


     for(int i=25;i<100;i++)
     {
     delay(10);
     cout<<"<";
     }
   // getch();
     cout<<endl;
     system("pause");
     }
    void page5()
    {
     clrscr();
     cleardevice();
     setbkcolor(0);
     setcolor(2);
     setfillstyle(1,2);
     rectangle(40,80,600,320);
     floodfill(200,200,2);
     setcolor(1);
     settextstyle(0,0,3);
     outtextxy(200,20,"CONTENTS:-");
     setcolor(15);
     line(200,50,420,50);
     line(200,55,420,55);
     settextstyle(0,0,2);
     outtextxy(50,100,"1.STUDENT'S INFORMATION");
     outtextxy(50,140,"2.PATIENT'S INFORMATION");
     outtextxy(50,180,"3.FACILITIES IN HOSPITAL");
     outtextxy(50,220,"4.COLLABORATION \\ ALLIANCE");
     outtextxy(50,260,"5.EXIT");
     setcolor(1);
     line (320-150,420-13,320+150,420-13);
     line (320-150,420+12,320+150,420+12);
     line (320-150,420-13,320-150,420+12);
     line (320+150,420+12,320+150,420-13);
     int s=2,w;
     for (int x1=171,x2=171,y1=408,y2=431,y=1,S=0;x1<470;x1++,x2++,y++,S++)
     {
     settextstyle(8,0,2);
     setcolor(1);
     line (x1,y1,x2,y2);
     w=(x1-169)/3;
     for (int i=34; i<=78; i++)
	 {
		gotoxy(i,23) ;
		cout <<" " ;
	 }
     setcolor(15+BLINK);
     outtextxy(310,440,"LOADING......");
     if (x2>270) s=1; if (x2>370) s=1;
     if (x2==320) delay(1); else
     delay(s);
     }
	delay(1);
	for (int i=27; i<=78; i++)
	{
		gotoxy(i,23) ;
		cout <<" " ;
	}
     settextstyle(2,0,5);
     outtextxy(435,460,"PRESS ANY KEY TO CONTINUE.... ");

     getch();

 }
  page6()
 {
  clrscr();
  cleardevice();
  setbkcolor(0);
  setcolor(2);
  setfillstyle(4,2);
  fillellipse(320,240,80,60);
  fillellipse(150,100,80,60);
  fillellipse(490,100,80,60);
  fillellipse(150,370,80,60);
  fillellipse(490,370,80,60);
  setcolor(15);
  settextstyle(0,0,2);
  outtextxy(280,236,"5.EXIT");
  outtextxy(75,96,"1.STUDENTS");
  outtextxy(415,96,"2.PATIENTS");
  outtextxy(72,365,"3.FACILITY");
  outtextxy(410,365,"4.ALLIANCE");

//  line(300,240,150,120);
 // line(300,240,150,350);
//  line(340,240,510,100);
 // line(340,230,510,370);

  return 0;
  }
  void doctor()
  {
  cleardevice();
  setcolor(1);
  settextstyle(0,0,2);
  setfillstyle(2,1)   ;
  fillellipse(100,120,80,45);
  fillellipse(319,120,80,45);
  fillellipse(538,120,80,45);
  fillellipse(200,335,80,45);
  fillellipse(440,335,80,45);
  floodfill(100,120,1);
  floodfill(319,120,1);
  floodfill(540,120,1);
  floodfill(200,335,1);
  floodfill(440,335,1);
	//floodfill(538,335,4);
  settextstyle(0,0,2);
  setcolor(15);
  settextstyle(1,0,1);
  outtextxy(32,110,"1.REGISTRATION");
  outtextxy(270,90,"2.UPDATE ");
  outtextxy(275,125,"ACCOUNT ");
  outtextxy(500,90,"3.SEARCH");
  outtextxy(500,125,"ACCOUNT");
  outtextxy(155,300,"4.DELETE");
  outtextxy(160,340,"ACCOUNT");
  outtextxy(400,320,"5.EXIT");
  settextstyle(0,0,2);
  outtextxy(1,13,"ENTER THE CHOICE:-");
  gotoxy(38,2);
}
void exot()
{
      system("cls");
      cleardevice();
      setbkcolor(4);
      textcolor(15 +128);
      textbackground(2);
      gotoxy(25,2);
      cprintf("\n---------- CREDITS ----------- ");cout<<endl;
      gotoxy(15,6);
      textbackground(0);
      textcolor(15);
      cprintf("1.");
      gotoxy(17,6);
      textcolor(2 );
      textbackground(0);
      cprintf("I READILY ACKNOWLEDGE MY INDEBTEDNESS TO MY MENTOR");
      gotoxy(17,8);
      cprintf("MS.NEELAM GOEL FOR HER SUPPORT,DEDICATION AND HONEST");
      gotoxy(17,10);
      cprintf("EFFORTS THAT HAS GIVEN US IMMENSE HELP IN COMPLETING ");
      gotoxy(17,12);
      cprintf("THE PROJECT.");
      gotoxy(15,15);
      textbackground(0);
      textcolor(2);
      cprintf("2.");
      textcolor(15);
      gotoxy(17,15);
      cprintf("ALSO THANKFUL TO ALL THE TEAM MEMBERS.");
      gotoxy(40,20);

		    //	setbkcolor(12);
      textcolor(15 +128);
      textbackground(2);
      cprintf("PRESS ENTER TO CONTINUE.........");
      gotoxy(80,25);
      getch();
      exit(0);
   }
void alliance()
{
cleardevice();
setcolor(2);
setfillstyle(1,2);
rectangle(30,100,640,400);
floodfill(40,101,2);
setcolor(1);
settextstyle(0,0,3);
outtextxy(45,24, "ALLIANCE DEPARTMENTS:- ");
setcolor(15);
line(45,55,550,55);
line(45,57,550,57);
settextstyle(0,0,2);
setcolor(15);
outtextxy(40,120,"1.CARE COORDINATION  2.ADMINISTRATION");
outtextxy(40,160,"3.COMMUNITY HEALTH AND WELL BEING");
outtextxy(40,200,"4.BUSINESS OPERATIONS ");
outtextxy(40,240,"5.QUALITY AND UTILIZATION MANAGEMENTS");
outtextxy(40,280,"6.ACCESS AND INFORMATION CENTER");
outtextxy(40,320,"7.IT SECTOR");
outtextxy(40,360,"8.COMMUNITY AND MEMBER ENGAGEMENT");
setcolor(1);
outtextxy(170,420,"PRESS ENTER TO CONTINUE.......");
getch();
}

void teacher()
{
cleardevice();
setcolor(4);
settextstyle(0,0,2);
setfillstyle(2,4)   ;
fillellipse(100,120,80,45);
fillellipse(319,120,80,45);
fillellipse(538,120,80,45);
fillellipse(100,335,80,45);
fillellipse(319,335,80,45);
fillellipse(538,335,80,45);
floodfill(100,120,4);
floodfill(319,120,4);
floodfill(540,120,4);
floodfill(100,335,4);
floodfill(319,335,4);





floodfill(538,335,4);
settextstyle(0,0,2);
setcolor(15);
settextstyle(1,0,1);
outtextxy(32,110,"1.REGISTRATION");
outtextxy(270,90,"2.SEARCH ");
outtextxy(275,125,"ACCOUNT ");
outtextxy(500,90,"3.UPDATE");
outtextxy(500,125,"ACCOUNT");
outtextxy(40,300,"4.DOCTOR");
outtextxy(40,340,"ALLOTMENT");
outtextxy(270,310,"5.DELETE");
outtextxy(275,335,"ACCOUNT");
outtextxy(515,320,"6.EXIT");
settextstyle(0,0,2);
 outtextxy(1,13,"ENTER THE CHOICE:-");
}
void defolt()
{
  cleardevice();
  setcolor(1);
  settextstyle(0,0,2);
  setfillstyle(1,1);
  circle(320,240,220);
  floodfill(200,200,1);
  setcolor(15);
  setfillstyle(1,15);
  circle(320,240,100);
  floodfill(320,240,15);
  setcolor(0);
  setcolor(15);
  outtextxy(180,80,"INVALID CHOICE!!!!");
  setcolor(1);
  outtextxy(240,250,"TRY AGAIN!!");
  setcolor(15);
  settextstyle(0,0,1);
  outtextxy(420,450,"PRESS ENTER TO CONTINUE......");
  getch();
 }
void page10()
{
  cleardevice();
  setcolor(1);
  setfillstyle(1,1);
  fillellipse(320,270,300,160);
  setcolor(1);
  settextstyle(0,0,3);
  outtextxy(1,50,"OUR FACILITIES TOWARDS YOU:-");
  setcolor(15);
  line(1,80,640,80);
  line(1,82,640,82);
  settextstyle(0,0,2);
  outtextxy(150,150,"OUR RARE DEVICES,LIKE:-");
  outtextxy(135,190,"1.3-D MAMMOGRAPHY MACHINES");
  outtextxy(135,220,"2.ROBOT SURGICAL MACHINES");
  outtextxy(135,250,"3.M R I");
  outtextxy(135,280,"4.CAT SCANNERS");
  outtextxy(135,310,"5.PARTICLE ACCELERATORS");
  outtextxy(140,350,"CONTACT NO.- 6283032071");
  setcolor(1);
  outtextxy(410,450,"PRESS ENTER......");
  getch();
  cleardevice();
  setcolor(2);
  setfillstyle(1,2);
  fillellipse(320,270,300,160);
  setcolor(2);
  settextstyle(0,0,3);
  outtextxy(1,50,"OUR FACILITIES TOWARDS YOU:-");
  setcolor(15);
  line(1,80,640,80);
  line(1,82,640,82);
  settextstyle(0,0,2);
  outtextxy(150,150,"OUR OTHER FACILITIES:-");
  outtextxy(135,190,"1.BLOOD BANK,LABORATORIES");
  outtextxy(135,220,"CONTACT NO.9464027483");
  outtextxy(135,250,"2.24*7 ICU AND AMBULANCES");
  outtextxy(135,280,"CONTACT NO. 9463884625");
  outtextxy(75,310,"NOTE-IN CASE EMERGRNCY LIKE FIRE");
  outtextxy(140,350,"CONTACT NO.- 9413156487");
  outtextxy(140,380,"ALSO CALL ON 100,101");
  setcolor(2);
  outtextxy(410,450,"PRESS ENTER......");
  getch();
}
//CLASSES PART ********************************************
class patient
{
private:

    char  uid[20];
    char dob[10];
    char father[15];
    char bg[2];
    char sex[1];
    char mob[10];
    char add[40];
    char rel[15];
    char die[20];
    char rf;
    unsigned long int bill;
    public:
    void adddata()
	{
	cout<<"REGISTRATION ID (name):";   gets(uid);//cin.getline(uid,19);
	fstream fout;
	fout.open(uid,ios::out);
	fout<<"REGISTRATION ID (name):"<<uid<<endl;
	cout<<"DATE OF BIRTH(dd\\mm\\yyyy):";cin>>dob;
	fout<<"DATE OF BIRTH(dd\mm\yyyy):"<<dob<<endl;
	cout<<"FATHER NAME :";gets(father);
	fout<<"FATHER NAME :"<<father<<endl;
	cout<<"BLOOD GROUP :";cin>>bg;
	fout<<"BLOOD GROUP :"<<bg<<endl;
	cout<<"SEX(m\\f):";cin>>sex;
	fout<<"SEX(m\\f):"<<sex<<endl;
	cout<<"MOBILE NO:";cin>>mob;
	fout<<"MOBILE NO:"<<mob<<endl;
	cout<<"ADDRESS:";gets(add);
	fout<<"ADDRESS:"<<add<<endl;
	cout<<"RELATIVE:";gets(rel);
	fout<<"RELATIVE:"<<rel<<endl;
	cout<<"HAD PATIENT SUBMITTED 500 REG. FESS(y\\n):";
	cin>>rf;
	if(rf=='y')
	{
	cout<<"BALANCE:0"<<endl;
	fout<<"BALANCE:0"<<endl;
	}
	else
	{
	cout<<"BALANCE=500 "<<endl;
	fout<<"BALANCE=500 "<<endl;
	}
	fout<<"***********************************"<<endl;
	cout<<"REGISTRATION COMPLETED......."<<endl;
	cout<<endl;
	for(int u=0;u<30;u++)
	{
	cout<<"<";
	delay(20);
	}
	gotoxy(42,22);
	cout<<"PRESS ENTER TO CONTINUE.......";
	getch();
	fout.close();
	}
	void search()
	{
	clrscr();
	ifstream fin;
	cout<<"ENTER THE REGISTRATION ID:";
	gets(uid);
	FILE *file;
	if(file =fopen(uid,"r"))
	{
	char ch;
	int y;
	fin.open(uid,ios::app);
	ch=fin.get();
	while(!fin.eof())
	{
	cout<<ch;
	ch=fin.get();
	}
	//cout<<"<";
	//for(int u=0;u<50;u++)
	//{
	//cout<<"<";
	//delay(20);
	//}
	fin.close();
}
else
cout<<"PLEASE ENTER THE VALID USER ID!!!!!"<<endl;
//for(int u=0;u<50;u++)
//{
//cout<<"*";
//delay(20);
//}
gotoxy(42,22);
cout<<"PRESS ENTER TO CONTINUE.......";
getch();
}
void remov()
{
int y;
cout<<"ENTER THE REGISTRATION ID:";
gets(uid);
y=remove(uid);
if(y== 0)
cout<<"ACCOUNT DELETED SUCCESSFULLY...."<<endl;
else
cout<<"NO ANY RECORD FOUND RELATED TO THIS REGISTRATION ID"<<endl;
cout<<endl;
for(int u=0;u<30;u++)
{
cout<<"<<";
delay(20);
}
gotoxy(42,22);
cout<<"PRESS ENTER TO CONTINUE.......";
getch();
}
void doctor()
{
cout<<"ENTER THE REGISTRATION ID:";
gets(uid);
FILE *file;
if(file =fopen(uid,"r"))
    {
 clrscr();
 cout<<"PLEASE SELECT THE DOCTOR WITH THAT YOU WANT TO TAKE APPOINTMENT:"<<endl;
 cout<<"1.AUDIOLOGIST       2.ALLERGIST       3.CARDIOLOGIST"<<endl;
 cout<<"4.DENTIST           5.IMMUNOLOGIST    6.MEDICAL GENETICIST"<<endl;
 cout<<"7.NEUROLOGIST       8.ONCOLOGIST      9.ENT SPECIALIST"<<endl;
 cout<<"10.PLASTIC SURGEON  11.SURGEON        12.PEDIATRICIAN"<<endl;
 cout<<"ENTER THE NUMBER:";
 int u;
 cin>>u;
 ofstream fout;
 fout.open(uid,ios::app);
 switch(u)
 {
 case 1:
 cout<<"ALLOTED DOCTOR IS DR. HARSH CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. HARSH CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 2:
 cout<<"ALLOTED DOCTOR IS DR. VISHU CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. VISHU CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 3:
 cout<<"ALLOTED DOCTOR IS DR. DILPREET CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. DILPREET CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 4:
 cout<<"ALLOTED DOCTOR IS DR. PAWAN CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. PAWAN CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 5:
 cout<<"ALLOTED DOCTOR IS DR. RAM CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. RAM CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 6:
 cout<<"ALLOTED DOCTOR IS DR. HARSHDEEP CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. HARSHDEEP CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 7:
 cout<<"ALLOTED DOCTOR IS DR. LOVE CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. LOVE CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 8:
 cout<<"ALLOTED DOCTOR IS DR. RAKESH CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. RAKESH CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 9:
 cout<<"ALLOTED DOCTOR IS DR. SEMMA CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. SEMMMA CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 10:
 cout<<"ALLOTED DOCTOR IS DR. REETU CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. REETU CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 case 11:
 cout<<"ALLOTED DOCTOR IS DR. DEV CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. DEV CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break; case 12:
 cout<<"ALLOTED DOCTOR IS DR. KAWAL CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 fout<<"UPDATES:-"<<endl;
 fout<<"ALLOTED DOCTOR IS DR. KAWAL CHHABRA"<<endl<<"TIMING 9AM -5PM"<<endl;
 break;
 default :
 cout<<"PLEASE CHOOSE VALID NUMBER"<<endl;
 }
//  else
 // cout<<"PLEASE ENTER THE VALID USER ID"<<endl;
fout<<"***********************************"<<endl;
fout.close();
}
else
cout<<"PLEASE ENTER THE VALID USER ID"<<endl;
cout<<endl;
for(int u=0;u<30;u++)
{
cout<<"<";
delay(20);
}
gotoxy(42,22);
cout<<"PRESS ENTER TO CONTINUE.......";
getch();
}
void update()
{
 clrscr();
 cout<<"ENTER THE REGISTRATION ID:";
 gets(uid);
 FILE *file;
 if(file =fopen(uid,"r"))
   {
   cout<<"ENTER DISEASE:";
   gets(add);
   ofstream fout;
   fout.open(uid,ios::app);
   fout<<"ANOTHER UPDATES:"<<endl;
   fout<<"DISEASE:"<<add<<endl;
   cout<<"ENTER THE PENDING BILL AMMOUNT OF HOSPITAL:";
   cin>>bill;
   fout<<"PENDING BILL AMMOUNT OF HOSPITAL:"<<bill<<endl;
   cout<<"ENTER THE ROOM NO. OF HOSPITAL IF PATIENT IS ADMITTED:";
   gets(die);
   fout<<"HOSPITAL ROOM ALLOTED:"<<die<<endl;
   fout<<"***********************************"<<endl;
   fout.close();
   }
      else
      cout<<"PLEASE ENTER THE VALID USER ID...."<<endl;
      cout<<endl;
      for(int u=0;u<30;u++)
	{
	cout<<"<<";
	delay(20);
	}
	gotoxy(42,22);
	cout<<"PRESS ENTER TO CONTINUE.......";
	getch();
	}
 };
//SECOND CLASS ************************************
class student
{
private:

    char  uid[20];
    char dob[10];
    char father[15];
    char bg[2];
    char sex[1];
    char mob[10];
    char add[40];
    char marks[15];
    char branch[20];
    char rf;
    char f[30];
    unsigned long int fee;

public:
void adddata()
{
cout<<"REGISTRATION ID (name):";   gets(uid);//cin.getline(uid,19);
fstream fout;
fout.open(uid,ios::out);
fout<<"REGISTRATION ID (name):"<<uid<<endl;
cout<<"DATE OF BIRTH(dd\\mm\\yyyy):";cin>>dob;
fout<<"DATE OF BIRTH(dd\mm\yyyy):"<<dob<<endl;
cout<<"FATHER NAME :";gets(father);
fout<<"FATHER NAME :"<<father<<endl;
cout<<"BLOOD GROUP :";cin>>bg;
fout<<"BLOOD GROUP :"<<bg<<endl;
cout<<"SEX(m\\f):";cin>>sex;
fout<<"SEX(m\\f):"<<sex<<endl;
cout<<"MOBILE NO:";cin>>mob;
fout<<"MOBILE NO:"<<mob<<endl;
cout<<"ADDRESS:";gets(add);
fout<<"ADDRESS:"<<add<<endl;
cout<<"+2 MARKS:";gets(marks);
fout<<"+2 MARKS:"<<marks<<endl;
cout<<"BRANCH:";gets(branch);
fout<<"BRANCH:"<<branch<<endl;
cout<<"HAD STUDENT  SUBMITTED TUITION FESS  (y\\n):";
cin>>rf;
if(rf=='y')
{
cout<<"BALANCE:0"<<endl;
fout<<"BALANCE:0"<<endl;
}
else
{
cout<<"BALANCE=50000 "<<endl;
fout<<"BALANCE=50000 "<<endl;
}
fout<<"***********************************"<<endl;
cout<<"REGISTRATION COMPLETED......."<<endl;
cout<<endl;
for(int u=0;u<30;u++)
{
cout<<"<";
delay(20);
}
gotoxy(42,22);
cout<<"PRESS ENTER TO CONTINUE.......";
getch();
fout.close();
}
void update()
 {
cout<<"ENTER THE REGISTRATION ID:";
gets(uid);
FILE *file;
if(file =fopen(uid,"r"))                 {

clrscr();
cout<<"PLEASE SELECT THE OPTION FOR UPDATES:"<<endl;
cout<<"1.UPDATES AFTER REGISTRATION"<<endl;
cout<<"2.UPDATES AFTER COMPLETING THE COURSE"<<endl;
int k;
cin>>k;
switch(k)
{
   case 1:
   clrscr();
   cout<<"ENTER ANY EXTRA WORK IN FIELD OF MEDICAL:";
   gets(add);
   ofstream fout;
   fout.open(uid,ios::app);
   fout<<"UPDATES:"<<endl;
   fout<<"EXTRA WORK IN FIELD OF MEDICAL:"<<add<<endl;
   cout<<"ENTER THE PENDING TUITION FEE OF INSTITUTE:";
   cin>>fee;
   fout<<"PENDING TUITION FEE AMMOUNT :"<<fee<<endl;
   cout<<"ENTER THE HOSTEL ROOM NO. IF ALLOTTED (otherwise nill):";
   gets(branch);
   fout<<"HOSTEL ROOM ALLOTED:"<<branch<<endl;
   fout<<"***********************************"<<endl;
   fout.close();
   cout<<"UPDATED SUCCESSFULLY !!!!!"<<endl;
   break;
   case 2:
   clrscr();
   cout<<"ENTER YOUR SPECIALIZATION :";
   gets(f);
   ofstream j;
   j.open(uid,ios::app);
   j<<"ANOTHER UPDATE:"<<endl<<"SPECIALIZATION:"<<f<<endl;
   j<<"***********************************"<<endl;
   j.close();
   cout<<"UPDATED SUCCESSFULLY !!!!!"<<endl;
   break;
   default:
   cout<<"PLEASE CHOOSE VALID NUMBER......"<<endl;
      }
}
else
cout<<"PLEASE ENTER THE VALID USER ID...... "<<endl;
for(int u=0;u<30;u++)
{
cout<<"<<";
delay(20);
}
gotoxy(42,22);
cout<<"PRESS ENTER TO CONTINUE.......";
getch();
}
};
//MAIN PART START***************************************************
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
page1();
page2();
page3();
page4();
page5();
while(1)
{
page6();
outtextxy(1,13,"ENTER THE CHOICE:-");
gotoxy(38,2);
int x;
cin>>x;
setcolor(2);
settextstyle(0,0,1);
outtextxy(420,450,"PRESS ENTER TO CONTINUE.....");
getch();
cleardevice();
switch(x)
{
  case 1:
  doctor();
  int p;
  cin>>p;
  settextstyle(0,0,1);
  outtextxy(430,440,"PRESS ENTER TO CONTINUE......");
  getch();
  cleardevice();
  clrscr();
  setbkcolor(4);
  textcolor(15);
  patient o;
  student h;
  switch(p)
    {
    case 1:
    h.adddata();
    break;
    case 2:
    h.update();
    break;
    case 3:
    o.search();
    break;
    case 4:
    o.remov();
    break;
    case 5:
    break;
    default:
    defolt();
    break;
    }
    break;
    case 2:
	teacher();
	int x;
	gotoxy(38,2);
	cin>>x;
	settextstyle(0,0,1);
	outtextxy(430,440,"PRESS ENTER TO CONTINUE......");
	getch();
	cleardevice();
	clrscr();
	setbkcolor(2);
	textcolor(15);
	patient z;
	switch(x)
	{
	case 1:
	z.adddata();
	break;
	case 2:
	z.search();
	break;
	
	case 3:
	z.update();
	break;
	case 4:
	z.doctor();
	break;
	case 5:
	z.remov();
	break;
	case 6:
	break;
	default:
	defolt();
	}
	break;
  case 3:
  page10();
  break;
  case 4:
  alliance();
  break;
  case 5:
  exot();
  break;
  default :
  defolt();
}
// cleardevice();
 }
  closegraph();
}
//END PROGRAM*****************************************