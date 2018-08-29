#include "pedido.h"

using namespace std;

pedido::pedido(){};

pedido::pedido(int number, string description, int quant, float price){
	numero = number;
	descricao = description;
	quantidade = quant;
	preco = price;
}

int pedido::getNumero(){
	return numero;
}

string pedido::getDescricao(){
	return descricao;
}

float pedido::getPreco(){
	return numero;
}

int pedido::getQuantidade(){
	return quantidade;
}
