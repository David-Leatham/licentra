#include "test_app.h"
#include "wrapper.h"

extern "C" {
        Print* newPrint(const char *name, const char *name_two) {
                return new Print(name, name_two);
        }

        void Print_innerSet(Print* v, int i) {
                v->innerSet(i);
        }

        int Print_innerGet(Print* v) {
                return v->innerGet();
        }

        void Print_print(Print* v) {
                return v->print();
        }

        void deletePrint(Print* v) {
                delete v;
        }
}