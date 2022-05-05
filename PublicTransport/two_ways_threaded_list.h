#ifndef _TLIST_H_
#define _TLIST_H_

class TList
{
	public:
		
		// List constructor
		TList();
		
		// List destructor
		~TList();
		
		// Insert new item to the list
		void Insert(T);
		
		// Delete item selected
		bool Delete();
		
		// Advance in the list
		bool Advance();
		
		// Mark an item
		void Mark();
		
		// Check if the item selected is marked
		bool IsMarked();
		
	private:
		struct Nodo;
		typename Nodo* Pointer;
		
		struct Nodo
		{
			T* data;
			Pointer prev;
			Pointer next;
		};
		
		Pointer ini;
		Pointer pt;
		Pointer mark;
	
};

#endif
