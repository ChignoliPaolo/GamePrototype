#include "campo.hh"
#include "getch.hh"
#include "kbhit.hh"
#include "color.hh"
#include "gotoxy.hh"
#include "selection.hh"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
using namespace std;

int punteggio=0;
void campo::stampa1(){
	system("clear");
	cout<<"                     PUSH {W,A,S,D} TO BEGIN                     "<<endl;
	cout<<endl;
	cout<<"                            SCORE:                                "<<endl;
	cout<<" _________________________________________________________________"<<endl;
	cout<<"|                                                                 |"<<endl;
	cout<<"|                           		    			  |"<<endl;
	cout<<"|							          |"<<endl;
	cout<<"|                  						  |"<<endl;
	cout<<"|                					          |"<<endl;
	cout<<"|                  						  |"<<endl;
	cout<<"|                					          |"<<endl;
	cout<<"|     								  |"<<endl;
	cout<<"|           					                  |"<<endl; 
	cout<<"|           					                  |"<<endl;            
	cout<<"|             						    	  |"<<endl;
	cout<<"|                           		    			  |"<<endl;
	cout<<"|							          |"<<endl;
	cout<<"|                  						  |"<<endl;
	cout<<"|                					          |"<<endl;
	cout<<"|     								  |"<<endl;
	cout<<"|           					                  |"<<endl;
	cout<<"|                           		    			  |"<<endl;
	cout<<"|                           		    			  |"<<endl;
	cout<<"|							          |"<<endl;
	cout<<"|     								  |"<<endl;
	cout<<"|           					                  |"<<endl;  
	cout<<" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
}


int campo::menu(){
	int scelta,i=0;
	int m[4]={1,0,0,0};
	system("clear");
	gotoxy(0,0);
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<FBLU("                       PLAY		  	    ")<<endl<<endl;
	cout<<FWHT("                       INFO                     ")<<endl<<endl;
	cout<<FWHT("                    CLASSIFICA                     ")<<endl<<endl;
	cout<<FWHT("                       EXIT                     ")<<endl<<endl;    
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	int a;
	do{
	do{scelta=getch();}
		while(scelta!=119 && scelta!=115 && scelta!=27 && scelta!=10);

	if(scelta==119){
		if(i>0) i=i-1;
	  	else i=3;
	}
	if(scelta==115){ 
		if(i<3) i=i+1;
	  	else i=0;
	}
	if(i==0){system("clear");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<FBLU("                       PLAY		  	    ")<<endl<<endl;
	cout<<FWHT("                       INFO                     ")<<endl<<endl;
	cout<<FWHT("                    CLASSIFICA                     ")<<endl<<endl;
	cout<<FWHT("                       EXIT                     ")<<endl<<endl;    
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	}
	if(i==1){system("clear");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<FWHT("                       PLAY		  	    ")<<endl<<endl;
	cout<<FBLU("                       INFO                     ")<<endl<<endl;
	cout<<FWHT("                    CLASSIFICA                     ")<<endl<<endl;
	cout<<FWHT("                       EXIT                     ")<<endl<<endl;    
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	}
	if(i==2){system("clear");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<FWHT("                       PLAY		  	    ")<<endl<<endl;
	cout<<FWHT("                       INFO                     ")<<endl<<endl;
	cout<<FBLU("                    CLASSIFICA                     ")<<endl<<endl;
	cout<<FWHT("                       EXIT                     ")<<endl<<endl;    
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	}
	if(i==3){system("clear");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<FWHT("                       PLAY		  	    ")<<endl<<endl;
	cout<<FWHT("                       INFO                     ")<<endl<<endl;
	cout<<FWHT("                    CLASSIFICA                     ")<<endl<<endl;
	cout<<FBLU("                       EXIT                     ")<<endl<<endl;    
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	}

	    }while(scelta!=10); 
	if(i==0) this->menu1(); 
	if(i==1) this->info();
	if(i==2) this->classifics();		
	if(i==3) return -1;
}

void campo::menu1(){
int scelta,i=0;
int m[3]={1,0,0};
system("clear");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<FBLU("                      MODE 1	   		")<<endl<<endl;
cout<<FWHT("                      MODE 2                        ")<<endl<<endl;
cout<<FWHT("                      MODE 3                        ")<<endl<<endl<<endl;
cout<<FWHT("                  [ESC] TO MENU'                     ")<<endl<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl; 

do{
scelta=getch();
if(scelta==119){if(i>0) i=i-1;
  else i=2;
}
if(scelta==115){ if(i<2) i=i+1;
  else i=0;
}
if(i==0){system("clear");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<FBLU("                      MODE 1	   		")<<endl<<endl;
cout<<FWHT("                      MODE 2                        ")<<endl<<endl;
cout<<FWHT("                      MODE 3                        ")<<endl<<endl<<endl;
cout<<FWHT("                  [ESC] TO MENU'                     ")<<endl<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;}
if(i==1){system("clear");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<FWHT("                      MODE 1	   		")<<endl<<endl;
cout<<FBLU("                      MODE 2                        ")<<endl<<endl;
cout<<FWHT("                      MODE 3                        ")<<endl<<endl<<endl;
cout<<FWHT("                  [ESC] TO MENU'                     ")<<endl<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;}
if(i==2){system("clear");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<FWHT("                      MODE 1	   		")<<endl<<endl;
cout<<FWHT("                      MODE 2                        ")<<endl<<endl;
cout<<FBLU("                      MODE 3                        ")<<endl<<endl<<endl;
cout<<FWHT("                  [ESC] TO MENU'                     ")<<endl<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;}
}while(scelta!=10 && scelta!=27);
if(scelta==27) this->menu();
if(i==0 && scelta==10)
this->stampa1();
        		
}


void campo::info(){
system("clear");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<FBLU("                       ☻****ESCAPE****☻	   		")<<endl<<endl;
cout<<FWHT("                      PLAY WITH {W,A,S,D}	   		")<<endl<<endl;
cout<<FBLU("                          CREATED BY                        ")<<endl<<endl;
cout<<FWHT("                        PAOLO CHIGNOLI                      ")<<endl<<endl;
cout<<FBLU("                         [ESC] TO MENU'                     ")<<endl<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
int a;
do{  a=getch(); 
}while(a!=27);
if(a==27) this->menu();         		
}


clock_t start;
double duration;
int posFrutta[20][2];
double classifica[10];


void frutta::genera(){
int x,y;
srand (time(NULL));
for(int i=0;i<21;i++){
x=rand()%62+3;
y=rand()%19+6;
posFrutta[i][0]=x;
posFrutta[i][1]=y;
gotoxy(x,y);
cout<<"*";}
}

int personaggio::muovi(){
srand(time(NULL));
campo esc;
int x,y;
x=rand()%60+3;
y=rand()%19+6;
gotoxy(x,y);
cout<<"☻";
usleep(1000);
int scelta;
int cont=0;
scelta=getch();


start = clock();

while(scelta!=27){

while(scelta==115){
	gotoxy(x,y);
	cout<<" ";
	y++;
	gotoxy(x,y);
	cout<<"☻";
	usleep(80000);
	if(kbhit())
	scelta=getch();
	gotoxy(x+1,y);
	cout<<" ";
	gotoxy(x-1,y);
	cout<<" ";
	for(int i=0;i<20;i++)
	    {if((posFrutta[i][0]==x || posFrutta[i][0]==x+1 || posFrutta[i][0]==x-1) && posFrutta[i][1]==y)
		{posFrutta[i][0]=100;posFrutta[i][1]=100;
		gotoxy(x,y);cout<<" ";
		punteggio=punteggio+100;gotoxy(35,3);cout<<punteggio;cont++;}}
	if(y==26)
	 {y=5;cout<<" ";}
}
while(scelta==119){
	gotoxy(x,y);
	cout<<" ";
	y--;
	gotoxy(x,y);
	cout<<"☻";
	usleep(80000);
	if(kbhit())
	scelta=getch();
	gotoxy(x+1,y);
	cout<<" ";
	gotoxy(x-1,y);
	cout<<" ";
	for(int i=0;i<20;i++)
	    {if((posFrutta[i][0]==x || posFrutta[i][0]==x+1 || posFrutta[i][0]==x-1) && posFrutta[i][1]==y)
		{posFrutta[i][0]=100;posFrutta[i][1]=100;
gotoxy(x,y);cout<<" ";
		punteggio=punteggio+100;gotoxy(35,3);cout<<punteggio;cont++;}}
	if(y==5)
	 {y=26;cout<<" ";}
}

while(scelta==97){
	gotoxy(x,y);
	cout<<" ";
	x--;
	gotoxy(x,y);
	cout<<"☻";
	usleep(40000);
	if(kbhit())
	scelta=getch();
	gotoxy(x-1,y);
	cout<<" ";
	gotoxy(x+1,y);
	cout<<" ";
	for(int i=0;i<20;i++)
	    {if(posFrutta[i][0]==x && posFrutta[i][1]==y)
		{posFrutta[i][0]=100;posFrutta[i][1]=100;
gotoxy(x,y);cout<<" ";
		punteggio=punteggio+100;gotoxy(35,3);cout<<punteggio;cont++;}}
	if(x==2)
	 {gotoxy(x-1,y);
	 x=65;cout<<"| ";}
}

while(scelta==100){
	gotoxy(x,y);
	cout<<" ";
	x++;
	gotoxy(x,y);
	cout<<"☻";
	usleep(40000);
	if(kbhit())
	scelta=getch();
	gotoxy(x-1,y);
	cout<<" ";
	gotoxy(x+1,y);
	cout<<" ";
	for(int i=0;i<20;i++)
	    {if(posFrutta[i][0]==x && posFrutta[i][1]==y)
		{posFrutta[i][0]=100;posFrutta[i][1]=100;
gotoxy(x,y);cout<<" ";
		punteggio=punteggio+100;gotoxy(35,3);cout<<punteggio;cont++;}}
	if(x==65)
	 {gotoxy(x,y);
	 x=2;cout<<" ";}

}

if(cont>=20) break;
}
system("clear");
if(cont>=20)
{punteggio=0;
duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
return 0;}
else
{punteggio=0;
return 1;}
}

int conta=1;

void campo::win(){
gotoxy(0,0);
system("clear");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<FBLU("                     VICTORY!                         ")<<endl<<endl<<endl;
cout<<FWHT("                   TIME: "<<duration*1000<<"            ")<<endl<<endl<<endl;
cout<<FWHT("                   [ESC] TO MENU'                     ")<<endl<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
int a;
classifica[conta]=duration*1000;
conta++;
do{  a=getch(); 
}while(a!=27);
if(a==27) this->menu();         		

}

void campo::classifics(){
system("clear");
int j=0;
selectionsort(classifica,conta);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
for(j=1;j<conta;j++)
{
cout<<FBLU("                  "<<j<<") "<<classifica[j]<<"     	   		")<<endl<<endl;
}
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
int a;
do{  a=getch(); 
}while(a!=27);
if(a==27) this->menu();         		
}




















