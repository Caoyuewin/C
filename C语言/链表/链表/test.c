#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

//ͷ��
void SListPushhead(SL* s, SLDatatype v) {
	assert(s);
	Node* node = malloc(sizeof(Node));
	node->value = v;
	node->next = s->first;
	s->first = node;
}

//β��
void SListPushBack(SL* s, SLDatatype v) {
	assert(s);
	assert(s->first);
	Node* node = malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;
	if (s->first = NULL)
	{
		s->first = node;
		return;
	}
	Node* current = s->first;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = node;

}

//ͷɾ
void SListPophead(SL* s) {
	assert(s);
	assert(s->first);
	Node* next = s->first->next;
	free(s->first);
	s->first = next;
}