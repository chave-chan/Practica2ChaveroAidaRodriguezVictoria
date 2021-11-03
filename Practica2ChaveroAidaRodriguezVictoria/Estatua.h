#ifndef ESTATUA_H
#define ESTATUA_H

class Estatua
{
    public:
        Estatua(Codi *codi, string material, int alçada, int amplada, int fondaria);
        virtual ~Estatua();

        string getTipus();
        void visualitza();
        double volumEmpaquetatge();
        string getType();

    protected:

    private:
        string material;
};

#endif // ESTATUA_H
