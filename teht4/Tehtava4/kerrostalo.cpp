#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"maaritetaan koko kerrostalon kaikkiasunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    Neljas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double Kulutus)
{
 double Kerrostalonkulutus=eka.laskekulutus(Kulutus)
      +toka.laskekulutus(Kulutus)
      +kolmas.laskekulutus(Kulutus)
      +Neljas.laskekulutus(Kulutus);
    cout<<"kerrostalon kulutus ="<<Kerrostalonkulutus<<endl;
 return Kerrostalonkulutus;
}

