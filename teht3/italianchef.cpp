#include "italianchef.h"


ItalianChef::ItalianChef(const string& getName,int water,int flour) :Chef(getName)
{
    vesi=water;
    jauho=flour;
    cout<<name<<"konstruktori "<<endl;

}

ItalianChef::~ItalianChef()
{

}

void ItalianChef::makePasta()
 {
    cout<<name<<"makes pasta with special recipe"<<endl;
    cout<<name<<"uses jauhot = "<<jauho<<endl;
    cout<<name<<"uses vesi = "<<vesi<<endl;
}

string ItalianChef::getName()
{
return name;
}

