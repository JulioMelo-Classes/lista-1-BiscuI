#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
a lógica funciona apenas para quando n é n>0, além disso vc não processa a entrada inteira
vou considerar 50%
*/

int main(){
    int m, n, soma=0;
    cin>>m;
    cin>>n;

    if(n>=-10000 && n<=1000){
        if(n>0){
            //escreve a soma dos n primeiros inteiros consecutivos a partir de m (inclusive)
            for (int i = 0; i < n; i++)
            {
                soma+=i+m;
            }
            cout<<soma<<endl;
        }else if(n<0){
            for(int i= 0; i>n; i--){
                soma+=i+m;
            }
            //a soma dos n primeiros inteiros antecedentes a partir de m (inclusive)
            cout<<soma<<endl;
        }
    }else{
        cout<<"O valor de n precisa estar entre -10000 e 1000. Por favor, insira um valor válido"<<endl;
    }

    return 0;
}
