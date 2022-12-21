// NodeAVL.h
/*
  Augusto Esteves Carrera - 32114842
  Gustavo Fernandes Costa - 32161093
  Mateus Yoon - 32159609
*/
#ifndef __NODE_AVL_H__
#define __NODE_AVL_H__
#include "Prod.h"
#include <string>

class NodeAVL
{
public:
	NodeAVL(int id, Prod data, NodeAVL* parent = nullptr, NodeAVL* left = nullptr, NodeAVL* right = nullptr);
	~NodeAVL();

	void CopyDataFrom(const NodeAVL* node);

	int GetID() const;
	//void SetID(int id);

	Prod GetData() const;
	void SetData(Prod data);

	NodeAVL* GetParent() const;
	void SetParent(NodeAVL* parent);

	NodeAVL* GetLeft() const;
	void SetLeft(NodeAVL* left);

	NodeAVL* GetRight() const;
	void SetRight(NodeAVL* right);

	bool IsRoot() const;
	bool IsLeaf() const;

	int GetDegree() const;
	int GetDepth() const;
	int GetHeight() const;

	int GetBalanceFactor() const;
	void UpdateBalanceFactor();

	std::string ToString();

private:
	int m_ID;
	Prod m_Data;
	
	NodeAVL* m_Parent;
	NodeAVL* m_Left;
	NodeAVL* m_Right;

	int m_BalanceFactor;

	int GetDepthInternal(const NodeAVL* node) const;
	int GetHeightInternal(const NodeAVL* node) const;
};

#endif