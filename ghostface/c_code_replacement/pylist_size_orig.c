Py_ssize_t
PyList_Size(PyObject *op)
{
    if (!PyList_Check(op)) {
        PyErr_BadInternalCall();
        return -1;
    }
    else
        return Py_SIZE(op);
}