#include <iostream>
#include "relogio.h"

using namespace std;

int main()
{
    relogio NovoHorario = relogio();

    int h, m, s;

    cin >> h;
    cin >> m;
    cin >> s;

    NovoHorario.setHorario(h, m, s);
    cout << NovoHorario.getHora() << ":" << NovoHorario.getMinuto() << ":" << NovoHorario.getSegundo() << endl;
     cout << ".............................................................................................." << endl;
    while(1){
    NovoHorario.avancarHorario();
    cout << NovoHorario.getHora() << ":" << NovoHorario.getMinuto() << ":" << NovoHorario.getSegundo() << endl;
    }

    return 0;
}
