#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "wrapper.h"

static PyObject *
greet_name(PyObject *self, PyObject *args)
{
    const char *name;
    const char *name_two;

    if (!PyArg_ParseTuple(args, "ss", &name, &name_two))
    {
        return NULL;
    }

    // Print print(name, name_two);
    // print.print();
    struct Print* c = newPrint(name, name_two);
    // Print_innerSet(c, 3);
    // printf("%i\n", Print_innerGet(c));
    Print_print(c);
    deletePrint(c);

    Py_RETURN_NONE;
}

static PyMethodDef GreetMethods[] = {
    {"greet", greet_name, METH_VARARGS, "Greet an entity."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef licentra =
{
    PyModuleDef_HEAD_INIT,
    "licentra",     /* name of module */
    "",          /* module documentation, may be NULL */
    -1,          /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    GreetMethods
};

PyMODINIT_FUNC PyInit_licentra(void)
{
    return PyModule_Create(&licentra);
}