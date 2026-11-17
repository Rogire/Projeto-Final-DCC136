## Projeto final DCC136 - Implementação de Metaheurísticas

O presente documento detalha as exigências para o desenvolvimento e implementação de uma metaheurística aplicada à resolução de problemas de otimização. O trabalho é destinado a ser realizado em grupos de três alunos, seguindo um ciclo que envolve planejamento (projeto), implementação e avaliação experimental rigorosa.

---

**Alunos**: Igor Correa, Arthur Malvacini

### 1. Objetivo Geral do Trabalho
Desenvolver e implementar uma **metaheurística** para resolver um problema específico de otimização, aplicando os conceitos estudados na disciplina através da modelagem, desenvolvimento algorítmico, definição dos parâmetros e a realização de experimentos computacionais para avaliar o desempenho da abordagem escolhida.

### 2. Etapas do Trabalho (Fases)
O trabalho é dividido em duas entregas principais: um projeto inicial focado no planejamento e outro na implementação completa com avaliação experimental.

#### Fase A: Primeira Entrega – Projeto do Trabalho (Prazo: 23/11/2026)
Esta fase exige a elaboração de um **projeto** detalhado, sem necessidade da implementação final ou resultados experimentais neste momento. O foco é na consistência e viabilidade metodológica.

*   **Descrição Detalhada do Projeto (Apresentação em Slides):** Deve cobrir os seguintes tópicos:
    1.  **Descrição do Problema:** Objetivo, restrições e exemplo ilustrativo para compreensão da situação-problema.
    2.  **Aplicação Prática:** Contexto real de aplicação, relevância e motivação para a resolução do problema.
    3.  **Estratégias Encontradas na Literatura:** Revisão das abordagens existentes (fontes de referência), descrição dos métodos utilizados por outros autores no contexto similar ($\rightarrow$ representação da solução, função objetivo, características algorítmicas).
    4.  **Estratégia de Solução Proposta:** Detalhamento completo sobre a metaheurística sorteada:
        *   Representação utilizada para o problema (solução).
        *   Definição precisa da Função Objetivo e mecanismos de avaliação das soluções.
        *   Descrição detalhada como a metaheurística será adaptada ao problema, incluindo operadores principais dos algoritmos.
        *   Estratégia inicialização ($\rightarrow$ se aplicável) e tratamento rigoroso das restrições do problema.
    5.  **Projeto dos Experimentos:** Planejamento de todas as instâncias disponíveis (quantidades, características), fontes/links para acesso às instâncias, planejamento da quantidade de execuções com diferentes sementes aleatórias (*seeds*). Definição das métricas que serão usadas para avaliar o desempenho.

#### Fase B: Entrega Final – Implementação e Avaliação Experimental (Prazo: 07/12/2026)
Esta fase exige a entrega da implementação funcional, dos resultados experimentais detalhados e uma análise crítica robusta. Esta é composta por seis etapas obrigatórias:

1.  **Modelagem e Representação:** Implementar computacionalmente o modelo do problema, definir a função objetivo e os mecanismos de avaliação das soluções viáveis.
2.  **Implementação da Metaheurística:** Desenvolver o algoritmo sorteado, adaptando seus componentes (mecanismos/operadores) às especificidades exatas do problema escolhido.
3.  **Definição dos Parâmetros:** Estabelecer os parâmetros de controle utilizados na execução e justificar criticamente as escolhas feitas para esses parâmetros.
4.  **Execução dos Experimentos:** Executar o algoritmo sobre todas as instâncias selecionadas, utilizando múltiplas execuções com diferentes sementes aleatórias (*seeds*).
5.  **Análise dos Resultados:** Apresentar e discutir os resultados obtidos usando métricas adequadas (comparação entre algoritmos) para analisar detalhadamente o comportamento do algoritmo desenvolvido em relação às referências da literatura.
6.  **Apresentação e Discussão Final:** Elaborar um relatório que apresente todo o desenvolvimento, as decisões de implementação/configuração dos experimentos e as conclusões críticas obtidas na análise.

### 3. Considerações Finais Importantes
*   **Foco:** A qualidade final da solução encontrada não é o critério principal de avaliação, são valorizadas **a corretude da implementação**, a solidez do planejamento experimental, e a capacidade crítica na análise dos resultados obtidos em comparação com referências teóricas (literatura).
*   **Código-Fonte:** O código deve ser organizado. No relatório final (**07/12/2026**), o link para o código-fonte é exigido, no entanto, **o próprio código não deve ser apresentado diretamente nas publicações**, focando na análise e discussão dos resultados obtidos nos experimentos realizados com ele.
*   Todos os integrantes devem participar ativamente do desenvolvimento da implementação pelo grupo.
