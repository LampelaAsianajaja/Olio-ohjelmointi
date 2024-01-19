#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
  int game(int maxnum);
int main()
{
    int maxGuesses = game(0);
    cout << "arvauksiesi maara on: "<< maxGuesses << endl;
    return 0;
}

int game(int maxnum){
       cout << "anna maximi numero jonka sisalla arvotaan" << endl;
    int num;
    int quess=0;
    int mount=0;
    cin >>num;
    srand(time(0));

    int arvo =rand()% num;
    while ( arvo!=quess) {

    cout << "arvaa mika numero" << endl;
    cin >> quess;
    if (quess==arvo){
        mount+=1;
        cout<< "oikein"<<endl;
    }
    else if (quess<arvo){
        cout<< "vaarin arvo on suurempi"<<endl;
        mount+=1;
    }
    else if (quess>arvo){
        cout <<"vaarin arvo on pienempi"<< endl;
        mount+=1;
    }
      }
    maxnum+=mount;
    return maxnum;
}
