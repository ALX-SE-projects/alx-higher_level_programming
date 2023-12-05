#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *a)
{
       long int b = PyList_Size(a);
       int c;
       PyListObject *d = (PyListObject *)a;

       printf("[*] Size of the Python List = %li\n", b);
       printf("[*] Allocated = %li\n", d->allocated);
       for (c = 0; c < b; c++)
               printf("Element %i: %s\n", c, Py_TYPE(d->ob_item[c])->tp_name);
}
