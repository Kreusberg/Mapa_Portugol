TODO:

* aceitar um inteiro sendo a quantidade de turmas
* aceitar um inteiro sendo a quantidade de alunos de cada turma
* salvar as notas de cada aluno e tirar a média deles
* imprimir na tela a melhor média
* traduzir tudo para Portugol

Anotações:

Como não sabemos quantos alunos serão, podemos solicitar de antemão, e com o resultado, por dentro do array. Desta forma não gastaremos espaço adicional desnecessáriamente na memória

Viabilizar a alteração da variável notasTurma de um array para somente um int. Ao invés de fazermos um "scanf()" e passarmos "j" como índice, podemos criar uma variável temporária para gaurdar o valor e então, na linha 26 ("somaNotasAtuais += notasTurma[j]"), substituir o notasTurma[j] pela var temp. - feito!