#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void outta_size(vector<int>& solution) {
  if(solution.size() > 10) {solution.pop_back();}
}

//função utilizada para gerar a solução inicial aleatória
void random_fill(vector<int>& random_schedule) {
  random_shuffle(random_schedule.begin(), random_schedule.end());
  cout << endl;
  cout << "Shuffle vector" << endl;
  for(int i = 0; i < random_schedule.size(); i++) {
    cout << random_schedule[i] << endl;
  }
  cout << endl;
}

//função que gera solução inicial
void inicia_disciplinas(vector<int>& d, int x, int c){
  int num = 0;
  string line, path;
  cout << endl << "Iniciando processo..." << endl;
  if(c == 1) {
    if(x == 0) {path = "c1t1.txt";}
    else if(x == 1) {path = "c1t2.txt";}
    else if(x == 2) {path = "c1t3.txt";}
    else if(x == 3) {path = "c1t4.txt";}
    else if(x == 4) {path = "c1t5.txt";}
    else if(x == 5) {path = "c1t6.txt";}
    else if(x == 6) {path = "c1t7.txt";}
    else if(x == 7) {path = "c1t8.txt";}
  }
  else if(c == 2) {
    if(x == 0) {path = "c2t1.txt";}
    else if(x == 1) {path = "c2t2.txt";}
    else if(x == 2) {path = "c2t3.txt";}
    else if(x == 3) {path = "c2t4.txt";}
    else if(x == 4) {path = "c2t5.txt";}
    else if(x == 5) {path = "c2t6.txt";}
    else if(x == 6) {path = "c2t7.txt";}
    else if(x == 7) {path = "c2t8.txt";}
  }

  ifstream d_file (path);
  if(!d_file.is_open())
    cout << "Não foi possível abrir o arquivo!" << endl;
  else {
    while(getline(d_file, line)) {
      num = stoi(line);
      d.push_back(num);
    }
    d_file.close();
    cout << "Curso - Turma "<< x+1 << endl;
    for(int i = 0; i < d.size(); i++) {
      cout << d[i] << " ";
    }
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
  vector<int> d_80, d_aux;
  int disc, aux;

  d_aux.assign(d.begin(), d.end());
  random_fill(d_aux);

  for(int i = 0; i < d_aux.size(); i++) {
    disc = d_aux[i];
    if(d_ch[disc-1] == 80) {                                        //verifica no vetor de carga horária usando o ID
      if((i+1) == d_aux.size()) {
        h.push_back(disc); h.push_back(disc);
        if(!(d_80.empty())) {
          for(int i = 0; i < d_80.size(); i++) {aux = d_80[i]; h.push_back(aux);}
          d_80.clear();
        }
      }
      else {d_80.push_back(disc); h.push_back(disc);}
    }
    else if(d_ch[disc-1] == 40) {                                   //verifica no vetor de carga horária usando o ID
      h.push_back(disc);
      if(!(d_80.empty())) {
        for(int i = 0; i < d_80.size(); i++) {aux = d_80[i]; h.push_back(aux);}
        d_80.clear();
      }
    }
  }
  outta_size(h);

  for(int i = 0; i < h.size(); i++) {
    cout << h[i] << " ";
    if((i+1)%2 == 0) {cout << endl << "----" << endl;}
    if((i+1) == h.size()) {cout << endl << endl;}
  }
  cout << endl;
}

void avalia(vector<int>& c1, vector<int>& c2, vector<int>& h1, vector<int>& h2, int &score) {
  score = 0;

  for(int i = 0; i < h1.size(); i++) {
    if(h1[i] != h2[i]) {cout  << endl << h1[i] << " - " << h2[i] << endl; score++;}
  }
  cout << endl << "SCORE - " << score << endl;
}
