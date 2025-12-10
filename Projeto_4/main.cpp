#include <iostream>
#include "Aluno.h"
#include "Disciplina.h"
using namespace std;

int main() {

    Aluno aluno1("João da Silva", "20231045", "ADS");

    Disciplina d1("Programação C++", 80, 7.5);
    Disciplina d2("Banco de Dados", 60, 5.0);

    aluno1.exibirInformacoes();

    cout << "\n=== Disciplinas ===" << endl;

    cout << d1.getNome() << " - Nota: " << d1.getNota();
    if (verificarAprovacao(d1))
        cout << " -> Aprovado" << endl;
    else
        cout << " -> Reprovado" << endl;

    cout << d2.getNome() << " - Nota: " << d2.getNota();
    if (verificarAprovacao(d2))
        cout << " -> Aprovado" << endl;
    else
        cout << " -> Reprovado" << endl;

    return 0;
}