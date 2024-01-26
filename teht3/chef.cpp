#include "chef.h"

Chef::Chef(const string& chefName)
{
    name=chefName;

    cout<<name<<"konstruktori "<<endl;

}
Chef::~Chef(){
    cout<<name<<" destruktori "<<endl;
}
void Chef::makeSalad()
{
    cout<<name<<"makes a Salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<name<<"makes a Soup"<<endl;
}
