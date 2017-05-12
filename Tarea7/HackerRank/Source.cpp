#include<iostream>
#include<stdlib.h>

using namespace std;

//*******************************
struct nodo {
	int info;
	struct nodo *sgt;
};
//************************************
int main() 
{
	struct nodo *cabe;
	struct nodo *nuevo;
	struct nodo *aux;
	cabe = NULL;
	int dato;
	int cant, i = 1, cont;
	cout << "Entrar cantidad de nodos="; cin >> cant;
	while (i <= cant) {
		nuevo = (struct nodo *)malloc(sizeof(struct nodo));
		nuevo->sgt = cabe;
		cout << "Entre dato=";
		cin >> dato;
		nuevo->info = dato;
		cabe = nuevo;
		i++;
	}

	while (nuevo != NULL) {
		cout << "\nDATO=" << nuevo->info;
		nuevo = nuevo->sgt;
	}

	system("pause>>null");
}