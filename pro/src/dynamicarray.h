#ifndef _DYNAMICARRAY_H_
#define _DYNAMICARRAY_H_
#include "myprotocol.h"

typedef struct{
	char client[CLIENT_NAME_LENGTH];
	char * ip;
	int port;
}client_t;

typedef struct{
	client_t ** array;
	int occupied;
	int size;
}client_list_t;
  
client_list_t * initArray();
void addItem(client_list_t * a, client_t * n);
client_t * getItem(client_list_t * a, int idx);
client_t * popItem(client_list_t * a, int idx);
void removeItem(client_list_t * a, int idx);
int findItem(client_list_t * a, char * name);
char * printList(client_list_t * a, int * bufsize);

typedef struct{
	char ** array;
	int occupied;
	int size;
}client_name_list_t;

client_name_list_t * initNameArray();
void addNameItem(client_name_list_t * a, char * n);
int hasNameItem(client_name_list_t * a, char * n);
void removeNameItem(client_name_list_t * a, char * n);
void printNameList(client_name_list_t * a);

#endif