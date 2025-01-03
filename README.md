# Jogo da Adivinhação

Um simples jogo de adivinhação desenvolvido em C++ onde o jogador tenta adivinhar um número secreto com base no nível de dificuldade escolhido.

## 📝 Descrição
Neste jogo, o jogador tenta adivinhar um número secreto gerado aleatoriamente pelo programa. O jogador pode escolher entre três níveis de dificuldade: Fácil, Médio e Difícil, que determinam o número de tentativas disponíveis. A pontuação do jogador é calculada com base na precisão dos chutes, e o jogo exibe mensagens personalizadas dependendo se o jogador ganha ou perde.

---

## 🚀 Funcionalidades

- Escolha de dificuldade:
  - **Fácil (F):** 15 tentativas
  - **Médio (M):** 10 tentativas
  - **Difícil (D):** 5 tentativas
- Gerador de número aleatório entre 0 e 99.
- Mensagens de feedback indicando se o chute foi maior ou menor que o número secreto.
- Sistema de pontuação baseado na precisão dos chutes.
- Suporte ao idioma **Português** utilizando `setlocale`.

---

## 🛠️ Tecnologias Utilizadas

- Linguagem de Programação: **C++**
- Bibliotecas padrão:
  - `<iostream>`: Entrada e saída de dados.
  - `<locale>`: Configuração de idioma.
  - `<cstdlib>` e `<ctime>`: Geração de números aleatórios.

---

## 🖥️ Como Executar o Projeto

### Pré-requisitos
- Compilador C++ (por exemplo, GCC ou Clang).
- Ambiente configurado para rodar programas C++.

### Etapas
1. Clone este repositório:
   ```bash
   git clone https://github.com/leocsbh007/JogaAdivinhacaoCpp.git
   g++ -o jogo_adivinhacao jogo_adivinhacao.cpp
   ./jogo_adivinhacao
    ```
## 🎮 Como Jogar

1. Escolha o nível de dificuldade digitando:
   - `F` para Fácil
   - `M` para Médio
   - `D` para Difícil
2. Digite seu chute e tente adivinhar o número secreto.
3. Receba feedback se seu chute foi maior ou menor que o número secreto.
4. Continue até acertar ou esgotar as tentativas.
5. Ao final, confira sua pontuação.

---

## 📌 Notas Importantes

- Se nenhuma dificuldade válida for escolhida, o programa automaticamente configura o nível como **Difícil** (5 tentativas).
- O número secreto é gerado aleatoriamente a cada execução do programa.

---

## 📄 Licença

Este projeto é de código aberto e pode ser utilizado livremente para fins educacionais ou pessoais.

---

## ✨ Contato

Caso tenha dúvidas ou sugestões, entre em contato:

- **Nome:** Leonardo Souza
- **Instagram:** @embarcado_tech  
- **GitHub:** [\[Seu GitHub\]](https://github.com/leocsbh007)


