// AVL.h
/*
  Augusto Esteves Carrera - 32114842
  Gustavo Fernandes Costa - 32161093
  Mateus Yoon - 32159609
*/
#ifndef __AVL_H__
#define __AVL_H__
#include "Prod.h"
#include "NodeAVL.h"

class AVL
{
public:
	AVL();
	~AVL();

	NodeAVL* GetRoot() const;

	bool IsEmpty() const;
	void Clear();

	int GetDegree() const;
	int GetHeight() const;

	std::string TraverseInOrder();
	std::string TraversePreOrder();
	std::string TraversePostOrder();

	NodeAVL* FindMin() const;
	NodeAVL* FindMax() const;

	NodeAVL* Predecessor(int id) const;
	NodeAVL* Successor(int id) const;

	NodeAVL* Search(int id) const;
	NodeAVL* Insert(int id, Prod data);
	void Remove(int id);
  int Valor();
  int ValorTotal();
  bool QuantidadeMenor();
private:
	NodeAVL* m_Root;

	void Destroy(NodeAVL *node);
	
	int GetDegreeInternal(const NodeAVL* node) const;

	std::string TraverseInOrderInternal(NodeAVL* node);
	std::string TraversePreOrderInternal(NodeAVL* node);
	std::string TraversePostOrderInternal(NodeAVL* node);

	NodeAVL* FindMinInternal(NodeAVL* node) const;
	NodeAVL* FindMaxInternal(NodeAVL* node) const;

	NodeAVL* PredecessorInternal(NodeAVL* node) const;
	NodeAVL* SuccessorInternal(NodeAVL* node) const;

	NodeAVL* SearchInternal(NodeAVL* node, int& id) const;
	NodeAVL* InsertInternal(NodeAVL* node, NodeAVL* parent, int id, Prod data);
	NodeAVL* RemoveInternal(NodeAVL* node, int id);
	NodeAVL* RemoveNode(NodeAVL* node);
	void UpdateParentChild(NodeAVL* parent, const NodeAVL* child, NodeAVL* newChild);

	NodeAVL* RotateLeft(NodeAVL* node);
	NodeAVL* RotateRight(NodeAVL* node);
	NodeAVL* RotateLeftRight(NodeAVL* node);
	NodeAVL* RotateRightLeft(NodeAVL* node);

	NodeAVL* Balance(NodeAVL* node);
  void ValorAux(const NodeAVL* node, int &total, int referencia);
  void ValorTotalAux(const NodeAVL* node, int &total);
  void QuantidadeMenorAux(const NodeAVL* node, int referencia);
};

#endif