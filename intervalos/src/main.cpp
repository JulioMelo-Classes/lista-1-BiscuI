/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

/*
vou considerar 60% se voce corrigir os erros de typecasting e os erros na impressão deve funcionar
*/
int main(void)
{
    int n, total=0;
	int intervaloUm=0, intervaloDois=0, intervaloTres=0, intervaloQuatro=0, intervaloFora=0;

	while(cin>>std::ws>>n){
		if(n>=0 && n<25){
			intervaloUm++;
			total++;
		}else if(n>=25 && n<50){
			intervaloDois++;
			total++;
		}else if(n>=50 && n<75){
			intervaloTres++;
			total++;
		}else if(n>=75 && n<100){
			intervaloQuatro++;
			total++;
		}else{
			intervaloFora++;
			total++;
		}
	}

	//float percentUm = float(intervaloUm/total)*100; //o typecasting não se faz assim, a sintaxe é (float) expressao
	float percentUm = (float)intervaloUm/total*100;
	float percentDois = float(intervaloDois/total)*100;
	float percentTres = float(intervaloTres/total)*100;
	float percentQuatro = float(intervaloQuatro/total)*100;
	float percentFora = float(intervaloFora/total)*100;

	cout<<percentUm<<endl;
	cout<<percentDois<<endl;
	cout<<percentTres<<endl;
	cout<<percentQuatro<<endl;
	cout<<percentFora<<endl;
    return 0;
}
