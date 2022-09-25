#include <iostream>

using namespace std;

int main()
{

    int x;

    cout<<"hangi gun:";
    cin>>x;

    switch(x)
    {
    case 1:
        cout<<"pazartesi"<<endl;
        break;

    case 2:
        cout<<"sali"<<endl;
        break;

    case 3:
        cout<<"carsamba"<<endl;
        break;

    case 4:
        cout<<"persembe"<<endl;
        break;

    case 5:
        cout<<"cuma"<<endl;
        break;

    case 6:
        cout<<"cumartesi"<<endl;
        break;

    case 7:
        cout<<"pazar"<<endl;
        break;

    default:
        cout<<"hatali sayi girdiniz"<<endl;
        break;
    }

    return 0;
}
