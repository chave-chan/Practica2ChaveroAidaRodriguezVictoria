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

//Metode afegit per comptar les obres d'art del museu
void Museu::getQuantes(){
    int c = 0;
    for(int i=0; i<2; i++){
        node *n = magatzem[i];
        while(n->inf!=NULL){
            c++;
        }
    }
    quantes = c;
}

static bool Museu::hiEs(ObraArt *o, node *primer){
    while(primer != NULL){
        if(primer->inf == o)){
            return true;
        } else {
            primer = primer->seg;
        }
    }
    return false;
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
    if(this->hiEs(p, magatzem)){
        throw "L'obra d'art ja és al museu";
    }
    node *aux = new node();
    aux->inf = p;
    if(magatzem[num]==NULL){
        magatzem[num] = aux;
    } else {
        aux->seg = magatzem[num]->seg;
        magatzem[num]->seg=aux;
    }
}

void Museu::eliminarObraArt(ObraArt *p){
    if(magatzem==NULL){
        throw "L'obra d'art no hi és";
    } else {
        for(int i=0; i<2; i++){
            node *aux = magatzem[i];
            while(aux->seg!=NULL){
                if(aux->seg->inf==p){
                    aux->inf=aux->seg->inf;
                    delete aux;
                }
                aux=aux->seg;
            }
        }
    }
}

bool Museu::operator==(Museu o){
    return !this->operator<o && !this->operator>o;
}

bool Museu::operator<Museu o){
    return o->getQuantes < this->getQuantes;
}

bool Museu::operator>Museu o){
    return o->getQuantes > this->getQuantes;
}

bool Museu::hihaQuadres(int tipus)
{
    int c = 0;
    for(int i=0; i<2; i++){
        node *o = magatzem[i];
        while(o->inf!=NULL && !o->inf->getType.empty()){
            if(o->inf->getType()=="Quadre"){
                if(o->inf->getTipus==tipus){
                    c++;
                }
            }
        }
    }
    if(c>0){
        return true;
    }else{
        return false;
    }
}

void Museu::visualitza(){
    string text;
    int n = 1;
    node *p0 = magatzem[0];
    node *p1 = magatzem[1];

    while(magatzem!=NULL){
        if(p0!=NULL){
            text.append(n + "" + p0->inf->visualitza() + "\n");
            n++;
            p0 = p0->seg;
        }
        if(p1!=NULL){
            text.append(n + "" + p1->inf->visualitza() + "\n");
            n++;
            p1 = p1->seg;
        }
    }
    return text;
}
