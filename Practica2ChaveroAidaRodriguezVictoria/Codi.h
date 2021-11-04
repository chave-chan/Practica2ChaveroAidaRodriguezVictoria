#ifndef CODI_H
#define CODI_H

class Codi
{
    public:
        Codi(int numerica, string alfanumerica);
        virtual ~Codi();

        bool operator == (Codi codi);
        void visualitza();

    protected:

    private:
        int numerica;
        string alfanumerica;
};

#endif // CODI_H
