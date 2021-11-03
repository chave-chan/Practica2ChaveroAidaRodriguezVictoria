#include "Estatua.h"

Estatua::Estatua(Codi *codi, string material, int alçada, int amplada, int fondaria):ObraArt(Codi codi, int alçada, int amplada, int fondaria)
{
    //ctor
    if(material.empty()){
        throw "Dades incorrectes";
    } else {
        this->material = mateiral;
    }
}

Estatua::~Estatua()
{
    //dtor
}

string Estatua::getTipus(){
    return this->material;
}

void Estatua::visualitza(){
    cout << ObraArt::visualitza << " que és de " << this->material;
}

double Estatua::volumEmpaquetatge(){
    return (ObraArt->volumEmpaquetatge + (ObraArt->volumEmpaquetatge * 0,3));
}

string Estatua::getType(){
    return "Estatua";
}
