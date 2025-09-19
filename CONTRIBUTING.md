# Guia de Contribuição e Entrega de Exercícios

Olá! Para mantermos o projeto organizado e para que eu possa dar feedbacks de forma eficiente, é muito importante que você siga rigorosamente o padrão de entrega de exercícios descrito abaixo.

Este guia é focado na entrega das atividades da etapa de **Aquecimento / Nivelamento**.

## 🚀 Fluxo de Trabalho (Passo a Passo)

1.  **Faça um Fork:** Se ainda não fez, crie um "Fork" deste repositório para a sua conta do GitHub. Todo o seu trabalho será feito no **seu fork**.
2.  **Resolva os Exercícios:** Trabalhe nos exercícios propostos no `aquecimento/README.md` no seu computador local.
3.  **Crie a Estrutura de Pastas:** Para cada módulo que você completar, você deverá criar uma estrutura de pastas específica para a sua entrega.
4.  **Envie os Arquivos:** Adicione seus arquivos `.c` com as soluções dentro da pasta correta.
5.  **Faça um Pull Request:** Após "commitar" e "dar push" das suas soluções para o **seu fork**, abra um **Pull Request** para o repositório original da monitoria.

---

## 📂 Estrutura de Pastas para a Entrega

Todas as entregas devem ser feitas dentro da pasta `aquecimento/entregas/`. Dentro dela, você vai criar uma pasta com o seu nome de usuário do GitHub.

A estrutura final deve ser a seguinte:

```
aquecimento/
└── entregas/
    └── seu_nome_de_usuario/
        ├── modulo-01/
        │   ├── q1.c
        │   ├── q2.c
        │   └── ...
        ├── modulo-02/
        │   ├── q1.c
        │   └── ...
        └── ...
```

### 📌 Regras para a Entrega

1.  **Nome da Pasta Principal:** O nome da sua pasta dentro de `entregas/` deve ser **exatamente o seu nome de usuário do GitHub** (ex: `Luanbr10`). Isso evita conflitos e facilita a identificação.
2.  **Nomes dos Arquivos:** Os arquivos `.c` devem ser nomeados como `qX.c`, onde `X` é o número da questão correspondente no checklist do aquecimento.
    * `q1.c` para a questão 1, `q2.c` para a questão 2, e assim por diante.
3.  **Comentários no Código:** É uma boa prática incluir um comentário no início de cada arquivo `.c` indicando a qual exercício ele se refere.
    * Exemplo: `// Solução para o Exercício 1 do Módulo 1 - Idade em dias`
4.  **Um Pull Request por Aluno:** Mantenha todas as suas entregas em um único Pull Request, se possível. Você pode continuar adicionando commits ao mesmo branch e o Pull Request será atualizado automaticamente.

---

### ✨ Exemplo Completo

Se a usuária **"ana-dev"** estivesse entregando as soluções dos **Módulos 1 e 2**, a estrutura de pastas e arquivos dela ficaria assim:

```
aquecimento/
└── entregas/
    └── ana-dev/
        ├── modulo-01/
        │   ├── q1.c
        │   ├── q2.c
        │   ├── q3.c
        │   ├── q4.c
        │   └── q5.c
        └── modulo-02/
            ├── q1.c
            ├── q2.c
            └── q3.c
```

### ⚡ Dica: Criando Pastas Rapidamente

Para criar a estrutura de um módulo de uma vez só via terminal, você pode usar o comando:

```bash
mkdir -p aquecimento/entregas/seu_nome_de_usuario/modulo-01
```

---

Se tiver dúvidas sobre `git`, `fork` ou `pull requests`, entre no Discord da monitoria e peça ajuda!
