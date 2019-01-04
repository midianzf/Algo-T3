#include <iostream>
using namespace std;
int main(){
    int h,m,j,d;


    cout<<"masukan angkanya: ";
    cin>>d;

    cout<<"\n\t";
    m=d*60;

    cout<<"menit = : "<<m<<"detik";

        cout<<"\n\t";
    j=d*3600;

    cout<<"Jam   = : "<<j<<"detik";

        cout<<"\n\t";
    h=d*86400;

    cout<<"Hari  = : "<<h<<"detik";
    return 0;

}
