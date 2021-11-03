#ifndef OBRAART_H
#define OBRAART_H

class ObraArt
{
    public:
        ObraArt(Codi *codi, int tipus, int alcada, int amplada, int fondaria);
        ObraArt(int numerica, string alfanumerica, int tipus, int alcada, int amplada, int fondaria);
        virtual ~ObraArt();

        const static int QUADRE = 22;
        const static int ESTATUA = 222;

        Codi getCodi();
        int getTipus();
        int getAlcada();
        int getAmplada();
        int getFondaria();
        virtual string getType();
        void visualitza();
        bool operator==(ObraArt *obraArt);
        double volumEmpaquetatge();

    protected:

    private:
        Codi *codi;
        int tipus;
        int alcada;
        int amplada;
        int fondaria;
};

#endif // OBRAART_H
