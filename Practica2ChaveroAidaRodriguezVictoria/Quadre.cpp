#include "Quadre.h"

Quadre::Quadre(Codi codi, int tipus, int al�ada, int amplada, int fondaria):ObraArt(Codi codi, int al�ada, int amplada, int fondaria)
{
    //ctor
    if(tipus!=Quadre::OLI&&tipus!=Quadre::AQUARELA&&tipus!=Quadre::ACRILICA){
        throw "Dades incorrectes";
    } else  {
        this->tipus = tipus;
    }
}

Quadre::~Quadre()
{
    //dtor
}

int Quadre::getTipus() {
    return this->tipus;
}

void Quadre::visualitza() {
    cout << ObraArt::visualitza << " que �s de tipus " << this->tipus;
}

string Quadre::getType(){
    return "Quadre";
}
