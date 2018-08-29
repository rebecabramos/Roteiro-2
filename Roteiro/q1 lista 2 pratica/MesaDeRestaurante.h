#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "pedido.h"

class MesaDeRestaurante
{
	public:
		MesaDeRestaurante();
		void adicionarAoPedido(pedido p);
		double calculaTotal();
		void zeraPedidos();
	
	private:
		pedido pedidos[10];
		int iAtual;
		
};

#endif
