#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
	vector<unsigned int> vetor;
	int numAnterior = 1, numPenultimo = 1;
	vetor.push_back(numPenultimo);
	vetor.push_back(numAnterior);

	int proxTermo = numAnterior + numPenultimo;

	while (proxTermo < n) {
		vetor.push_back(proxTermo);
		numAnterior = vetor[vetor.size() - 1];
		numPenultimo = vetor[vetor.size() - 2];
		proxTermo = numAnterior + numPenultimo;
	}
    }
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return vetor;
}
