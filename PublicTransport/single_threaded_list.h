#ifndef _LIST_H_
#define _LIST_H_

#include "single_threaded_list.h"


template<typename T>
class List
{
	public:
		
		// List constructor
		List();
		
		// List destructor
		~List();
		
		// Insert new item to the list
		void Insert(T);
		
		// Delete the item immediatly next to the selected one
		bool Delete();
		
		// Advance in the list
		bool Advance();
		
		// Mark an item
		void Mark();
		
		// Check if the item selected is marked
		bool IsMarked();
		
	private:
		struct Node;
		typedef Node* Pointer; // Pointer to each list item
		
		// List item
		struct Node
		{
			T* obj;
			Pointer next;
		}
		
		Pointer ini;	// Pointer to the initial list item
		Pointer pt;		// Pointer to the item analized
		Pointer mark;	// Pointer to the marked item
};

#endif
