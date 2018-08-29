#ifndef RELOGIO_H
#define RELOGIO_H


class relogio
{
    public:
        relogio();
        void setHorario(int hour, int minute, int second);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();

    private:
        int hora, minuto, segundo;
};

#endif // RELOGIO_H
