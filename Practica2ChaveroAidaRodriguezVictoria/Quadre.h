#ifndef QUADRE_H
#define QUADRE_H

class Quadre: public ObraArt{
    public:
        Quadre(Codi codi, int tipus, int alçada, int amplada, int fondaria);
        virtual ~Quadre();

        const static int OLI = 2;
        const static int AQUARELA = 3;
        const static int ACRILICA = 4;

        int getTipus();
        void visualitza();
        string getType();

    protected:

    private:
        int tipus;
};

#endif // QUADRE_H
