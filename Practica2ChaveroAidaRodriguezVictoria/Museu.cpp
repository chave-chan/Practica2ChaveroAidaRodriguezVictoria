#include "Museu.h"

Museu::Museu()
{
    //ctor
    this->magatzem = new node*[2];
     for(int i = 0; i<2; i++){
        this->magatzem[i]=NULL;
     }
}

Museu::Museu(ObraArt *e, bool propietat){
    this->magatzem = Museu().magatzem;
    this->afegirObraArt(e, propietat);
}

Museu::~Museu()
{
    //dtor
}

static bool Museu::hiEs(ObraArt *o, node *primer){
    while(primer != NULL){
        if(primer->inf == o)){
            return true;
        } else {
            primer = primer->seg;
        }
    }
}
static int Museu::onVa(bool propietat){
    if(propietat){
        return 0;
    } else {
        return 1;
    }
}

void Museu::afegirObraArt(ObraArt *p, bool propietat){
    int num = this->onVa(propietat);
    if(this->hiEs(p, magatzem[num])){
        throw "L'obra d'art ja és al museu";
    }
}
