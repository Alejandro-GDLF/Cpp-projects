#include "HashTable.h"

HashTable::HashTable()
{
	vector->length = this->s_default_length;
	
	vector->vector = new T[this->vector->length];
}

HashTable::HashTable(unsigned int len)
{
	vector->length = len;
	
	vector->vector = new T[this->vector->length];
}

unsigned int HashTable::generateHash(unsigned int code)
{
	return code % this->vector->length;
}

void HashTable::insert(unsigned int code, T data)
{
	unsigned int index = this->generateHash(code);
	
	if (this->vector->content[index] == nullptr)
		this->vector->content[index] = data;
	else
	{
		
	}
}
