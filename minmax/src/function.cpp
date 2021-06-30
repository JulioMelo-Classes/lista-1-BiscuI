#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*
como tem muitos erros de compilação e alguns erros conceituais não vou considerar
*/
std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.
    int count=0;

	pair<int, int> min_max;
	pair<int, int> indices;

	//cin>>V[0]; //não entendi pq vc usou cin aqui
	min_max.first = V[0];
	min_max.second = V[0];
	indices.first = count;
	indices.second = count;
	count++;
	while(count<n){ 
		//cin>>vetor[count]; //não era essa a ideia...

		if(vetor[count]<min_max.first){
			min_max.first = V[count];
			indices.first = count;
		}

		if(vetor[count]>=min_max.second){
			min_max.second = V[count];
			indices.second = count;
		}
		count++;
	}

	//cout<<indices.first<<", "<<indices.second<<endl;
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return { indices.first, indices.second };
}
