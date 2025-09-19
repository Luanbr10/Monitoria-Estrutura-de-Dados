# 🔥 Aquecimento: Exercícios de Nivelamento em C

Olá! Seja bem-vindo(a) à etapa de nivelamento.

O objetivo desta seção é garantir que você tenha uma base sólida em Lógica de Programação e nos fundamentos da linguagem C antes de avançarmos para os tópicos de Estruturas de Dados. Resolva os exercícios propostos abaixo para praticar e solidificar seu conhecimento.

### 📝 Instruções de Entrega

1.  **Trabalhe no seu Fork:** Lembre-se de fazer todas as alterações na **sua cópia (fork)** do repositório.
2.  **Siga a Ordem:** Resolva os exercícios na ordem proposta, pois a complexidade aumenta gradualmente a cada módulo.
3.  **Crie os Arquivos:** Para cada questão, crie um arquivo `.c` com a solução, seguindo a nomeclatura indicada.
4.  **Estrutura de Pastas:** Organize seus arquivos na estrutura de entrega correta.
5.  **Consulte as Regras:** Para todos os detalhes sobre como organizar as pastas e enviar suas soluções, leia atentamente o **[Guia de Contribuição e Entrega](../../CONTRIBUTING.md)** que está na raiz do repositório.

As soluções de gabarito para os exercícios estão disponíveis nas pastas `-gabarito` para consulta, mas o aprendizado real vem da sua tentativa de resolver os problemas primeiro!

---

##  Lista de Exercícios

### Módulo 1: Sintaxe Básica e Fluxo de Controle

> [!TIP]
> As soluções para este módulo estão na pasta `modulo-01-gabarito`. **[Clique aqui para ver o gabarito](./modulo-01-gabarito/)**.

* **Questão 1:** Faça um programa que leia o nome completo, o sexo (`char`) e o salário de um funcionário e imprima os dados formatados, imprimir o salario com duas casas decimais, use %.2f.
    *(Nome do arquivo: `q2.c`)*

* **Questão 2:** Faça um programa que leia o raio de um círculo e calcule sua área (`π * r²`) e seu perímetro (`2 * π * r`).
    *(Nome do arquivo: `q3.c`)*

* **Questão 3:** Faça um programa que leia 3 notas, calcule a média e imprima "Aprovado", "Recuperação" ou "Reprovado" (média >= 7, >= 5, < 5).
    *(Nome do arquivo: `q4.c`)*

* **Questão 4:** Faça um programa que imprima a tabuada de um número N (de 1 a 10), onde N é fornecido pelo usuário.
    *(Nome do arquivo: `q5.c`)*



### Módulo 2: Funções e Vetores (Arrays)

> [!TIP]
> As soluções para este módulo estão na pasta `modulo-02-gabarito`. **[Clique aqui para ver o gabarito](./modulo-02-gabarito/)**.

* **Questão 1:** Crie uma função `int ehPrimo(int numero)` que retorna 1 se o número for primo e 0 caso contrário. Use-a em um programa principal para testar.
    *(Nome do arquivo: `q1.c`)*

* **Questão 2:** Faça um programa que leia 5 notas, armazene-as em um vetor e, ao final, crie funções para imprimir a maior nota, a menor nota e a média da turma.
    *(Nome do arquivo: `q2.c`)*

* **Questão 3:** Crie uma função `void inverteVetor(int vetor[], int tamanho)` que inverte a ordem dos elementos de um vetor.
    *(Nome do arquivo: `q3.c`)*



### Módulo 3: Ponteiros e Memória Dinâmica

> [!TIP]
> As soluções para este módulo estão na pasta `modulo-03-gabarito`. **[Clique aqui para ver o gabarito](./modulo-03-gabarito/)**.

* **Questão 1:** Declare uma variável `int x = 42;` e um ponteiro `int *p;`. Faça `p` apontar para `x`. Imprima o valor de `x`, o endereço de `x`, o valor de `p` e o valor que 'p' está apontado.
    *(Nome do arquivo: `q1.c`)*

* **Questão 2:** Crie uma função `void troca(int *a, int *b)` que recebe o endereço de duas variáveis e troca os valores entre elas. Teste-a na `main`. Caso não tenha percebido, quero que faça com ponteiro, então você deve acessar o enredeço de memória da variável. 
    *(Nome do arquivo: `q2.c`)*

* **Questão 3:** Faça um programa que pergunte ao usuário o tamanho `N`. Aloque dinamicamente um vetor de `N` inteiros, preencha-o, imprima seus valores e com um for, e no final, libere a memória alocada com `free()`. Quero que você faça a verificação da alocação, pode fazer com malloc ou calloc, caso tenha dúvida nessa atividade, pode me mandar mensagem, ou olhar o gabarito, sem copiar.
    *(Nome do arquivo: `q3.c`)*


### Módulo 4: Tipos de Dados Compostos (Structs)

> [!TIP]
> As soluções para este módulo estão na pasta `modulo-04-gabarito`. **[Clique aqui para ver o gabarito](./modulo-04-gabarito/)**.

* **Questão 1:** Defina uma `struct` `Aluno` com os campos `char nome[50]`, `int matricula` e `float nota`. Declare uma variável do tipo `Aluno`, preencha os dados e imprima-os.
    *(Nome do arquivo: `q1.c`)*

* **Questão 2:** Usando a `struct` do exercício anterior, crie uma função `void imprimeAluno(struct Aluno *a)` que recebe um ponteiro para um aluno e imprime seus dados na tela usando o operador `->`.
    *(Nome do arquivo: `q2.c`)*

---

Após concluir e entregar os exercícios, você estará com a base necessária para começar os estudos de Estrutura de Dados. Se sentir muita dificuldade, especialmente no **Módulo 3 (Ponteiros)**, me procure na monitoria!