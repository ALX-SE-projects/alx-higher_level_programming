#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @a: Python Object
 */

void print_python_bytes(PyObject *a)
{
	char *b;
	long int c, d, e;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(a))
	{
		printf(" [ERROR] Invalid Bytes Object\n");
		return;
	}

	c = ((PyVarObject *)(a))->ob_size;
	b = ((PyBytesObject *)a)->ob_sval;

	printf(" size: %ld\n", c);
	printf(" trying string: %s\n", b);

	if (c >= 10)
		e = 10;
	else
		e = c + 1;

	printf(" first %ld bytes:", e);

	for (d = 0; d < e; d++)
		if (b[d] >= 0)
			printf(" %02x", b[d]);
		else
			printf(" %02x", 256 + b[d]);

	printf("\n");
}

/**
 * print_python_list - Prints list information
 *
 * @a: Python Object
 */
void print_python_list(PyObject *a)
{
	long int c, d;
	PyListObject *e;
	PyObject *f;

	c = ((PyVarObject *)(a))->ob_size;
	e = (PyListObject *)a;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", c);
	printf("[*] Allocated = %ld\n", e->allocated);

	for (d = 0; d < c; d++)
	{
		f = ((PyListObject *)a)->ob_item[d];
		printf("Element %ld: %s\n", d, ((f)->ob_type)->tp_name);
		if (PyBytes_Check(f))
			print_python_bytes(f);
	}
}
