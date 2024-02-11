#ifndef KERROS_H
#define KERROS_H
#include "Asunto.h"
#include "katutaso.h"
#include <iostream>
using namespace std;
class Kerros : public Katutaso {
public:

    Kerros();
    virtual void maaritaAsunnot();
   double laskekulutus(double Kulutus);

private:


    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
};

#endif // KERROS_H
