#ifndef ASUNTO_H
#define ASUNTO_H


class Asunto
{
public:
    Asunto();
    int neliot;
    int asukasMaara;
    void maarita(int Asukasmaara, int asuntoNeliot);
    double laskekulutus(double Kulutus);
};

#endif // ASUNTO_H
