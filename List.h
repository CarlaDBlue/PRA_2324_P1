#ifndef LIST_H
#define LIST_H

template <typename T> // algo que pude ser todo. 
class List{
	public: 
		virtual void insert (int pos, T e)=0;	//inserta e en pos. Lanza std::out_of_range si la posición pos no es válida fuera del intervalo [0, size()]
		virtual void append (T e)=0;			//inserta e al final de la lista
		virtual void prepend (T e)=0;		//inserta e al principio de la lista
		virtual T remove (int pos)=0;		//elimina y devuelve el elemento en la posición pos. Lanza std::out_of_range if pos no es válida en intervalo [0, size()-1]
		virtual T get (int pos)=0;		//devuelve elem. en posición pos. Lanza exc std::out_of_range if IDEM(lo mismo que remove).
		virtual int search (T e)=0;		//devuelve la posición de la primera ocurrencia del elemento e y si no encuentra nada -1
		virtual bool empty()=0;			//Indica si la lista está vacía. 
		virtual int size()=0;			//devuelve el n de elementos de la lista
};

#endif


//si redefines las funciones en otro fichero, tienes que hacerlo con el override. 