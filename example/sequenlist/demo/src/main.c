#include "sequenlist.h"
#include <string.h>
int main(int argc,char *argv[])
{
	sequenlist sequenlist;
	InitList(&sequenlist);
	int ret = 0;
	/*插入10个数据测试*/
	for(int i = 1;i <= 10 ;i++)
	{
		ret = Ins(&sequenlist,i,100 + i);
		if(ret < 0)
		{
			printf("ret is (%d).\n",ret);
		}
	}
	printf("Before:\n");
	for(int j = 0; j < sequenlist.length;j++)
	{
		printf("data[%d] :[%d]\n",j,sequenlist.elem[j]);
	}
	/*获取线性表表长*/
	int length = 0;
		ret = ListLength(&sequenlist,&length);
	if(ret < 0)
	{
		printf("ListLength ret is (%d).\n",ret);
	}
	printf("ListLength is [%d].\n",length);
	/*定位操作*/
	/*连续删除2个数据测试*/
	for(int i = 0; i< 2;i++)
	{

		ret = Del(&sequenlist,5);
		if(ret < 0)
		{
			printf("ret is (%d).\n",ret);
		}
	}
	printf("After:\n");
	for(int j = 0; j < sequenlist.length;j++)
	{
		printf("data[%d] :[%d]\n",j,sequenlist.elem[j]);
	}
	/*获取线性表表长*/
	length = 0;
		ret = ListLength(&sequenlist,&length);
	if(ret < 0)
	{
		printf("ListLength ret is (%d).\n",ret);
	}
	printf("ListLength is [%d].\n",length);
	/*定位操作*/
	int index = 0;
	ret = Loc(&sequenlist,109,&index);
	if(ret < 0)
	{
		printf("Loc ret is (%d).\n",ret);
	}
	printf("Iterm value [%d],and index is [%d].\n",109,index);

	/*获取下一结点*/
	int data = 0;
	ret = GetNext(&sequenlist,2,&data);
	if(ret < 0)
	{
		printf("GetNext ret is (%d).\n",ret);
	}
	
	printf("the index[%d]'s next Iterm value [%d].\n",2,data);
	/*获取上一结点*/
	data = 0;
	ret = GetPrior(&sequenlist,2,&data);
	if(ret < 0)
	{
		printf("GetPrior ret is (%d).\n",ret);
	}
	printf("the index[%d]'s prior Iterm value [%d].\n",2,data);
	
	/*获取指定结点*/
	data = 0;
	ret = GetNode(&sequenlist,2,&data);
	if(ret < 0)
	{
		printf("GetNode ret is (%d).\n",ret);
	}
	printf("the index[%d]'s node Iterm value [%d].\n",2,data);
	return 0;
}