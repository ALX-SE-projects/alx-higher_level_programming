#include <Python.h>

void print_python_list_info(PyObject *p) {
   PyListObject *list = (PyListObject *)p;

   printf("[*] Size of the Python List = %ld\n", list->ob_size);
   printf("[*] Allocated = %ld\n", list->ob_alloc);

   for (Py_ssize_t i = 0; i < list->ob_size; i++) {
       PyObject *item = list->ob_item[i];
       printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
   }
}
