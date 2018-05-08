#include <iostream>
#include <vector>
#include "burn.h"

using namespace std;

int main () {
  vector< vector < int > > d_curso;         //vetor com as disciplinas (ids)
  //vector< vector < int > > curso_ch;       //vetor com a carga horária de cada disciplina
  int curso_ch[24][2];
  vector<int> curso_disciplinas;
  int x = 0;

  for(int i = 0; i < 4; i++) {
    inicia_disciplinas(d_curso, x);
    x++;                                    //contador de períodos por curso
  }

  inicia_carga_horaria(curso_ch);

  //preenche_horario(disciplinas, carga_horaria, curso_disciplinas);

  return 0;
}
