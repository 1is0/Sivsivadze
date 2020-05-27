//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <vcl.h>
#define tabSize 17
struct NewNode
{
	int key;
	NewNode *next;
};
NewNode *hashTable[tabSize];
class HashTab
{
	public:
	HashTab();
	int HashTableFunc(int key);
	void AddMyNode(NewNode ** hashTable , int key);
	void DelMyNode(NewNode ** hashTable , int key);
	NewNode * SearchMyNode(NewNode **hashTable, int key);

};
class ForTask : public HashTab

{
	 public:
	 int PrintCount(NewNode ** hashTable);
};
//---------------------------------------------------------------------------
#endif
