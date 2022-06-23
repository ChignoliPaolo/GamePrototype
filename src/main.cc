#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include "campo.hh"
using namespace std;


int main(){
	personaggio me;
	frutta frut1;
	campo a;

	while(a.menu()!=-1){
		frut1.genera();
		if(me.muovi()==0)
	 		 a.win();
	}
	return 0;
}
