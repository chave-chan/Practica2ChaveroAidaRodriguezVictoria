#include "ObraArt.h"

ObraArt::ObraArt(Codi *codi, int tipus, int alçada, int amplada, int fondaria)
{
    //ctor
    if(IsNull(codi) || tipus != 22 || tipus != 222 || alçada <= 0 || amplada <= 0 || fondaria <=0){
        throw "Dades incorrectes";
    } else {
        this->codi = codi;
        this->tipus = tipus;
        this->alçada = alçada;
        this->amplada = amplada;
        this->fondaria = fondaria;
    }
}

ObraArt::ObraArt(int numerica, string alfanumerica, int tipus, int alçada, int amplada, int fondaria)
{
    //ctor
    Codi *codi = new Codi(numerica, alfanumerica);
    if(IsNull(codi)){
        throw "Dades incorrectes";
    } else {
        ObraArt(codi, tipus, alçada, amplada, fondaria);
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

int ObraArt::getAlçada(){
    return this->alçada;
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
    return alçada * amplada * fondaria;
}
