#include <iostream>

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

void atualizar_cena(Cena *cena) {
  //.......
}

int add_elemento(Cena *cena, Elemento *elem) {
  ///
  int index = 0; // indice onde o elemento foi adicionado

  return index;
}

void mostrar_cena(Cena *cena) {
  // O JOGO TEM UMA CENA DE 15X15
  // MOSTRAR AQUI EM MODO TEXTO A CENA COM OS SEUS ELEMENTOS
  // CADA TIPO DE ELEMENTO DEVE SER MOSTRADO COMO UM NUMERO NA TELA
  // O PISO VAZIO DEVE SER UM "ESPACO EM BRANCO"
  // DICA: VOCE PODE CRIAR UMA MATRIZ TEMPORARIA PARA ISSO.
}

// TIPOS:
// 0: BOMBA
// 1: PLAYER
// ....
int main() {
  Cena cena01;

  // CRIANDO UMA BOMBA NA POSIÇÃO 3x10
  Elemento elem1;
  elem1.tipo = 0; // BOMBA
  elem1.posicao_x = 3;
  elem1.posicao_y = 10;
  //elem1.personagem_direcao;
  elem1.bomba_tempo = 0;
  add_elemento(&cena01, &elem1);

  // CRIANDO UM PLAYER NA POSIÇÃO 2X7
  Elemento elem2;
  elem2.tipo = 1; // PLAYER
  elem2.posicao_x = 2;
  elem2.posicao_y = 7;
  elem2.personagem_direcao = 1; // ESQUERDA
  //elem2.bomba_tempo = 0;
  add_elemento(&cena01, &elem2);

  mostrar_cena(&cena01);
  atualizar_cena(&cena01);
  mostrar_cena(&cena01);

}