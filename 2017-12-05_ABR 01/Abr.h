#pragma once
#include <stdio.h>
#include <stdlib.h>

//dichiarazione nodo ABR
struct SNodo
{
	int info;
	SNodo* d;
	SNodo* s;
};

//inserimenti
void Insert(SNodo*& r,SNodo* n);
void InsertRic(SNodo*& r,SNodo* n);
//visite
void VisAnt(SNodo* r);
void VisSimm(SNodo* r);
void VisDiff(SNodo* r);
//salva ABr su un file binario
bool SalvaABR(char* nomef,SNodo* r);
//ricostruisce ABR su file binario
bool CaricaABR(char* nomef,SNodo*& r);
//salva ABr su un file binario
void SalvaBin(FILE*f,SNodo* r);
//Libera memoria
void Elimina(SNodo*& r);

