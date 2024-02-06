#ifndef KATUTASO_H
#define KATUTASO_H
#include "Asunto.h"
#include <iostream>
using namespace std;

class Katutaso
{
public:
    Katutaso();

    void maaritaAsunnot();
    double laskekulutus(double Kulutus);


private:
    Asunto as1;
    Asunto as2;

};

#endif // KATUTASO_H
