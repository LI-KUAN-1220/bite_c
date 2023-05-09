#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ʼ������Ϊ�ո�
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//�汾1
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%c", board[i][j]);
//		}
//		printf("\n");
//	}
//}

//�汾2
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1. ��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//2. ��ӡ�ָ���
//		if(i < row-1)
//			printf("---|---|---\n");
//	}
//}


//�汾3
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1. ��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		//2. ��ӡ�ָ���
		if (i < row - 1)
		{
			//printf("---|---|---\n");
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������>:\n");
	while (1)
	{
		printf("��������������꣬�м�ʹ�ÿո�>:");
		scanf("%d %d", &x, &y);
		//����Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')//��������
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else//��������
			{
				printf("���걻ռ�У��������ӣ�������������\n");
			}
		}
		else//�Ƿ�
		{
			printf("����Ƿ�����������\n");
		}
	}
}

//
//�����������
//
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;//0~row-1
	int y = 0;//0~col-1
	
	printf("��������:>\n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	//Ӯ
	//��
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//��
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];

	//ƽ��
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	//����
	return 'C';
}





