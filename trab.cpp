#include <iostream>
#include <string.h>
using namespace std;
/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contletras(string texto)
{	int tam;
	tam=texto.length();
	int ql=0; 
	int i=0;
	while(i<tam)
	{
		if(texto[i]!=' ')
		{
		 ql=ql+1;
		}	
		i++;
	}
	return ql;
}
/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
string substitui(string texto, char letra , char letra2)
{

 	int	tam=texto.length();
	int i=0;
	while(i<tam)
	{
		if(texto[i]==letra)
		{
		texto[i]=letra2;
		}
		i++;	
	}
	return texto;
}

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
string pal, pal2, tx2,tx1,tx3;

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
	tx1=txt;
	int qnl;
	qnl=contletras(tx1);
	cout<<"\n A quantidade de letras eh: "<<qnl;
	tx3=substitui(tx1, let, let2);
	cout<<"\n O texto com a letra trocada eh: "<<tx3;
	int qnt2;
	qnt2 = contaPalavras(pal, txt);
	cout<<"\n A quantidade da repeticao da plavra '"<<pal<<"' eh: "<<qnt2;
	tx2=substituirPalavras(pal, pal2, txt);
	cout<<"\n O novo texto eh: "<<tx2;
	
	
}

