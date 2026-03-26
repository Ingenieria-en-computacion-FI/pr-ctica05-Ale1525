#ifndef BICOLA_H
#define BICOLA_H
#include "../lista/lista.h"
#include "../cola/cola.h"
#include <stdbool.h>

typedef Lista Bicola;

Bicola * cola_crear();

bool bicola_vacia(Cola*c);

void bicola_enqueue_head( Cola *c int dato);

void bicola_enqueue_tail( Cola *c int dato);

void bicola_denqueue_head( Cola *c int dato);

void bicola_denqueue_tail( Cola *c int dato);

int bicola_enqueue_head(Cola *c);

int bicola_enqueue_tail(cola *c);

void bicola_destruir(cola *c);
#endif