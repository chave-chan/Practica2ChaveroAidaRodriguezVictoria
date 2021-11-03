#include "Quadre.h"

Quadre::Quadre(Codi codi, int tipus, int alçada, int amplada, int fondaria):ObraArt(Codi codi, int alçada, int amplada, int fondaria)
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
    cout << ObraArt::visualitza << " que és de tipus " << this->tipus;
}

string Quadre::getType(){
    return "Quadre";
}
