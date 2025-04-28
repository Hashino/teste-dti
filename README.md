# Média de Turma

## Instruções de Uso

### Compilação
A aplicação é compilada com o comando `make` executado na pasta raíz do
repositório.

### Execução
Aplicação executada com o comando `make run` executado na pasta raíz do
repositório, ou diretamente executando o binário `./bin/main` gerado apos
compilação.

Durante a execução a própria aplicação guia o usuário sobre as entradas
necessárias.

## Premissas

### Lingugagem C
Instruções de implementação sugerem a utilização de React para a construção de
interface do usuário, porém as especificações da aplicação apontam para uma
aplicação de terminal. Assumi que a aplicação é de terminal e implementei em C,
uma linguagem pervasiva, performática e que tenho maior dominio.

### Entradas Únicas
Especificação do problema sugere que a saída da aplicação contenha as médias de
cada aluno, porém os exemplos de entrada sugerem que haverão linhas únicas de
entrada para cada aluno. Em caso real de implementação tentaria obter
esclarecimentos junto ao resto da equipe e com o cliente final. Assumi que houve
um erro de especificação e na verdade haverá apenas uma entrada para cada aluno,
tornando a saída apenas as notas de cada aluno, não a média de cada aluno.

## Decisões

### Lingua Inglesa
Construi a base de códigos com nomes de objetos e comentários na lingua inglesa.
Fiz isso já que a lingua é a lingua franca da programação e se integra melhor
com as palavras chave da própria linguagem C que é também em inglês. Tornando a
leitura do código mais fluida e coesa.

### Simplicidade
Ao se construir grandes bases de código, manter os escopos o mais simples
possivel (ainda atingindo os objetivos de especificação das aplicações) previne
o crescimento desnecessário da base e possível criação e propagação de bugs.
Justamente por isso optei por uma interpretação das especificações que gera a
aplicação mais simples. Em caso de produção teria me comunicado com o cliente
para esclarecimentos e ideias da utilidae final da aplicação.
## Considerações
Aplicação simples que usa noções básicas de lógica de programação e de
interpretação e cumprimento de especificações. Nada de nota a ser considerado.
