//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
#include <iomanip>
NewTree::NewTree()
{
	root = NULL;
	amountOfNodes = 0;
}
int globalKey = 0;
void NewTree :: addNode(int newKey)
{    PointerNode wNode;
	 if(root == NULL)
	 {
		 root = new NewNode;
		 root ->key = newKey;
		 root ->right = NULL;
		 root->left = NULL;
		 amountOfNodes++;
	 }
	 else
	 {
		wNode = findNewNode(newKey, root);
		if(wNode == NULL)
		{
			Application->MessageBox(String("Элемент уже существует").c_str(), String("Ошибка").c_str(), MB_OK);
		}
		else
		{
			wNode->key = newKey;
			amountOfNodes++;
					}
	 }
}

void NewTree::preOrder(TListBox *ListBox)
{
	ListBox->Items->Clear();
	if(root != NULL)
		preOrderRec(root, ListBox);
}

void NewTree::preOrderRec(PointerNode ptr, TListBox *ListBox)
{
	ListBox->Items->Add(ptr->key);
	if(ptr->left != NULL) preOrderRec(ptr->left, ListBox);
	if(ptr->right != NULL) preOrderRec(ptr->right, ListBox);
}

void NewTree::postOrder(TListBox *ListBox)
{
	ListBox->Items->Clear();
	if(root != NULL)
		postOrderRec(root, ListBox);
}

 void NewTree::postOrderRec(PointerNode ptr, TListBox *ListBox)
{
	if(ptr->left != NULL) postOrderRec(ptr->left, ListBox);
	if(ptr->right != NULL) postOrderRec(ptr->right, ListBox);
	ListBox->Items->Add(ptr->key);
}
PointerNode NewTree :: findNewNode(int NewKey, PointerNode point)
{
	if(NewKey == point->key)
	{
	   return NULL;
	}
	if(NewKey < point -> key)
	{
		if(point->left == NULL)
		{
			point->left = new NewNode;
			point ->left->left = NULL;
			point ->left->right = NULL;
			return point->left;
		}
		else
		{
			return findNewNode(NewKey, point->left);
		}
	}
	else
	{
	   if(point->right == NULL)
		{
			point->right = new NewNode;
			point ->right->left = NULL;
			point ->right->right = NULL;
			return point->right;
		}
		else
		{
			return findNewNode(NewKey, point->right);
		}
    }
}



void NewTree::delNode(int key)
{
	PointerNode ptr = root, prevptr = NULL;
	while(ptr != NULL && ptr->key != key)
	{
		prevptr = ptr;
		if(key < ptr->key) ptr = ptr->left;
		else ptr = ptr->right;
	}
	if(ptr == NULL)
	{
		Application->MessageBox(String("Не найден ключ").c_str(), String("Ошибка").c_str(), MB_OK);
		amountOfNodes++;
	}
	else if(ptr == root && ptr->left == NULL && ptr->right == NULL)
	{
		root = NULL;
	}
	else if(ptr == root && ptr->left != NULL && ptr->right == NULL)
	{
		root = ptr->left;
	}
	else if(ptr == root && ptr->left == NULL && ptr->right != NULL)
	{
		root = ptr->right;
	}
	else if(ptr->left == NULL && ptr->right == NULL)
	{
		if(prevptr->right == ptr) prevptr->right = NULL;
		else prevptr->left = NULL;
	}
	else if(ptr->left == NULL && ptr->right != NULL)
	{
		if(prevptr->right == ptr) prevptr->right = ptr->right;
		else prevptr->left = ptr->right;
	}
	else if(ptr->left != NULL && ptr->right == NULL)
	{
		if(prevptr->right == ptr) prevptr->right = ptr->left;
		else prevptr->left = ptr->left;
	}
	else
	{
		PointerNode newptr = ptr->left, newprevptr = ptr;
		while(newptr->right != NULL)
		{
			newprevptr = newptr;
			newptr = newptr->right;
		}
		if(newprevptr == ptr)
		{
			newprevptr->left = newptr->left;
		}
		else
		{
			newprevptr->right = newptr->left;
		}
		ptr->key = newptr->key;
	}
	amountOfNodes--;
}
AnsiString NewTree::findByKey(int key)
{   AnsiString output = "Key is: ";
	AnsiString right = "NULL";
	AnsiString left = "NULL";
    PointerNode ptr = root;
	while(ptr != NULL && ptr->key != key)
	{
		if(key < ptr->key) ptr = ptr->left;
		else ptr = ptr->right;
	}
	if(ptr == NULL)
	{
		Application->MessageBox(String("Не найден ключ").c_str(), String("Ошибка").c_str(), MB_OK);
		return ".....";
	}
	else
	{
	  if(ptr->right != NULL)
	  {
		  right = ptr->right->key;
	  }
	  if(ptr->left != NULL)
	  {
		  left = ptr->left->key;
	  }
	  output+=ptr->key;
	  output+=", right child = ";
	  output+=right;
	  output+=", left child = ";
	  output+=left;
	  output +='.';
      return output;
    }
}

void NewTree::showTree(TTreeView *TreeView)
{
	int index = 0;
	TreeView->Items->Clear();
	if(root != NULL)
	{
		TreeView->Items->Add(NULL, root->key);
		showTreeRec(root, TreeView, index);
	}
}

void NewTree::showTreeRec(PointerNode ptr, TTreeView *TreeView, int &index)
{
	int nowindex = index;
	if(ptr->left != NULL)
	{
		TreeView->Items->AddChild(TreeView->Items->Item[nowindex], ptr->left->key);
		index++;
		showTreeRec(ptr->left, TreeView, index);
	}
	if(ptr->right != NULL)
	{
		TreeView->Items->AddChild(TreeView->Items->Item[nowindex], ptr->right->key);
		index++;
		showTreeRec(ptr->right, TreeView, index);
	}
}






void NewTree::inOrder(TListBox *ListBox)
{
	ListBox->Items->Clear();
	balanceTree();
	if(root != NULL)
		inOrderRec(root, ListBox);
}

void NewTree::inOrderRec(PointerNode ptr, TListBox *ListBox)
{
	if(ptr->left != NULL) inOrderRec(ptr->left, ListBox);
	ListBox->Items->Add(ptr->key);
	if(ptr->right != NULL) inOrderRec(ptr->right, ListBox);
}

int NewTree::addToMassFromTree(PointerNode ptr, int *keys, int &inMass)
{
	if(ptr->left != NULL) inMass = addToMassFromTree(ptr->left, keys, inMass);
	keys[inMass] = ptr->key;
	inMass++;
	if(ptr->right != NULL) inMass = addToMassFromTree(ptr->right, keys, inMass);
	return inMass;
}

void NewTree::createTreeByMass(int *keys, int endborder)
{
	delTree();
	root = createTreeMassRec(keys, 0, endborder);
}



PointerNode NewTree::createTreeMassRec(int *keys, int beg, int endborder)
{
	PointerNode Tree;
	int border1, border2;
	if (endborder == 0) return NULL;
	Tree = new NewNode;
	Tree->key = keys[beg + endborder/2];
	amountOfNodes++;
	border1 = endborder / 2;
	border2 = endborder - border1 - 1;
	Tree->left = createTreeMassRec(keys, beg, border1);
	Tree->right = createTreeMassRec(keys, beg + border1 + 1, border2);
	return Tree;
}

void NewTree::delTree()
{
	delTreeRec(root);
	amountOfNodes = 0;
}

void NewTree::delTreeRec(PointerNode ptr)
{
	if(ptr != NULL)
	{
		delTreeRec(ptr->left);
		delTreeRec(ptr->right);
		ptr->left = NULL;
		ptr->right = NULL;
		if(ptr == root) root = NULL;
		else delete ptr;
	}
}

void NewTree::delForTask()
{
   delForTaskRec(root, 0);
}

void NewTree::delForTaskRec(PointerNode ptr, bool isLeft)
{
	if(isLeft)
	{
		if(ptr->right != NULL)
		{
			delForTaskRec(ptr->right, 1);
		}
		else
		{
		  globalKey = ptr->key;
		  delTreeRec(ptr);
          delNode(globalKey);
		}
	}
	else
	{
	  delForTaskRec(ptr->left, 1);

    }
}



void NewTree::balanceTree()
{
	if(amountOfNodes > 1)
	{
		int inMass = 0;
		int *keys = new int[amountOfNodes];
		AnsiString *names = new AnsiString[amountOfNodes];
		addToMassFromTree(root, keys, inMass);
		createTreeByMass(keys, amountOfNodes);
		delete[] keys;
	}
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
