#include <iostream>

using namespace std;

int main()
{
    //klavyeden al�nan kenarlar ile dikd�rtgenin alan�n� ve �evresini yazan program

    int uzunkenar,kisakenar,cevre,alan;

    cout<<"uzun kenari giriniz:";
    cin>>uzunkenar;
    cout<<"kisa kenari giriniz:";
    cin>>kisakenar;

    cout<<""<<endl;
    cevre=(uzunkenar+kisakenar)*2;
    alan=uzunkenar*kisakenar;

    cout<<"dikdortgenin cevresi:"<<cevre<<endl;
    cout<<"dikdortgenin alani:"<<alan<<endl;

    return 0;
}
