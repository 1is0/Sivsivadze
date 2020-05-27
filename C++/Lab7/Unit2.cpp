// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
#include <time.h>
HashTab::HashTab() {
	for (int i = 0; i < tabSize; i++) {
		hashTable[i] = NULL;
	}
}

int HashTab::HashTableFunc(int key) {
	return key % tabSize;
}

void HashTab::AddMyNode(NewNode ** hashTable, int key) {
	int i;
	NewNode *ptr = new NewNode();
	i = HashTableFunc(key);
	if (ptr != NULL) {
		ptr->key = key;
		ptr->next = hashTable[i];
		hashTable[i] = ptr;
	}
}

void HashTab::DelMyNode(NewNode ** hashTable, int key) {
	int i;
	NewNode *oldptr = NULL;
	i = HashTableFunc(key);
	NewNode *ptr = hashTable[i];
	while (ptr != NULL) {
		if (ptr->key == key) {
			if (oldptr == NULL)
				hashTable[i] = ptr->next;
			else
				oldptr->next = ptr->next;
			ptr = NULL;
			return;
		}
		oldptr = ptr;
		ptr = ptr->next;
	}
}

NewNode * HashTab::SearchMyNode(NewNode **hashTable, int key) {
	NewNode *ptr;
	ptr = hashTable[HashTableFunc(key)];
	while (ptr) {
		if (ptr->key == key)
			return ptr;
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return NULL;
}

int ForTask::PrintCount(NewNode ** hashTable) {
	int sum = 0;
	int ave = 0;
	int total = 0;
    int output = 0;

	for (int i = 0; i < tabSize; i++) {
		if (hashTable[i] != nullptr) {
			for (NewNode * ptr = hashTable[i]; ptr != NULL; ptr = ptr->next) {
				sum += ptr->key;
				total += 1;
			}
		}
	}
     ave = sum/total;
    for (int i = 0; i < tabSize; i++) {
		if (hashTable[i] != nullptr) {
			for (NewNode * ptr = hashTable[i]; ptr != NULL; ptr = ptr->next) {
				if(ptr->key>ave)
				{
                    output+=1;
                }
			}
		}
	}
	return output;
}

// ---------------------------------------------------------------------------
#pragma package(smart_init)
