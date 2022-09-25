#include <iostream>

using namespace std;

int main()
{
    int secim;
    float x,y,toplam,cikarma,bolme,carpma;

    cout<<"********* hesap makinesi **********"<<endl;
    cout<<""<<endl;
basla:
    cout<<""<<endl;
    cout<<"1-toplama islemi"<<endl;
    cout<<"2-cikarma islemi"<<endl;
    cout<<"3-carpma islemi"<<endl;
    cout<<"4-bolme islemi"<<endl;
    cout<<"yapmak istediginiz islemi seciniz:";
    cin>>secim;

    cout<<"\n"<<endl;

    switch(secim)
    {
    case 1:
        cout<<"1. sayiyi giriniz: ";
        cin>>x;
        cout<<"2. sayiyi giriniz: ";
        cin>>y;
        toplam=x+y;
        cout<<"toplami: "<<toplam<<endl;
        break;

    case 2:
        cout<<"1. sayiyi giriniz: ";
        cin>>x;
        cout<<"2. sayiyi giriniz: ";
        cin>>y;
        cikarma=x-y;
        cout<<"fark: "<<cikarma<<endl;
        break;

    case 3:
        cout<<"1. sayiyi giriniz: ";
        cin>>x;
        cout<<"2. sayiyi giriniz: ";
        cin>>y;
        carpma=x*y;
        cout<<"carpim: "<<carpma<<endl;
        break;

    case 4:
        cout<<"1. sayiyi giriniz: ";
        cin>>x;
        cout<<"2. sayiyi giriniz: ";
        cin>>y;
        bolme=x/y;
        cout<<"bolum: "<<bolme<<endl;
        break;

    default:
        cout<<"hatali secim yaptiniz"<<endl;
        break;
    }
    goto basla;




    return 0;
}
