#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--){
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	int d1,d2,d3,d4,h1,h2;
	d1 = sqrt((pow((x1-x2),2)) + pow((y1-y2),2));
	d2 = sqrt((pow((x2-x4),2)) + pow((y2-y4),2));
	d3 = sqrt((pow((x4-x3),2)) + pow((y4-y3),2));
	d4 = sqrt((pow((x3-x1),2)) + pow((y3-y3),2));
	h1 = sqrt((pow((x1-x4),2)) + pow((y1-y4),2));
	h2 = sqrt((pow((x2-x3),2)) + pow((y2-y3),2));
	if(d1 == d2 && d1== d3 && d1 == d4 && h1 == h2) cout<<"1";
	else cout<<"0";
    }
	return 0;
}
