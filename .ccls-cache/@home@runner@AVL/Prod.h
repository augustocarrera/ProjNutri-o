/*
  Augusto Esteves Carrera - 32114842
  Gustavo Fernandes Costa - 32161093
  Mateus Yoon - 32159609
*/
#ifndef __HEADER__
#define __HEADER__
#include <iostream>
using namespace std;

class Prod {
  private:
    int m_codigo;
    string m_nome;
    int m_qtde;
    float m_ValorUnitario;
    
  public:
    Prod(int codigo, string nome, int qtde, float ValorUnitario);
    Prod();
  ~ Prod();   

  int getCodigo();
  string getNome();
  int getQtde();
  float getValorUnitario();

  void setCodigo(int codigo);
  void setNome(string nome);  
  void setQtde(int qtde);
  void setValorUnitario(float ValorUnitario);
};
#endif