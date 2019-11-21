#include <iostream>
#include <string.h>
using namespace std;
/*
	Conta todas as letras 'letra' contidas em 'texto'
*/


/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/


/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{ 
	size_t pos = texto.find(palavra);
	int contador = 0;
	while(pos != string::npos)
	{
		contador++;
		texto = texto.substr(pos + 1);
		pos = texto.find(palavra);
	}
	return contador;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
string substituirPalavras(string palavra1, string palavra2, string texto)
{
	size_t pos = texto.find(palavra1);
	while(pos != string::npos)
	{
			texto.replace(pos, palavra1.length(), palavra2);
			pos = texto.find(palavra1);
	}
	return texto;
}

main(){
string txt;
char let, let2;
string pal, pal2, tx2;

	cout << "Entre com o texto para fazer o teste:";
	getline(cin, txt);
	cout<<"\n Letra a procurar: ";
	cin>> let;
	cout<<"\n Letra para substituir: ";
	cin>>let2;
	cout<<"\n Palavra a procurar: ";
	cin>>pal;
	cout<<"\n Palavra a substituir: ";
	cin>>pal2;
	
	int qnt2;
	qnt2 = contaPalavras(pal, txt);
	cout<<"\n A quantidade da repeticao da plavra '"<<pal<<"' eh: "<<qnt2;
	tx2=substituirPalavras(pal, pal2, txt);
	cout<<"\n O novo texto eh: "<<tx2;

}

