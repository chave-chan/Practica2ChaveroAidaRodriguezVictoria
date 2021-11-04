#ifndef MUSEU_H
#define MUSEU_H

class Museu
{
    public:
        Museu();
        Museu(ObraArt *e, bool propietat);
        virtual ~Museu();

        void afegirObraArt(ObraArt *p, bool propietat);
        void eliminarObraArt(ObraArt *p);
        bool operator==(Museu o);
        bool operator<(Museu o);
        bool operator>(Museu o);
        bool hihaQuadres(int tipus);
        void visualitza();

    protected:

    private:
        int quantes;
        node** magatzem;
        struct node{
            ObraArt *inf;
            node* seg;
        };

        static bool hiEs(ObraArt *o, node *primer);
        static int onVa(bool propietat);
};

#endif // MUSEU_H
