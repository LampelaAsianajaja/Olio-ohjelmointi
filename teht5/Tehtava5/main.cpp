#include <iostream>
//#include "asunto.h"
//#include "kerros.h"
#include "kerrostalo.h"
//#include "katutaso.h"

using namespace std;

int main()
{
/*
    Katutaso objectA;
 Kerros objectB;
    objectA.maaritaAsunnot();
 objectB.maaritaAsunnot();
 double Kerroskulutus=objectB.laskekulutus(1);
 double katukulutus=objectA.laskekulutus(1);

 cout<< "katutason ja perityn kerroksen kulutus on,kun hinta on="<<1<<" on "<<
     Kerroskulutus+katukulutus<<endl;
*/
    //cout<<"maaritetaan koko kerrostalon kaikkiasunnot"<<endl;
Kerrostalo *objectKerros1= new Kerrostalo;
objectKerros1->laskeKulutus(1);
delete objectKerros1;
    return 0;
}
