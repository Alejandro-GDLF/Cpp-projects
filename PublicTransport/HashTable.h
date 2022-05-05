#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_

#include "HashTable.h"

template <typename T>
class HashTable
{
	public:
		
		// Default constructor of the hash table
		HashTable();
		
		// Constructor with a set length
		HashTable(unsigned int);
		
		
	private:
		
		static const unsigned int s_default_length = 10;
		
		struct vector
		{
			unsigned int length;
			T** content;
		};
		
		// Hash generator function
		unsigned int generateHash(unsigned int);
};

#endif
