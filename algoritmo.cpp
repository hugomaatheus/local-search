#include <iostream>
#include <vector>
#include "burn.h"

using namespace std;

int main () {
  vector<int> d_t1, d_t2, d_t3, d_t4;
  vector<int> d_ch;
  vector<int> h_t1, h_t2, h_t3, h_t4;

  inicia_disciplinas(d_t1, 0);
  inicia_disciplinas(d_t2, 1);
  inicia_disciplinas(d_t3, 2);
  inicia_disciplinas(d_t4, 3);

  inicia_carga_horaria(d_ch);

  some_name(d_t1, d_ch, h_t1);
  some_name(d_t2, d_ch, h_t2);
  some_name(d_t3, d_ch, h_t3);
  some_name(d_t4, d_ch, h_t4);

  return 0;
}
