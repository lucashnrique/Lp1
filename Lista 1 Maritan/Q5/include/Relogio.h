#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio{
    private:
        int hora,minuto,segundo;
    public:
        Relogio();
        void setHorario(int hora,int minuto,int segundo);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();
};

#endif // RELOGIO_H
