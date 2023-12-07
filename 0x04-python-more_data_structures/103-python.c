#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_bytes(PyObject *p)
{
	long int l, i, s;
	char *str;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	str = ((PyBytesObject *)p)->ob_sval;
	s = ((PyVarObject *)(p))->ob_size;
	printf("  size: %ld\n", s);
	printf("  trying string: %s\n", str);
	if (s >= 10)
		l = 10;
	else
		l = s + 1;
	printf("  first %ld bytes:", l);
	for (i = 0; i < l; i++)
		if (str[i] >= 0)
			printf(" %02x", str[i]);
		else
			printf(" %02x", 256 + str[i]);
	printf("\n");
}

/**
 * print_python_list - Prints list information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_list(PyObject *p)
{
	long int s, i;
	PyListObject *l;
	PyObject *o;

	s = ((PyVarObject *)(p))->ob_size;
	l = (PyListObject *)p;
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", s);
	printf("[*] Allocated = %ld\n", l->allocated);
	for (i = 0; i < s; i++)
	{
		o = ((PyListObject *)p)->ob_item[i];
		printf("Element %ld: %s\n", i, ((o)->ob_type)->tp_name);
		if (PyBytes_Check(o))
        {
			print_python_bytes(o);
        }
	}
}
