#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
using namespace std;

class pedido
{
	public:
		pedido();
		pedido(int number, string description, int quant, float price);
		int getNumero();
		string getDescricao();
		int getQuantidade();
		float getPreco();		
		
		
	private:
		int numero;
		string descricao;
		int quantidade;
		float preco;
};

#endif
