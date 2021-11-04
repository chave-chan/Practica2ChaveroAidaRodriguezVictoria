#include "Museu.h"

Museu::Museu()
{
    //ctor
    this->magatzem = new node*[2];
     for(int i = 0; i<2; i++){
        this->magatzem[i]=NULL;
     }
}

Museu::~Museu()
{
    //dtor
}
