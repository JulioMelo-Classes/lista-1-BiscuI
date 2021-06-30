#include <iostream>
using std::cin;
using std::cout;
using std::endl;


const int SIZE = 5; // input size.

/*
tinha um erro de compilação simples, mas vou considerar
*/
int main(void)
{
    int n, i=0, contador=0;

	while(i<5){
		cin>>n;

		if(n<0){
			contador++;
		}

		i++;
	}
	cout<<contador<<endl;
	return 0;
}
