#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
using namespace std;

class Disciplina {
private:
    string nome;
    int cargaHoraria;
    float nota;

public:
    Disciplina();

    Disciplina(string nome, int cargaHoraria, float nota = 0.0);


    void setNota(float nota);
    float getNota() const;

    string getNome() const { return nome; }

    friend bool verificarAprovacao(const Disciplina& d);
};

bool verificarAprovacao(const Disciplina& d);

#endif 