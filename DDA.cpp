#include <graphics.h>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main (){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    float x1, x2, y1, y2, x, y, dy, dx, m;
    cin>>x1>>x2>>y1>>y2;
    /*dx = abs(x2 - x1); dy = abs(y2 - y1);
    putpixel(x1,y1,3);
    x = x1; y = y1;
    if (dx == 0){
        while ( y != y2){
            putpixel(x, y ++, 3);
        }
    }
    else {
        m = dy / dx;
        cout<<m<<"\n\n\n";
        if ( m < 1 ){
            for (int i = 1; i < (int) dx; i ++){
                x ++;
                y = y + m;
                putpixel((int)x, (int)y, 3);
            }
        }
        else {
            for (int i = 1; i < (int)dy; i ++){
                x = x + 1 / m;
                y ++;
                putpixel((int)x, (int)y, 3);
            }
        }
    }*/

    line (x1, y1, x2, y2);
    getch ();
    closegraph();
    return 0;
}
