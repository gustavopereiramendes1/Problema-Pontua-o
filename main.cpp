#include <bits/stdc++.h>

using namespace std;

int main()
{
    int QuanCompra, PagamentoAtrasado, ScoreV, ScoreI, ScoreFP, ScoreF;
    double ValordaCompra;
    char TipodaCompra;

    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;

    cout << "--------------------------------" <<endl;

    cout << "INFORME OS DADOS DO ULTIMO ANO" <<endl;

    cout << endl;

    cout << "Quantas compras o cliente fez no ultimo ano? ";

    cin >> QuanCompra;

    cout << "Qual o ticket medio? ";

    cin >> ValordaCompra;

    cout << endl;

    cout << "Quantas vezes o cliente atrasou o pagamento? ";

    cin >> PagamentoAtrasado;

    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";

    cin >> TipodaCompra;

    cout << endl;

    cout << "Score de volume de compras = " << ScoreV << endl ;

    cout << endl;

    cout << "Score de inadimplencia = "<< ScoreI << endl;

    cout <<endl;

    cout << "Score de forma de pagamento = "<< ScoreFP <<endl;

    cout << endl;

    cout << "Classificação final = " << "CLIENTE BRONZE" << endl;

    cout << "Classificação final = " << "CLIENTE PRATA"<< endl;

    cout << "Classificação final = " << "CLIENTE OURO"<< endl;

    if (QuanCompra <= 2 && ValordaCompra <=3000){
        ScoreV = 20;
    }
    else if (QuanCompra > 2 && ValordaCompra <= 3000){
        ScoreV = 40;
    }
    else if (ValordaCompra > 3000){
        ScoreV =  60;
    }
    else{
       ScoreV= 0 ;
    }

    return 0;
}
