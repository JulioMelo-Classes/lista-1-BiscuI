#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
	int numAnterior= 1 , numPenultimo=1;
	fib_below_n.push_back(numPenultimo);
	fib_below_n.push_back(numAnterior);

	int proxTermo = numAnterior+numPenultimo;

	while(fib_below_n.back<n){
		fib_below_n.push_back(proxTermo);
    }
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return std::vector<unsigned int>{};
}
