﻿#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int no;
	struct Node* next;
};

typedef struct Node Node;
Node* ciftleriBasaTekleriSonaEkle()
{
	Node* head = NULL;
	Node* last = NULL;
	int secim = 0;
	printf("Cikmak icin -1 giriniz:");
	scanf_s("%d", &secim);
	while (secim != -1)
	{
		Node* tempNode = (Node*)malloc(sizeof(Node));
		tempNode->no = secim;
		tempNode->next = NULL;

		if (secim % 2 == 1)
		{
			if (head == NULL)
			{
				head = tempNode;
				last = head;
			}
			else
			{
				last->next = tempNode;
				last = tempNode;
			}
		}
			else {
			if (head == NULL)
			{
				head = tempNode;
				last = head;
			}
			else
			{
				tempNode->next = head;
				head = tempNode;
			}
		}
		printf("Cikmak icin -1 giriniz:");
		scanf_s("%d", &secim);
	}
	return head;
}
void main()
{
	Node* head = NULL;
	head = ciftleriBasaTekleriSonaEkle();
	while (head != NULL)
	{
		printf("%d\n", head->no);
		head = head->next;
	}
}
