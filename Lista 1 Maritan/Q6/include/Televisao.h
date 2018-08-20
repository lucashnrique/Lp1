#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    private:
        int volume,canal;
    public:
        Televisao();
        void aumentaVolume();
        void aumentaCanal();
        void diminuiVolume();
        void diminuiCanal();
        void setCanal(int canal);
        int getCanal();
        int getVolume();
};

#endif // TELEVISAO_H
