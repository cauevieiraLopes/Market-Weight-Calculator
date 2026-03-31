# 🛒 Market-Weight-Calculator
Este é um sistema de vendas simples desenvolvido em C++ para console. O objetivo do projeto é calcular o valor final de produtos vendidos por quilo (Kg), aplicando lógica de seleção e validação de dados de entrada.

# 📌 Sobre o Projeto
O programa simula um PDV (Ponto de Venda) básico onde o usuário pode escolher entre diferentes categorias de alimentos (Frutas, Arroz, Feijão e Carne) e informar o peso desejado. O sistema então processa o cálculo matemático baseado na tabela de preços interna.

# 🚀 Funcionalidades
* Menu de Produtos: Listagem clara de itens com seus respectivos preços por Kg.

* Validação de Seleção: Garante que o usuário escolha apenas as opções disponíveis no menu (1-4).

* Validação de Peso: Impede a entrada de pesos negativos ou nulos, assegurando a integridade do cálculo.

* Cálculo Dinâmico: Processa o valor total multiplicando o preço unitário pelo peso informado.

# 🛠️ Tecnologias e Conceitos Aplicados
Este código exercita fundamentos essenciais de programação:

* Entrada e Saída de Dados: Uso de std::cin e std::cout.

* Estruturas de Controle: * switch-case para o mapeamento de produtos e preços.

* do-while para ciclos de validação de entrada.

* Tipos de Dados: Uso de int para seleções e float para precisão em cálculos de peso e valores monetários.

# 📖 Tabela de Preços Referência

|Código|Produto|Preço por Kg|
|---|---|---|
|1|Fruta|R$ 3,50|
|2|Arroz|R$ 5,00|
|3|Feijão|R$ 8,00|
|4|Carne|R$ 35,00|

# ⚙️ Como executar

1. Clone ou baixe o arquivo ".cpp".

2. Compile utilizando um compilador C++ (GCC/G++): g++ sistema_vendas.cpp -o sistema_vendas

3. Execute o programa: ./sistema_vendas
