#include <iostream>
#define num 5
using namespace std;

class Employ{
    string code;
    string name;
    float BP, DA, TA, HRA, GP, PF, ESI, NP;
public:
    Employ(){
        BP = DA = TA = HRA = GP = PF = ESI = NP = 0;
    }
    void getPayment (){
        cin >>code >>name>>BP;
    }
    void getGp();
    void getNetPay();
    void show();
    ~Employ(){cout<<"\nFinish\n";}
};

void Employ :: getGp(){
    if (BP >= 7500){
        DA = BP * 0.49;
        TA = BP * 0.18;
        HRA = BP * 0.16;
        GP = DA + TA + HRA;
    }
    else if(BP >= 5000){
        DA = BP * 0.47;
        TA = BP * 0.16;
        HRA = BP * 0.15;
        GP = DA + TA + HRA;
    }
}

void Employ :: getNetPay(){
    PF = GP * 0.025;
    ESI = GP * 0.005;
    NP = GP - (PF - ESI);
}

void Employ :: show(){
    cout<<"\n-----------------------------------------------------\n";
    cout<<"Code :-  "<<code<<"  Name:-  "<<name<<endl;
    cout<<"Basic Sallery:- \t"<<BP<<"\nDA:- \t"<<DA<<"\nTA:-\t"<<TA<<"\nHRA:-\t"<<HRA<<"\nGP:-\t"<<GP<<"\nPF:-\t"<<PF<<"\nESI:-\t"<<ESI<<"\nNet on Hand:-\t"<<NP<<endl;
    cout<<"\n--------------------------------------------------------\n";
}

int main(){
    Employ E[num];
    int i;
    for (i=0; i<num; i++)
        E[i].getPayment();
    for(i=0; i<num; i++) E[i].getGp();
    for(i=0; i<num; i++) E[i].getNetPay();
    for(i=0; i<num; i++) E[i].show();
    return 0;
}
