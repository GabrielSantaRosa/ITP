#include <iostream>

using namespace std;

void CalculadoDeIntervalo(int HoraInicio, int MinutoInicio, int HoraFim, int MinutoFim)
{
    int IntervaloM;
    int IntervaloH;
    int transformarEmMinutoInicio = HoraInicio * 60 + MinutoInicio;
    int transformarEmMinutoFim = HoraFim * 60 + MinutoFim;

    if(transformarEmMinutoFim > transformarEmMinutoInicio)
    {
        IntervaloM = transformarEmMinutoFim - transformarEmMinutoInicio;
        IntervaloH = IntervaloM / 60;
        IntervaloM = IntervaloM % 60;
        cout << "O JOGO DUROU "<< IntervaloH << " HORA(S) E " << IntervaloM << " MINUTO(S)" ;
    }
    else if( transformarEmMinutoInicio > transformarEmMinutoFim)
    {
        IntervaloM = 24 * 60 - ( transformarEmMinutoInicio - transformarEmMinutoFim );
        IntervaloH = IntervaloM / 60;
        IntervaloM = IntervaloM % 60;
        cout << "O JOGO DUROU "<< IntervaloH << " HORA(S) E " << IntervaloM << " MINUTO(S)";

    }
    else
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)";
    }
}

int main()
{

    int HoraInicio, MinutoInicio, HoraFim, MinutoFim;
    cin >> HoraInicio >> MinutoInicio >> HoraFim >> MinutoFim;

    CalculadoDeIntervalo(HoraInicio, MinutoInicio, HoraFim, MinutoFim);
    cout << endl;

    return 0;
}