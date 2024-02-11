#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"


class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
    Kerros Neljas;

};

#endif // KERROSTALO_H
