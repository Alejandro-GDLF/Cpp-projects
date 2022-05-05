#include "single_threaded_list.h"

template<typename T>
Lista::Lista()
{
	ini = nullptr;
	pt = nullptr;
}

template<typename T>
Lista::~Lista()
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
void Lista::Insert(T data)
{
	Pointer p_aux = new Node;
	
	p_aux->obj = &data;
	
	if(ini == nullptr)
	{
		ini = p_aux;
		p_aux->next = ini;
		pt = p_aux;
	}
	else
	{
		p_aux->next = pt->next;
		
		pt->next = p_aux;
	}
}

template<typename T>
void Lista::Emplace(T* data)
{	
	Pointer p_aux = new Node;
	
	p_aux->obj = data;
	
	if(ini == nullptr)
	{
		ini = p_aux;
		p_aux->next = ini;
		pt = p_aux;
	}
	else
	{
		p_aux->next = pt->sig;
		
		pt->next = p_aux;
	}
}

template<typename T>
bool Lista::Delete()
{
	Pointer p_aux;
	
	if(pt->next == nullptr)
		return false;
		
	else
	{
		p_aux = pt->next;
		
		pt->next = p_aux->next;
		
		p_aux->next = nullptr;
		
		p_aux->data = nullptr;
		
		delete p_aux;
		
		return true;
	}
}

template<typename T>
bool Lista::Advance()
{
	if(ini == nullptr)
		return false;
		
	else if (pt->next == nullptr)
		return false;
	else
	{
		pt = pt->next;
		return true;
	}
}

template<typename T>
bool Lista::IsMarked()
{
	if(mark == nullptr)
		return false;
	else
		if (mark == pt)
			return true;
		else
			return false;
}

template<typename T>
void Lista::Mark()
{
	mark = pt;
}
