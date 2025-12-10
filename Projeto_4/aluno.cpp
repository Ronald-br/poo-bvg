#include <iostream>
#include "Aluno.h"
using namespace std;

Aluno::Aluno() {
    nome = "Sem nome";
    matricula = "0000";
    curso = "Indefinido";
}

Aluno::Aluno(string nome, string matricula, string curso) {
    this->nome = nome;
    this->matricula = matricula;
    this->curso = curso;
}

void Aluno::exibirInformacoes() const {
    cout << "=== Informações do Aluno ===" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Matrícula: " << matricula << endl;
    cout << "Curso: " << curso << endl;
}