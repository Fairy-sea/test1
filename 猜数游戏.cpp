#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX_STAGE  10

int main()
{
	int i,stage,no,ans,num[MAX_STAGE];
	srand(time(NULL));
	ans=rand()%1000;
	printf("������һ��0-999������.\n\n");
	
	stage =0;
	do
	{
		printf("��ʣ%d�λ��ᡣ�Ƕ����أ�",MAX_STAGE-stage);
		scanf("%d",&no);
		num[stage++]=no;
		
		if(no>ans) printf("��Сһ�㡣\n");
		else if(no<ans) printf("�ٴ�һ�㡣\n");
	}while(no!=ans && stage<MAX_STAGE);
	if(no!=ans)
		printf("���ź�����ȷ���ǣ�%d\n",ans);
	else
	{
		printf("�ش���ȷ��\n");
		printf("������%d�β����ˡ�\n",stage);
	 } 
	puts("\n---�����¼---");
	for(i=0;i<stage;i++)
		printf("%2d : %4d %+4d\n",i+1,num[i],num[i]-ans);
	return 0;
}
