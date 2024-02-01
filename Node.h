#ifndef NODE_H
#define NODE_H
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <ostream>

using namespace std;

template <typename T>
class Node {
      
	public:
		T data;
		Node<T>* next;
		Node (T data, Node<T>* next=nullptr)
		{
			this -> data = data;
			this -> next = next;
		}
		friend ostream& operator<<(ostream &out, const Node<T> &patata)
		{
			do 
			{
				out<<" "<<patata.data;
				patata=patata.next;
			}
			while (patata.next!=nullptr);
			return out;
		}
};

#endif 