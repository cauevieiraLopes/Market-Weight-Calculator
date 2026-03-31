#include <iostream>

int main()
{
	int produto;
	float pesoKg;
	
	do
	{
		std::cout<<"===== SISTEMA SIMPLES DE VENDA ====="<<std::endl;
		std::cout<<std::endl;
		std::cout<<"1. Fruta\t- R$ 3.50/Kg\n2. Arroz\t- R$ 5.00/Kg\n3. Feijão\t- R$ 8.00/Kg\n4. Carne\t- R$ 35.00/Kg"<<std::endl<<std::endl;
		std::cout<<"Selecione o produto (1-4): ";
		std::cin>>produto;
	}while(produto > 4 || produto < 1);
	
	std::cout<<std::endl<<std::endl;
	switch(produto)
	{
		case 1:
			std::cout<<"Produto selecionado: Fruta"<<std::endl;
			std::cout<<"Preço: R$ 3.50/Kg"<<std::endl;
			break;
		case 2:
			std::cout<<"Produto selecionado: Arroz"<<std::endl;
			std::cout<<"Preço: R$ 5.00/Kg"<<std::endl;
			break;
		case 3:
			std::cout<<"Produto selecionado: Feijão"<<std::endl;
			std::cout<<"Preço: R$ 8.00/Kg"<<std::endl;
			break;
		case 4:
			std::cout<<"Produto selecionado: Carne"<<std::endl;
			std::cout<<"Preço: R$ 35.00/Kg"<<std::endl;
			break;
	}
	
	std::cout<<std::endl<<std::endl;
	std::cout<<"Informe o peso em kg: ";
	std::cin>>pesoKg;
	
	if(pesoKg <= 0)
	{
		do
		{
			std::cout<<"Peso inválido! O peso deve ser maior que zero."<<std::endl;
			std::cout<<"Informe o peso em kg: ";
			std::cin>>pesoKg;
		}while(pesoKg <= 0);
	}
	
	switch(produto)
	{
		case 1:
			std::cout<<"Produto escolhido: Fruta\nPreço: R$ 3.50/Kg"<<std::endl;
			std::cout<<"Peso (Kg): "<<pesoKg<<std::endl;
			std::cout<<"Valor total a pagar: R$ "<<3.5 * pesoKg;
			break;
		case 2:
			std::cout<<"Produto escolhido: Arroz\nPreço: R$ 5.00/Kg"<<std::endl;
			std::cout<<"Peso (Kg): "<<pesoKg<<std::endl;
			std::cout<<"Valor total a pagar: R$ "<<5 * pesoKg;
			break;
		case 3:
			std::cout<<"Produto escolhido: Feijão\nPreço: R$ 8.00/Kg"<<std::endl;
			std::cout<<"Peso (Kg): "<<pesoKg<<std::endl;
			std::cout<<"Valor total a pagar: R$ "<<8 * pesoKg;
			break;
		case 4:
			std::cout<<"Produto escolhido: Carne\nPreço: R$ 35.00/Kg"<<std::endl;
			std::cout<<"Peso (Kg): "<<pesoKg<<std::endl;
			std::cout<<"Valor total a pagar: R$ "<<35 * pesoKg;
			break;
	}
	return 0;
	
}
