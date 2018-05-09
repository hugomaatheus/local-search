#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//função que preenche o vetor de disciplinas
void inicia_disciplinas(vector< vector < int > >& d_curso, int x){
  int num, y = 0;
  string line;
  vector<int> v_aux;

  cout << endl << "Iniciando processo..." << endl;

  if(x == 0) {
    ifstream c1_t1 ("c1t1.txt");
    if(!c1_t1.is_open())
      cout << "Não foi possível abrir o arquivo!" << endl;
    else {
      cout << "WHILE" << endl;
      while(getline(c1_t1, line)) {
        num = stoi(line);
        v_aux.push_back(num);
      }
      d_curso.push_back(v_aux);
      c1_t1.close();
      cout << "Curso 1 - Turma 1" << endl;
      for(int i = 0; i < d_curso.size(); i++) {
        for(int j = 0; j < d_curso[i].size(); j++) {
          cout << d_curso[i][j] << " ";
        }
        cout << endl;
      }
    }
  }
  else if(x == 1) {
    ifstream c1_t2 ("c1t2.txt");
    if(!c1_t2.is_open())
      cout << "Não foi possível abrir o arquivo!" << endl;
      else {
        while(getline(c1_t2, line)) {
          num = stoi(line);
          v_aux.push_back(num);
        }
        d_curso.push_back(v_aux);
        c1_t2.close();
        cout << "Curso 1 - Turma 2" << endl;
        for(int i = 0; i < d_curso.size(); i++) {
            for(int j = 0; j < d_curso[i].size(); j++) {
              cout << d_curso[i][j] << " ";
            }
            cout << endl;
        }
      }
  }
  else if(x == 2) {
    ifstream c1_t3 ("c1t3.txt");
    if(!c1_t3.is_open())
      cout << "Não foi possível abrir o arquivo!" << endl;
      else {
        while(getline(c1_t3, line)) {
          num = stoi(line);
          v_aux.push_back(num);
        }
        d_curso.push_back(v_aux);
        c1_t3.close();
        cout << "Curso 1 - Turma 3" << endl;
        for(int i = 0; i < d_curso.size(); i++) {
            for(int j = 0; j < d_curso[i].size(); j++) {
              cout << d_curso[i][j] << " ";
            }
            cout << endl;
        }
      }
  }
  else if(x == 3) {
    ifstream c1_t4 ("c1t4.txt");
    if(!c1_t4.is_open())
      cout << "Não foi possível abrir o arquivo!" << endl;
      else {
        while(getline(c1_t4, line)) {
          num = stoi(line);
          v_aux.push_back(num);
        }
        d_curso.push_back(v_aux);
        c1_t4.close();
        cout << "Curso 1 - Turma 4" << endl;
        for(int i = 0; i < d_curso.size(); i++) {
          for(int j = 0; j < d_curso[i].size(); j++) {
            cout << d_curso[i][j] << " ";
          }
          cout << endl;
        }
      }
  }
  cout << endl << "disciplinas preenchidas" << endl;
}

//função que preenche o vetor de carga horária referente a cada disciplina
void inicia_carga_horaria(int d_ch[24][2]){
  string line;
  int num = 0;
  int x = 0;
  vector<int> v_aux;
  ifstream in_file ("in.txt");

  cout << endl << "Iniciando processo..." << endl << endl;

  if(!in_file.is_open()) {
    cout << "Não foi possível abrir o arquivo!" << endl;
  }
  else {
    while(getline(in_file, line)) {
      //x++;
      //if(line == "80"){num = 80;v_aux.push_back(x);v_aux.push_back(num);} else if(line == "40") {num = 40;v_aux.push_back(x);v_aux.push_back(num);}
      if(line=="80") {num=80;} else if(line=="40") {num=40;}
      v_aux.push_back(num);
    }
    for(int i = 0; i < 24; i++) {
      for(int j = 0; j < 2; j++) {
        if(j == 0) {d_ch[i][j] = (i+1);}
        else {
           d_ch[i][j] = v_aux[i];
        }
      }
    }
    //curso_ch.push_back(v_aux);
  }
  in_file.close();
  for(int i = 0; i < 24; i++) {
    for(int j = 0; j < 2; j++) {
      cout << d_ch[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl << "Carga horária preenchida." << endl;
}

void random_fill(int d_ch[24][2], vector<int>& random_schedule) {
  int x = 0;
  vector<int> v_aux;

  for(int i = 0; i < 24; i++) {
    for(int j = 0; j < 2; j++) {
      if(j == 0) {x = d_ch[i][j]; random_schedule.push_back(x);}
    }
  }

  cout << "Vetor inicial" << endl;
  for(int i = 0; i < random_schedule.size(); i++) {
    cout << random_schedule[i] << endl;
  }
  cout << endl;

  random_shuffle(random_schedule.begin(), random_schedule.end());

  cout << "Shuffle vector" << endl;
  for(int i = 0; i < random_schedule.size(); i++) {
    cout << random_schedule[i] << endl;
  }
}
