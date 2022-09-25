#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int secim;
    float sayi1,sayi2,toplam,cikarma,carpma,bolme,karesi,kupu,karekok;

    cout<<"****************************"<<endl;
    cout<<"      matematik menusu      "<<endl;
    cout<<"****************************"<<endl<<endl;
basla:
    cout<<""<<endl;
    cout<<"1-toplama islemi"<<endl;
    cout<<"2-cikarma islemi"<<endl;
    cout<<"3-carpma islemi"<<endl;
    cout<<"4-bolme islemi"<<endl;
    cout<<"5-karesini alma islemi"<<endl;
    cout<<"6-kupunu alma islemi"<<endl;
    cout<<"7-karekokunu alma islemi"<<endl;
    cout<<"8-mutlak degerini alma islemi"<<endl;
    cout<<"9-uslu sayi hesaplama islemi"<<endl;
    cout<<"yapmak istediginiz islemi seciniz: ";
    cin>>secim;

    cout<<""<<endl<<endl;


    switch(secim)
    {
    case 1:
        cout<<"sayi1'i giriniz: ";
        cin>>sayi1;
        cout<<"sayi2'i giriniz: ";
        cin>>sayi2;
        toplam=sayi1+sayi2;
        cout<<"toplami: "<<toplam<<endl;
        break;

    case 2:
        cout<<"sayi1'i giriniz: ";
        cin>>sayi1;
        cout<<"sayi2'i giriniz: ";
        cin>>sayi2;
        cikarma=sayi1-sayi2;
        cout<<"fark: "<<cikarma<<endl;
        break;

    case 3:
        cout<<"sayi1'i giriniz: ";
        cin>>sayi1;
        cout<<"sayi2'i giriniz: ";
        cin>>sayi2;
        carpma=sayi1*sayi2;
        cout<<"carpim: "<<carpma<<endl;
        break;

    case 4:
        cout<<"sayi1'i giriniz: ";
        cin>>sayi1;
        cout<<"sayi2'i giriniz: ";
        cin>>sayi2;
        bolme=sayi1/sayi2;
        cout<<"bolum: "<<bolme<<endl;
        break;

    case 5:
        cout<<"karesini almak istediðin sayiyi giriniz: ";
        cin>>sayi1;
        karesi=sayi1*sayi1;
        cout<<"karesi: "<<karesi<<endl;
        break;

    case 6:
        cout<<"kupunu almak istediginiz sayiyi giriniz: ";
        cin>>sayi1;
        kupu=sayi1*sayi1*sayi1;
        cout<<"kupu: "<<kupu<<endl;
        break;

    case 7:
        cout<<"karekokunu almak istediginiz sayiyi giriniz: "<<"";
        cin>>karekok;
        cout<<"karekoku: "<< sqrt(karekok) <<endl;
        break;

    case 8:
        cout<<"mutlak degerini almak istediginiz sayiyi giriniz: ";
        cin>>sayi1;
        cout<<"mutlak degeri: "<<fabs(sayi1)<<endl;
        break;

    case 9:
        cout<<"taban sayisini almak istediginiz sayiyi giriniz: ";
        cin>>sayi1;
        cout<<"us sayisinialmak istediginiz sayiyi giriniz: ";
        cin>>sayi2;
        cout<<"uslu sayi degeri: "<<pow(sayi1,sayi2)<<endl;
        break;

    default:
        cout<<"hatali secim yaptiniz"<<endl;
        break;

    }
    goto basla;


    return 0;
}
