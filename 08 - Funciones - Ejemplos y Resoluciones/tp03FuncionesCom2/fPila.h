#ifndef FPILA_H_INCLUDED
#define FPILA_H_INCLUDED

#define ESC 27

void cargaPila(Pila *p, char texto[]);
void cargaPilaRandom(Pila *p, int limite);
void pasaPila(Pila *origen, Pila *destino);
void pasaPilaOrden(Pila *origen, Pila *destino);
void copiaPila(Pila origen, Pila *destino);
int buscaMenor(Pila origen);
int buscaMenorE(Pila *origen);

#endif // FPILA_H_INCLUDED