#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

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
