#include "asunto.h"
#include <iostream>
using namespace std ;


Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}

void Asunto::maarita(int Asukkaita, int asuntoNeliot)
{
 cout<<"Asunto maaritetty asukkaita= "<<Asukkaita<<" nelioita= "<<asuntoNeliot<<endl;
     asukasMaara=Asukkaita;
    neliot=asuntoNeliot;


}


double Asunto::laskekulutus(double Kulutus)
{

    double asunnonKulutus=Kulutus*neliot*asukasMaara;
 //  cout<<"asunnons kulutus, kun hinta= "<<Kulutus<<" on "<<asunnonKulutus<<endl;
    return asunnonKulutus;
}
