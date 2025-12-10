#ifndef ALUNO_H
#define ALUNO_H

#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    string matricula;
    string curso;

public:
    
    Aluno();

   
    Aluno(string nome, string matricula, string curso);

   
    void exibirInformacoes() const;

   
    string getNome() const { return nome; }
    string getMatricula() const { return matricula; }
    string getCurso() const { return curso; }
};

#endif 
