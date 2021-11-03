#include "ObraArt.h"

ObraArt::ObraArt(Codi *codi, int tipus, int al�ada, int amplada, int fondaria)
{
    //ctor
    if(IsNull(codi) || tipus != 22 || tipus != 222 || al�ada <= 0 || amplada <= 0 || fondaria <=0){
        throw "Dades incorrectes";
    } else {
        this->codi = codi;
        this->tipus = tipus;
        this->al�ada = al�ada;
        this->amplada = amplada;
        this->fondaria = fondaria;
    }
}

ObraArt::ObraArt(int numerica, string alfanumerica, int tipus, int al�ada, int amplada, int fondaria)
{
    //ctor
    Codi *codi = new Codi(numerica, alfanumerica);
    if(IsNull(codi)){
        throw "Dades incorrectes";
    } else {
        ObraArt(codi, tipus, al�ada, amplada, fondaria);
    }
}

ObraArt::~ObraArt()
{
    //dtor
}

Codi ObraArt::getCodi(){
    return this->codi;
}

int ObraArt::getTipus(){
    return this->tipus;
}

int ObraArt::getAl�ada(){
    return this->al�ada;
}

int ObraArt::getAmplada(){
    return this->amplada;
}

int ObraArt::getFondaria(){
    return this->fondaria;
}

virtual string ObraArt::getType() = 0;

void ObraArt::visualitza(){
    cout << "Codi de l'obra: " << codi->visualitza << " de tipus " << this->tipus;
}

bool ObraArt::operator==(ObraArt *obraArt){
    return this->codi==obraArt->codi;
}

double ObraArt::volumEmpaquetatge(){
    return al�ada * amplada * fondaria;
}
