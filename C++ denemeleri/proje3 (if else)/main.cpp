#include <iostream>

using namespace std;

int main()
{

    float ort;

    cout<<"ortalamanizi giriniz:";
    cin>>ort;

    if(ort<50)
    {
        cout<<"kaldiniz :("<<endl;
    }
    else if(50<=ort && ort<65)
    {
        cout<<"orta"<<endl;
    }
    else if(65<=ort && ort<80)
    {
        cout<<"iyi"<<endl;
    }
    else
    {
        cout<<"cok iyi"<<endl;
    }



    return 0;
}
