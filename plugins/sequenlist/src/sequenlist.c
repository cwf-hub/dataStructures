
#include "sequenlist.h"

int InitList(IN sequenlist *L)
{
	L->length = 0;
	memset(L->elem, 0 ,sizeof(L->elem));
	return FUNC_SUCCESS;
}

int ClearList(IN sequenlist *L)
{
	int i = 0;
	for(i = 0; i < L->length;i++)
		L->elem[i] = 0;
	return FUNC_SUCCESS;
}

int ListLength(IN sequenlist *L , OUT datatype *length)
{
	*length = L->length;
	return FUNC_SUCCESS;
}
int Loc(IN sequenlist *L,IN datatype Item,OUT datatype *index)
{
	int i,j;
	if(L->length < 1)
		return FUNC_ERR_EMPTY;
	j = L->length;
	for(i = 0;i < L->length; i++)
	{
		if(L->elem[i] == Item)
		{
			*index = i;
			return FUNC_SUCCESS;
		}	
	}
	printf("no found %d!\n",Item);
	return FUNC_SUCCESS;
}
int GetNode(IN sequenlist *L ,IN unsigned int index, OUT datatype *data)
{
	if(( index > L->length )||( index < 1))
		return FUNC_ERR_UNFIX;
	*data = L->elem[index - 1];
	return FUNC_SUCCESS;
}

int GetNext(IN sequenlist *L,IN unsigned int index,OUT datatype *data)
{
	if(( index > L->length - 1 )||( index < 1))
		return FUNC_ERR_UNFIX;
	if(L->length < 2)
		return FUNC_ERR_SHORTLENGH;
	*data = L->elem[index];
	return FUNC_SUCCESS;
}

int GetPrior(IN sequenlist *L,IN unsigned int index,OUT datatype *data)
{
	if(( index > L->length )||( index < 2))
		return FUNC_ERR_UNFIX;
	if(L->length < 2)
		return FUNC_ERR_SHORTLENGH;
	*data = L->elem[index - 2];
	return FUNC_SUCCESS;
}

int Ins(IN sequenlist *L,IN unsigned int index,OUT datatype data)
{
	int temp;
	if(( index > L->length + 1 )||( index < 1))
		return FUNC_ERR_UNFIX;
	for(temp = L->length; temp > index; temp--)
		L->elem[temp] = L->elem[temp -1];
	
	L->elem[index - 1] = data;
	L->length++;
	return FUNC_SUCCESS;
}

int Del(IN sequenlist *L,IN unsigned int index)
{
	int temp;
	if(( index > L->length )||( index < 1))
		return FUNC_ERR_UNFIX;
	if(L->length < 1)
		return FUNC_ERR_EMPTY;
	for(temp = index; temp < L->length; temp++)
		L->elem[temp] = L->elem[temp+1];
	
	L->length--;
	return FUNC_SUCCESS;
}