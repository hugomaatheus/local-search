#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//função utilizada para gerar a solução inicial aleatória
void random_fill(vector<int>& random_schedule) {
  random_shuffle(random_schedule.begin(), random_schedule.end());
  cout << endl;

  cout << "Shuffle vector" << endl;
  for(int i = 0; i < random_schedule.size(); i++) {
    cout << random_schedule[i] << endl;
  }
}

//função que gera solução inicial
void inicia_disciplinas(vector<int>& d, int x){
  int num = 0;
  string line, path;

  cout << endl << "Iniciando processo..." << endl;

  if(x == 0) {path = "c1t1.txt";}
  else if(x == 1) {path = "c1t2.txt";}
  else if(x == 2) {path = "c1t3.txt";}
  else {path = "c1t4.txt";}

  ifstream d_file (path);
  if(!d_file.is_open())
    cout << "Não foi possível abrir o arquivo!" << endl;
  else {
    while(getline(d_file, line)) {
      num = stoi(line);
      d.push_back(num);
    }
    d_file.close();
    cout << "Curso 1 - Turma "<< x+1 << endl;
    for(int i = 0; i < d.size(); i++) {
      cout << d[i] << " ";
    }
    random_fill(d);
  }

  cout << endl << "disciplinas preenchidas" << endl;
}

//função que preenche o vetor de carga horária referente a cada disciplina
void inicia_carga_horaria(vector<int>& d_ch){
  string line;
  int num = 0;
  vector<int> v_aux;
  ifstream in_file ("in.txt");

  cout << endl << "Iniciando processo..." << endl << endl;

  if(!in_file.is_open()) {
    cout << "Não foi possível abrir o arquivo!" << endl;
  }
  else {
    while(getline(in_file, line)) {
      if(line=="80") {num=80;} else if(line=="40") {num=40;}
      d_ch.push_back(num);
    }
  }
  in_file.close();
  for(int i = 0; i < d_ch.size(); i++) {
    cout << d_ch[i] << endl;;
  }
  cout << endl << "Carga horária preenchida." << endl << endl;;
}

//reorganiza o vetor de horário, levando em consideração a carga horária da disciplina
void some_name(vector<int>& d, vector<int>& d_ch, vector<int>& h) {
  vector<int> d_80;
  int disc, aux, y = 0;

  for(int i = 0; i < d.size(); i++) {
    disc = d[i];
    if(d_ch[disc-1] == 80) {                                        //verifica no vetor de carga horária usando o ID
      if((i+1) == d.size()) {h.push_back(disc); h.push_back(disc);}
      else {d_80.push_back(disc); h.push_back(disc);}
    }
    else if(d_ch[disc-1] == 40) {                                   //verifica no vetor de carga horária usando o ID
      h.push_back(disc);
      if((i+1) == d.size()) {
        for(int i = y; i < d_80.size(); i++) {aux = d_80[i]; h.push_back(aux);}
      }
      else if(((y+1) <= d_80.size()) && !(d_80.empty())) {
        aux = d_80[y];
        h.push_back(aux);
        y++;
      }
    }
  }
  for(int i = 0; i < h.size(); i++) {cout << h[i] << " ";}
  cout << endl;
}
