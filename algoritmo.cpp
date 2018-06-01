#include <iostream>
#include <vector>
#include <ctime>
#include "burn.h"

using namespace std;

int main () {
  vector<int> c1_t1, c1_t2, c1_t3, c1_t4, c1_t5, c1_t6, c1_t7, c1_t8;
  vector<int> c2_t1, c2_t2, c2_t3, c2_t4, c2_t5, c2_t6, c2_t7, c2_t8;
  vector<int> d_ch;
  vector<int> h1_t1, h1_t2, h1_t3, h1_t4, h1_t5, h1_t6, h1_t7, h1_t8;
  vector<int> h2_t1, h2_t2, h2_t3, h2_t4, h2_t5, h2_t6, h2_t7, h2_t8;
  vector<int> b_h1_t1, b_h1_t2, b_h1_t3, b_h1_t4, b_h1_t5, b_h1_t6, b_h1_t7, b_h1_t8;
  vector<int> b_h2_t1, b_h2_t2, b_h2_t3, b_h2_t4, b_h2_t5, b_h2_t6, b_h2_t7, b_h2_t8;
  int score;
  int total_score = 0, last_score = 0, best_score = 0, normal_score = 0;
  clock_t t;

  inicia_disciplinas(c1_t1, 0, 1);
  inicia_disciplinas(c1_t2, 1, 1);
  inicia_disciplinas(c1_t3, 2, 1);
  inicia_disciplinas(c1_t4, 3, 1);
  inicia_disciplinas(c1_t5, 4, 1);
  inicia_disciplinas(c1_t6, 5, 1);
  inicia_disciplinas(c1_t7, 6, 1);
  inicia_disciplinas(c1_t8, 7, 1);

  inicia_disciplinas(c2_t1, 0, 2);
  inicia_disciplinas(c2_t2, 1, 2);
  inicia_disciplinas(c2_t3, 2, 2);
  inicia_disciplinas(c2_t4, 3, 2);
  inicia_disciplinas(c2_t5, 4, 2);
  inicia_disciplinas(c2_t6, 5, 2);
  inicia_disciplinas(c2_t7, 6, 2);
  inicia_disciplinas(c2_t8, 7, 2);

  inicia_carga_horaria(d_ch);

  some_name(c1_t1, d_ch, h1_t1, normal_score);
  some_name(c1_t2, d_ch, h1_t2, normal_score);
  some_name(c1_t3, d_ch, h1_t3, normal_score);
  some_name(c1_t4, d_ch, h1_t4, normal_score);
  some_name(c1_t5, d_ch, h1_t5, normal_score);
  some_name(c1_t6, d_ch, h1_t6, normal_score);
  some_name(c1_t7, d_ch, h1_t7, normal_score);
  some_name(c1_t8, d_ch, h1_t8, normal_score);

  some_name(c2_t1, d_ch, h2_t1, normal_score);
  some_name(c2_t2, d_ch, h2_t2, normal_score);
  some_name(c2_t3, d_ch, h2_t3, normal_score);
  some_name(c2_t4, d_ch, h2_t4, normal_score);
  some_name(c2_t5, d_ch, h2_t5, normal_score);
  some_name(c2_t6, d_ch, h2_t6, normal_score);
  some_name(c2_t7, d_ch, h2_t7, normal_score);
  some_name(c2_t8, d_ch, h2_t8, normal_score);

  for(int i = 0; i < 10000; i++) {
    my_swap(h1_t1, h2_t1);
    my_swap(h1_t2, h2_t2);
    my_swap(h1_t3, h2_t3);
    my_swap(h1_t4, h2_t4);
    my_swap(h1_t5, h2_t5);
    my_swap(h1_t6, h2_t6);
    my_swap(h1_t7, h2_t7);
    my_swap(h1_t8, h2_t8);

    avalia(h1_t1, h2_t1, c1_t1, d_ch, score, total_score);
    avalia(h1_t1, h2_t2, c1_t1, d_ch, score, total_score);
    avalia(h1_t1, h2_t3, c1_t1, d_ch, score, total_score);
    avalia(h1_t1, h2_t4, c1_t1, d_ch, score, total_score);
    avalia(h1_t1, h2_t5, c1_t1, d_ch, score, total_score);
    avalia(h1_t1, h2_t6, c1_t1, d_ch, score, total_score);
    avalia(h1_t1, h2_t7, c1_t1, d_ch, score, total_score);
    avalia(h1_t1, h2_t8, c1_t1, d_ch, score, total_score);

    avalia(h1_t2, h2_t2, c1_t2, d_ch, score, total_score);
    avalia(h1_t2, h2_t3, c1_t2, d_ch, score, total_score);
    avalia(h1_t2, h2_t4, c1_t2, d_ch, score, total_score);
    avalia(h1_t2, h2_t5, c1_t2, d_ch, score, total_score);
    avalia(h1_t2, h2_t6, c1_t2, d_ch, score, total_score);
    avalia(h1_t2, h2_t7, c1_t2, d_ch, score, total_score);
    avalia(h1_t2, h2_t8, c1_t2, d_ch, score, total_score);

    avalia(h1_t3, h2_t3, c1_t3, d_ch, score, total_score);
    avalia(h1_t3, h2_t4, c1_t3, d_ch, score, total_score);
    avalia(h1_t3, h2_t5, c1_t3, d_ch, score, total_score);
    avalia(h1_t3, h2_t6, c1_t3, d_ch, score, total_score);
    avalia(h1_t3, h2_t7, c1_t3, d_ch, score, total_score);
    avalia(h1_t3, h2_t8, c1_t3, d_ch, score, total_score);

    avalia(h1_t4, h2_t4, c1_t4, d_ch, score, total_score);
    avalia(h1_t4, h2_t5, c1_t4, d_ch, score, total_score);
    avalia(h1_t4, h2_t6, c1_t4, d_ch, score, total_score);
    avalia(h1_t4, h2_t7, c1_t4, d_ch, score, total_score);
    avalia(h1_t4, h2_t8, c1_t4, d_ch, score, total_score);

    avalia(h1_t5, h2_t5, c1_t5, d_ch, score, total_score);
    avalia(h1_t5, h2_t6, c1_t5, d_ch, score, total_score);
    avalia(h1_t5, h2_t7, c1_t5, d_ch, score, total_score);
    avalia(h1_t5, h2_t8, c1_t5, d_ch, score, total_score);

    avalia(h1_t6, h2_t6, c1_t6, d_ch, score, total_score);
    avalia(h1_t6, h2_t7, c1_t6, d_ch, score, total_score);
    avalia(h1_t6, h2_t8, c1_t6, d_ch, score, total_score);

    avalia(h1_t7, h2_t7, c1_t7, d_ch, score, total_score);
    avalia(h1_t7, h2_t8, c1_t7, d_ch, score, total_score);

    avalia(h1_t8, h2_t8, c1_t8, d_ch, score, total_score);

    if(i == 0) {last_score = total_score;}
    else {
      if(last_score > total_score) {
        last_score = total_score;
        best_score = total_score;
        save_best_h(h1_t1, h2_t1, b_h1_t1, b_h2_t2);
        save_best_h(h1_t2, h2_t2, b_h1_t2, b_h2_t2);
        save_best_h(h1_t3, h2_t3, b_h1_t3, b_h2_t3);
        save_best_h(h1_t4, h2_t4, b_h1_t4, b_h2_t4);
        save_best_h(h1_t5, h2_t5, b_h1_t5, b_h2_t5);
        save_best_h(h1_t6, h2_t6, b_h1_t6, b_h2_t6);
        save_best_h(h1_t7, h2_t7, b_h1_t7, b_h2_t7);
        save_best_h(h1_t8, h2_t8, b_h1_t8, b_h2_t8);
      }
      else {last_score = total_score;}
    }
    /*if(i < 3) {
      for(int j = 0; j < h1_t1.size(); j++) {
        cout << h1_t1[j] << " ";
        if((j+1)%2 == 0) {cout << endl << "----" << endl;}
        if((j+1) == h1_t1.size()) {cout << endl << endl;}
      }
      for(int j = 0; j < h2_t1.size(); j++) {
        cout << h2_t1[j] << " ";
        if((j+1)%2 == 0) {cout << endl << "----" << endl;}
        if((j+1) == h2_t1.size()) {cout << endl << endl;}
      }
    } */

    total_score = 0;
  }
  /*cout << "Total Score - " << total_score << endl;
  cout << "Last Score - " << last_score << endl;
  cout << "Best Score - " << best_score << endl;

  for(int j = 0; j < b_h1_t1.size(); j++) {
    cout << b_h1_t1[j] << " ";
    if((j+1)%2 == 0) {cout << endl << "----" << endl;}
    if((j+1) == b_h1_t1.size()) {cout << endl << endl;}
  } */
  cout << "NORMAL SCORE - " << normal_score << endl;
  cout << "LAST SCORE - " << last_score << endl;
  cout << "BEST SCORE - " << best_score << endl;

  cout << endl;
  t = clock();
  cout << "TIME - " << (((float)t)/CLOCKS_PER_SEC) << endl;

  return 0;
}
