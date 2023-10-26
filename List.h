#ifndef LIST_H
#define LIST_H

template <typename T>
class List{
	public: 
		void insert (int pos, T e);	//inserta e en pos. Lanza std::out_of_range si la posición pos no es válida fuera del intervalo [0, size()]
		void append (T e);		//inserta e al final de la lista
		void prepend (T e);		//inserta e al principio de la lista
		T remove (int pos);		//elimina y devuelve el elemento en la posición pos. Lanza std::out_of_range if pos no es válida en intervalo [0, size()-1]
		T get (int pos);		//devuelve elem. en posición pos. Lanza exc std::out_of_range if IDEM(lo mismo que remove).
		int search (T e);		//devuelve la posición de la primera ocurrencia del elemento e y si no encuentra nada -1
		bool empty();			//Indica si la lista está vacía. 
		int size();			//devuelve el n de elementos de la lista
};

#endif
