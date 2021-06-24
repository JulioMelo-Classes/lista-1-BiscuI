/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    #include <iostream>
using std::cin;
using std::cout;

int main(){
    int m, n, soma=0;
    cin>>m;
    cin>>n;

    if(n>=-10000 && n<=1000){
        if(n>0){
            //escreve a soma dos n primeiros inteiros consecutivos a partir de m (inclusive)
            for (int i = m; i < n; i++)
            {
                soma+=i;
            }
            cout<<soma<<endl;
        }else if(n<0){
            for(int i= m; i>n; i--){
                soma+=i;
            }
            //a soma dos n primeiros inteiros antecedentes a partir de m (inclusive)
            cout<<soma<<endl;
        }
    }else{
        cout<<"O valor de n precisa estar entre -10000 e 1000. Por favor, insira um valor válido"<<endl;
    }

    return 0;
}
    return 0;
}
