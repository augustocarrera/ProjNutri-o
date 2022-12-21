// mainAVL.cpp
/*
  Augusto Esteves Carrera - 32114842
  Gustavo Fernandes Costa - 32161093
  Mateus Yoon - 32159609
*/
#include <iostream>
#include <string>
#include "AVL.h"
#include "Prod.h"
using namespace std;
void Insert(AVL* avl)
{
	int num; string nome; int codigo; float ValorUnitario;
	std::cout << "Codigo: ";
	std::cin >> codigo;
  cout << "nome: ";
  cin >> nome;
  cout << "Quantidade: ";
  cin >> num;
  cout << "Valor unitario: ";
  cin >> ValorUnitario;

  Prod prod1(codigo,nome,num,ValorUnitario);
	NodeAVL* node = avl->Insert(prod1.getCodigo(), prod1);
	if (node)
		std::cout << "Node inserted!\n";
	else
		std::cout << "*** ERROR! Couldn't insert node!\n";
}

void Remove(AVL* avl)
{
	int num;
	std::cout << "Remove number: ";
	std::cin >> num;
	avl->Remove(num);
}

void Search(AVL* avl)
{
	int num;
	std::cout << "Search number: ";
	std::cin >> num;
	NodeAVL* node = avl->Search(num);
	if (node)
		std::cout << "Node found:\n" << node->ToString();
	else
		std::cout << "*** ERROR! Couldn't find node!\n";
}

void Predecessor(AVL* avl)
{
	int num;
	std::cout << "Find predecessor of: ";
	std::cin >> num;
	NodeAVL* node = avl->Predecessor(num);
	if (node)
		std::cout << "Predecessor of " << num << ":\n" << node->ToString();
	else
		std::cout << "*** ERROR! There is no predecessor of " << num << "!\n";
}

void Successor(AVL* avl)
{
	int num;
	std::cout << "Find successor of: ";
	std::cin >> num;
	NodeAVL* node = avl->Successor(num);
	if (node)
		std::cout << "Successor of " << num << ":\n" << node->ToString();
	else
		std::cout << "*** ERROR! There is no successor of " << num << "!\n";
}

void FindMin(AVL* avl)
{
	NodeAVL* node = avl->FindMin();
	if (node)
		std::cout << "Minimum:\n" << node->ToString();
	else
		std::cout << "*** ERROR! Couldn't find minimum (tree is probably empty...)\n";
}

void FindMax(AVL* avl)
{
	NodeAVL* node = avl->FindMax();
	if (node)
		std::cout << "Maximum:\n" << node->ToString();
	else
		std::cout << "*** ERROR! Couldn't find maximum (tree is probably empty...)\n";
}

void TraverseInOrder(AVL* avl)
{
	std::cout << avl->TraverseInOrder() << '\n';
}

void TraversePreOrder(AVL* avl)
{
	std::cout << avl->TraversePreOrder() << '\n';
}

void TraversePostOrder(AVL* avl)
{
	std::cout << avl->TraversePostOrder() << '\n';
}

void Clear(AVL* avl)
{
	avl->Clear();
}
void ValorEstoque(AVL* avl)
{
    std::cout << avl->Valor() << '\n';
}

void ValorTotalEstoque(AVL* avl)
{
    std::cout << avl->ValorTotal() << '\n';
}

void QuantidadeMenos(AVL* avl)
{
    std::cout << avl->QuantidadeMenor() << '\n';
}
int main()
{

	AVL* avl = new AVL();

	const int SIZE = 0;
	int ids[SIZE] = {};
	for (int i = 0; i < SIZE; ++i){
    Prod produto;
    produto.setCodigo(i);
    produto.setNome("nome"+ std::to_string(ids[i]));
    produto.setValorUnitario(ids[i]);
    produto.setQtde(ids[i]);
		avl->Insert(produto.getCodigo(), produto);
    }
	int option = 0;
	do
	{
		std::cout << "*** Estoque de produtos ***\n"
			<< "[1] Inserir\n"
			<< "[2] Imprimir em ordem\n"
			<< "[3] Ver o Valor em estoque do produto\n"
			<< "[4] Ver o Valor do estoque\n"
			<< "[5] Ver produtos inferiores\n"
			<< "[0] Finalizar\n"
			<< "Opção: ";
		std::cin >> option;
		std::cout << '\n';

		switch (option)
		{
		case 1: Insert(avl); break;
    case 2: TraverseInOrder(avl); break;
		case 3: ValorEstoque(avl); break;
		case 4: ValorTotalEstoque(avl); break;
		case 5: QuantidadeMenos(avl); break;
		case 6: FindMin(avl); break;
		case 7: FindMax(avl); break;
		case 9: TraversePreOrder(avl); break;
		case 10: TraversePostOrder(avl); break;
		case 11: Clear(avl); break;
    case 12: Remove(avl); break;
		}

		std::cout << '\n';
	} while (option != 0);

	delete avl;
}
//#endif
