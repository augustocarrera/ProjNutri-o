  /*
  Augusto Esteves Carrera - 32114842
  Gustavo Fernandes Costa - 32161093
  Mateus Yoon - 32159609
*/
#include <iostream>
#include "Prod.h"
using namespace std;

  Prod::Prod(int codigo, string nome, int qtde, float ValorUnitario)
{
  this-> m_codigo = codigo;
  this-> m_nome = nome;
  this-> m_qtde = qtde;
  this-> m_ValorUnitario = ValorUnitario;
}

int Prod::getCodigo(){return m_codigo;};
string Prod::getNome(){return m_nome;};
int Prod::getQtde(){return m_qtde;};
float Prod::getValorUnitario(){return m_ValorUnitario;};

void Prod::setCodigo(int codigo)
{
  m_codigo = codigo;
}
void Prod::setNome(string nome)
{
  m_nome = nome;
}
void Prod::setQtde(int qtde)
{
  m_qtde = qtde;
}
void Prod::setValorUnitario(float ValorUnitario)
{
  m_ValorUnitario = ValorUnitario;
}

Prod::Prod(){};
Prod::~Prod(){};