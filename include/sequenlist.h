#include <stdio.h>
#include <string.h>

#define IN
#define OUT
#define MAXSIZE 1024

#define FUNC_SUCCESS 		( 0)
#define FUNC_ERR_UNFIX 		(-1)
#define FUNC_ERR_EMPTY 		(-2)
#define FUNC_ERR_SHORTLENGH (-3)

typedef int datatype;
typedef struct
{
	datatype elem[MAXSIZE];
	int length;
} sequenlist;
int InitList(IN sequenlist *L);
int ClearList(IN sequenlist *L);
int ListLength(IN sequenlist *L , OUT datatype *length);
int Loc(IN sequenlist *L,IN datatype Item,OUT datatype *index);
int GetNode(IN sequenlist *L ,IN unsigned int index,OUT datatype *data);
int GetNext(IN sequenlist *L,IN unsigned int index,OUT datatype *data);
int GetPrior(IN sequenlist *L,IN unsigned int index,OUT datatype *data);
int Ins(IN sequenlist *L,IN unsigned int index,OUT datatype data);
int Del(IN sequenlist *L,IN unsigned int index);