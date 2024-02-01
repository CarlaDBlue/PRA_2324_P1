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
		friend ostream& operator<<(ostream &out, cont Node<T> &node)
		{
			out<<" "<<node.data;
			return out;
		}
};
