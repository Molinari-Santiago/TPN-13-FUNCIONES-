#include <bits/stdc++.h>
using namespace std;
int Consonantes(string tex);
int Vocales(string tex);
int Numeros(string tex);
int main(){
	string tex;
	cout<<"ingrese texto: "<<endl;
	getline(cin, tex);
	cout<<Consonantes(tex)<<endl;
	cout<<Vocales(tex)<<endl;	
	cout<<Numeros(tex);
return 0;}
int Consonantes(string tex){
	int cont=0;
	for(int i=0;i<tex.size();i++){
       if(tex[i] == 'b'||tex[i] == 'c'||tex[i] == 'd'||tex[i] == 'f'||tex[i] == 'g'||tex[i] == 'h'||tex[i] == 'j'||tex[i] == 'k'||tex[i] == 'l'||tex[i] == 'm'||tex[i] == 'n'||tex[i] == 'p'||tex[i] == 'q'||tex[i] == 'r'||tex[i] == 's'||tex[i] == 't'||tex[i] == 'v'||tex[i] == 'w'||tex[i] == 'x'||tex[i] == 'y'||tex[i] == 'z'){
	        cont++;
       }
	}
	return cont;
}
int Vocales(string tex){
	int conv=0;
	for(int i=0;i<tex.size();i++){
		if(tex[i] == 'a'||tex[i] == 'e'||tex[i] == 'i'||tex[i] == 'o'||tex[i] == 'u'){
			conv++;
		}
	}
	return conv;
}
int Numeros(string tex){
	int cont1=0;
	for(int i=0;i<tex.size();i++){
		if(tex[i] == '1'||tex[i] == '2'||tex[i] == '3'||tex[i] == '4'||tex[i] == '5'||tex[i] == '6'||tex[i] == '7'||tex[i] == '8'||tex[i] == '9'||tex[i] == '0'){
		cont1++;	
		}
	}
	
return cont1;}

