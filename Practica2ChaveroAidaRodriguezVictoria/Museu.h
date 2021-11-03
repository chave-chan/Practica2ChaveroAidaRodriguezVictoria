#ifndef MUSEU_H
#define MUSEU_H

class Museu
{
    public:
        Museu();
        Museu(ObraArt *e, bool propietat);
        virtual ~Museu();

        static bool hiEs(ObraArt *o, node *primer);

    protected:

    private:
        int quantes;
        node** magatzem;
        struct node{
            ObraArt *inf;
            node* seg;
        };
};

#endif // MUSEU_H
