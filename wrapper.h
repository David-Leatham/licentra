#ifndef __WRAPPER_H
#define __WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Print Print;

Print* newPrint(const char *name, const char *name_two);

void Print_innerSet(Print* v, int i);
int Print_innerGet(Print* v);

void Print_print(Print* v);

void deletePrint(Print* v);

#ifdef __cplusplus
}
#endif
#endif