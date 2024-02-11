#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;

}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2,100 );
    as2.maarita(2,100);

}

double Katutaso::laskekulutus(double Kulutus)
{
    double noin=as1.laskekulutus(Kulutus)+as2.laskekulutus(Kulutus);
 //   cout<<"asunnons kulutus, kun hinta= "<<Kulutus<<" on "<<noin<<endl;
    return noin;
}
