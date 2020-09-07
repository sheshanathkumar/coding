#include <iostream>
#include <cstdlib>
using namespace std;

class Length{
    int feet;
    int inch;
public:
    void get(int ifeet, int iinch){
        feet = ifeet;
        inch = iinch;
    }
    void show(){
        cout<<feet <<" " <<inch<<endl;
    }
    Length operator +(Length L){
        Length temp;
        temp.feet = feet + L.feet;
        temp.inch = inch + L.inch;
        if(temp.inch >=12){
            temp.feet = temp.feet + (temp.inch / 12);
            temp.inch = temp.inch;
        }
        return temp;
    }
    Length operator - (Length L){
        Length temp ;
        if( inch < L.inch){
            feet--;
            inch = inch+ 12;
        }
        temp.feet = feet - L.feet;
        temp.inch = inch - L.inch;
        return temp;
    }

    int operator > (Length l){
        int temp1, temp2;
        temp1 = (feet * 12) + inch;
        temp2 = l.feet * 12 + l.inch;
        return (temp1 > temp2 ) ? 1 : 0;
    }

    int operator == (Length l){
        int temp1, temp2;
        temp1 = (feet * 12) + inch;
        temp2 = l.feet * 12 + l.inch;
        return (temp1 == temp2 ) ? 1 : 0;
    }
};

int main(){
    Length l1 , l2, l3;
    l1.get(5 ,4);
    l2.get(4,7);
    l3 = l1 + l2;
    l1.show();
    l2.show();
    l3.show();
    l3 = l1 - l2;
    l3.show();
    (l1 == l2) ?cout<<"True" : cout<<"False";
    return 0;
}
