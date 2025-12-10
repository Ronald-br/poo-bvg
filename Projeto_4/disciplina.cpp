#include "Disciplina.h"

Disciplina::Disciplina() {
    nome = "Sem nome";
    cargaHoraria = 0;
    nota = 0.0;
}

Disciplina::Disciplina(string nome, int cargaHoraria, float nota) {
    this->nome = nome;
    this->cargaHoraria = cargaHoraria;
    this->nota = nota;
}

void Disciplina::setNota(float nota) {
    this->nota = nota;
}

float Disciplina::getNota() const {
    return nota;
}

bool verificarAprovacao(const Disciplina& d) {
    return d.nota >= 6.0;
}
