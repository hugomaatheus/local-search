#include <iostream>
#include <vector>
#include "burn.h"

using namespace std;

int main () {
  vector<int> c1_t1, c1_t2, c1_t3, c1_t4, c1_t5, c1_t6, c1_t7, c1_t8;
  vector<int> c2_t1, c2_t2, c2_t3, c2_t4, c2_t5, c2_t6, c2_t7, c2_t8;
  vector<int> d_ch;
  vector<int> h1_t1, h1_t2, h1_t3, h1_t4, h1_t5, h1_t6, h1_t7, h1_t8;
  vector<int> h2_t1, h2_t2, h2_t3, h2_t4, h2_t5, h2_t6, h2_t7, h2_t8;

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

  some_name(c1_t1, d_ch, h1_t1);
  some_name(c1_t2, d_ch, h1_t2);
  some_name(c1_t3, d_ch, h1_t3);
  some_name(c1_t4, d_ch, h1_t4);
  some_name(c1_t5, d_ch, h1_t5);
  some_name(c1_t6, d_ch, h1_t6);
  some_name(c1_t7, d_ch, h1_t7);
  some_name(c1_t8, d_ch, h1_t8);

  some_name(c2_t1, d_ch, h2_t1);
  some_name(c2_t2, d_ch, h2_t2);
  some_name(c2_t3, d_ch, h2_t3);
  some_name(c2_t4, d_ch, h2_t4);
  some_name(c2_t5, d_ch, h2_t5);
  some_name(c2_t6, d_ch, h2_t6);
  some_name(c2_t7, d_ch, h2_t7);
  some_name(c2_t8, d_ch, h2_t8);

  return 0;
}
