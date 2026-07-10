# Estudos em C

Repositório dedicado aos meus estudos da linguagem C, com foco em lógica de programação. Aqui eu vou guardando pequenos exercícios praticados durante o aprendizado, evoluindo de conceitos básicos até estruturas mais avançadas, além de projetos completos que unem os conceitos estudados.

## Objetivo

Fixar e praticar lógica de programação usando C como linguagem base, indo do básico ao intermediário:

- Variáveis e condicionais
- Estruturas de repetição (`for`, `while`, `do while`)
- Vetores
- Strings e `strcpy`
- Struct
- Funções (com retorno e `void`)
- Ponteiros
- Alocação dinâmica de memória (`malloc`, `free`)
- Números aleatórios (`rand`, `srand`)
- Ordenação (bubble sort)

## Organização

```
estudos-C-/
├── README.md
├── 01_vetor_maior_menor_soma_media.c
├── 02_vetor_produtos_faixa_50.c
├── 03_vetor_faixas_notas.c
├── 04_funcao_soma_multiplicacao.c
├── 05_funcao_void_media_aluno.c
├── 06_funcao_vetor_soma_maior_mostrar.c
├── 07_vetor_string_Function.c
├── 08_struct_vetor_funcao_cadastro_alunos.c
├── 09_menu_cadastro_alunos.c
├── 10_ponteiro_basico.c
├── 11_ponteiro_funcao_dobrar.c
├── 12_ponteiro_funcao_trocar.c
├── 13_malloc_vetor_int.c
├── 14_malloc_vetor_struct.c
├── 15_malloc_funcao_produto.c
└── projetos/
    ├── proj_game_pit_stop.c
    └── proj_qualy_simulation.c
```

## Exercícios

Cada arquivo `.c` representa um exercício isolado e funcional, com um comentário no topo explicando o objetivo.

| Arquivo | Conceito praticado |
|---|---|
| `01_vetor_maior_menor_soma_media.c` | Vetor: encontrar maior, menor, soma e média de uma lista de números |
| `02_vetor_produtos_faixa_50.c` | Vetor: contagem condicional por faixa de valores (preços/produtos) |
| `03_vetor_faixas_notas.c` | Vetor + `if/else if` encadeado: classificar notas por faixa de desempenho |
| `04_funcao_soma_multiplicacao.c` | Função: parâmetros e retorno (`return`) com cálculos simples |
| `05_funcao_void_media_aluno.c` | Função `void`: calcular e exibir resultado dentro da própria função |
| `06_funcao_vetor_soma_maior_mostrar.c` | Função + vetor: somar, encontrar maior e exibir todos os valores via funções separadas |
| `07_vetor_string_Function.c` | Vetor + string + função: manipulação de vetores de char com `strcpy` |
| `08_struct_vetor_funcao_cadastro_alunos.c` | Struct + vetor + função: média geral e exibição de aprovados |
| `09_menu_cadastro_alunos.c` | Menu interativo com `do while` + `switch` + struct + vetor + contador de cadastros |
| `10_ponteiro_basico.c` | Ponteiro: modificar variável via endereço de memória |
| `11_ponteiro_funcao_dobrar.c` | Ponteiro + função: modificar valor original de uma variável dentro de uma função |
| `12_ponteiro_funcao_trocar.c` | Ponteiro + função: troca de valores entre duas variáveis via ponteiros |
| `13_malloc_vetor_int.c` | Alocação dinâmica: vetor de `int` com tamanho definido em tempo de execução |
| `14_malloc_vetor_struct.c` | Alocação dinâmica: vetor de struct com `malloc` e `free` |
| `15_malloc_funcao_produto.c` | Alocação dinâmica + função + menu: sistema de cadastro e edição de produtos |

## Projetos

Programas completos que unem os conceitos estudados nos exercícios.

| Arquivo | Descrição |
|---|---|
| `proj_game_pit_stop.c` | Simulador de estratégia de pit stop de F1 — gerencia compostos de pneu, degradação, alertas e relatório final de corrida |
| `proj_qualy_simulation.c` | Simulador de sessão de qualifying de F1 com Q1, Q2 e Q3 — usa `rand` para gerar tempos baseados em habilidade do piloto, motor e aerodinâmica do carro, com bubble sort para ordenação e eliminação entre fases |
| `proj_sys_notas` | Sistema de cadastro e atualização de notas criado para ajudar professores |

## Sobre o aprendizado

Os exercícios seguem uma progressão deliberada — cada conceito novo é introduzido em exercícios isolados antes de aparecer nos projetos. Os projetos de F1 são o ponto de convergência de tudo que foi estudado: struct, vetor, função, ponteiro, alocação dinâmica e aleatoriedade aplicados num contexto real e motivador.

O próximo passo natural é arquivos (`fopen`, `fwrite`, `fread`) para persistência de dados, seguido da migração para C++.

## Status

Em construção — novos exercícios e projetos são adicionados conforme novos conceitos são estudados.
Em construção — novos exercícios são adicionados conforme novos conceitos são estudados e praticados.
