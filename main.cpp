#include <iostream>

using namespace std;

typedef struct elemento_s {
  int tipo;
  int posicao_x;
  int posicao_y;
  int personagem_direcao;
  int bomba_tempo;
  int inventario[10];
} Elemento;

typedef struct cena_s {
  Elemento lista_elementos[10000];
  int qtd_elementos;
  int tempo_jogo;
} Cena;

int main () {
  Cena fase1;

}