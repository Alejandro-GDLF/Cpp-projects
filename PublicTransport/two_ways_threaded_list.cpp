#include "two_ways_threaded_list.h"

template<typename T>
TList::TList()
{
	ini = nullptr;
	pt = nullptr;
	mark = nullptr;
}

template<typename T>
TList::~TList()
{
	Pointer p_aux = this->ini;
	
	do
	{
		p_aux -> data = nullptr;
		
		p_aux = p_aux->next;
		
	}while(p_aux != ini);
	
	delete ini;
}

template<typename T>
void TList::Insert(T data)
{
	Pointer p_aux;
	
	p_aux->data = &data;
	
	if (ini == nullptr)
	{
		ini = p_aux;
		p_aux->next = p_aux;
		p_aux->prev = p_aux;
	}
	else
	{
		p_aux->next = pt->next;
		p_aux->prev = pt;
		
		pt->next = p_aux;
	}
}

template<typename T>
bool TList::Delete()
{
	Pointer p_aux;
	
	if(pt->next == nullptr)
		return false;
	else
	{
		p_aux = pt->next;
		p_aux->data = nullptr;
		
		pt->next = p_aux->next;
		pt->next->prev = pt;
		
		p_aux->next = nullptr;
		p_aux->prev = nullptr;
		
		delete p_aux;
		
		return true;
	}
}

template<typename T>
bool TList::Advance()
{
	if(ini == nullptr)
		return false;
	else if(pt->next == nullptr)
		return false;
	else
	{
		pt = pt->next;
		
		return true;
	}
}

template<typename T>
bool TList::MoveBack()
{
	if(ini == nullptr)
		return false;
	else if(pt->prev == nullptr)
		return false;
	else
	{
		pt = pt->prev;
		
		return true;
	}
}

template<typename T>
void TList::Mark()
{
	mark = pt;
}

template<typename T>
bool TList::IsMarked()
{
	if(mark == nullptr)
		return false;
	else
		if (mark == pt)
			return true;
		else
			return false;
}
