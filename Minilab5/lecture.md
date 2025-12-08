La mejor opción (y la más limpia) es encapsular toda la lógica en una clase:

* LinkedList
* que guarda un NodePtr head
* con métodos como:
  * insertHead(int)
  * insertTail(int)
  * remove(int)
  * clear()
  * isEmpty()
  * size()
  * print()
* Y un destructor para liberar memoria automáticamente.

Además, puedemos hacerla:

* no copiables, o
* aplicar Regla de los Tres correctamente (destructor, copy constructor, assignment operator).