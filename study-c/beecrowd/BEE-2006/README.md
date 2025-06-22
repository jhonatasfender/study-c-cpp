# BEE-2006: Identificando o Chá

## Descrição do Problema

O problema pede para contar quantos competidores acertaram o tipo de chá correto.

### Entrada
- **Linha 1**: Um inteiro T (1 ≤ T ≤ 4) representando o tipo correto de chá
- **Linha 2**: Cinco inteiros A, B, C, D e E (1 ≤ A, B, C, D, E ≤ 4) representando as respostas dos competidores

### Saída
- Um inteiro representando o número de competidores que acertaram

### Exemplo
```
Entrada:
1
1 2 3 2 1

Saída:
2
```

## Implementações

### 1. BEE-2006_basic.c
- **Descrição**: Implementação básica e funcional
- **Características**: 
  - Código simples e direto
  - Sem validações de entrada
  - Funcional para o problema

### 2. BEE-2006_improved.c
- **Descrição**: Implementação melhorada com boas práticas
- **Características**:
  - Validação de entrada
  - Tratamento de erros
  - Constantes definidas
  - Documentação detalhada
  - Nomes de variáveis descritivos
  - Códigos de retorno apropriados

## Testes

### Script de Teste em Shell (test_BEE-2006.sh)
- **Descrição**: Testes de caixa preta que executam ambos os programas sem alterar o código original
- **Características**:
  - Testa tanto `BEE-2006_basic.c` quanto `BEE-2006_improved.c`
  - Testa o programa via stdin/stdout
  - Não requer alterações no código
  - 7 casos de teste diferentes para cada programa
  - Output colorido e informativo
  - Relatório de resultados separado para cada programa
  - Resumo geral final

## Como Compilar e Executar

```bash
# Compilar a versão básica
gcc -o BEE-2006_basic BEE-2006_basic.c

# Compilar a versão melhorada
gcc -o BEE-2006_improved BEE-2006_improved.c

# Executar
./BEE-2006_basic
./BEE-2006_improved

# Executar os testes automatizados
./test_BEE-2006.sh
```

## Casos de Teste Incluídos

1. **Exemplo oficial**: Tipo 1, respostas [1,2,3,2,1] → 2 acertos
2. **Todos acertaram**: Tipo 3, respostas [3,3,3,3,3] → 5 acertos
3. **Ninguém acertou**: Tipo 1, respostas [2,2,2,2,2] → 0 acertos
4. **Apenas um acertou**: Tipo 4, respostas [1,2,3,4,5] → 1 acerto
5. **Metade acertou**: Tipo 2, respostas [2,1,2,3,2] → 3 acertos
6. **Caso limite tipo 1**: Tipo 1, respostas [1,1,1,1,1] → 5 acertos
7. **Caso limite tipo 5**: Tipo 5, respostas [5,1,2,3,4] → 1 acerto 