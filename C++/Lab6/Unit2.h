//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <vcl.h>
struct NewNode
{
	int key;
	NewNode *left;
	NewNode *right;

};
typedef NewNode* PointerNode;


class NewTree
{
public:
   NewTree();
   PointerNode root;
   int amountOfNodes;
   void addNode(int newKey);
   PointerNode findNewNode(int NewKey, PointerNode point);
   void showTreeRec(PointerNode ptr, TTreeView *TreeView, int &index);
   void showTree(TTreeView *TreeView);
   void delTreeRec(PointerNode ptr);
   void delTree();
   void balanceTree();
   int addToMassFromTree(PointerNode ptr, int *keys, int &inMass);
   void createTreeByMass(int *keys, int endborder);
   PointerNode createTreeMassRec(int *keys, int beg, int endborder);

   void inOrder(TListBox *ListBox);
   void inOrderRec(PointerNode ptr, TListBox *ListBox);

   void preOrder(TListBox *ListBox);
   void postOrder(TListBox *ListBox);

   void preOrderRec(PointerNode ptr, TListBox *ListBox);
   void postOrderRec(PointerNode ptr, TListBox *ListBox);

   void delForTask();
   void delForTaskRec(PointerNode ptr, bool isLeft);

   void delNode(int key);
   AnsiString findByKey(int key);

};
//---------------------------------------------------------------------------
#endif
