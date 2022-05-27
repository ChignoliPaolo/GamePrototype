#ifndef _gotoxy_h_
#define _gotoxy_h_
#include <iostream>
using namespace std;

void gotoxy(int x,int y) {
    printf("%c[%d;%df", 0x1b, y, x);
}

#endif
