#include "kerros.h"

Kerros::Kerros()
{
    cout<<"kerros luotu"<<endl;
        as1=new Asunto();
        as2=new Asunto();
        as3=new Asunto();
        as4=new Asunto();
         cout<<"kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
   // delete as1;


}

double Kerros::laskekulutus(double Kulutus)
{
    double Paska=   as1->laskekulutus(Kulutus)
                   +as2->laskekulutus(Kulutus)
                   +as3->laskekulutus(Kulutus)
                   +as4->laskekulutus(Kulutus);
 //cout<<"asunnons kulutus, kun hinta= "<<Kulutus<<" on "<<Paska<<endl;
    return Paska;
}
