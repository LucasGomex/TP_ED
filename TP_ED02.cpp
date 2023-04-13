		#include <iostream>
		#include <string>
		#include <locale.h>
		using namespace std; 
		
		 
		
		class Data 
		{ 
		
		private: 	 
		
		   int dia; 
		
		   int mes; 
		
		   int ano;	 
		
		    public: 
		
		    	Data(int dia, int mes, int ano) 
		
		{ 
		
		this->dia = dia; 
		
		this->mes = mes; 
		
		this->ano = ano; 
		
		} 
		
		Data() 
		
		{ 
		
		this->dia = 0; 
		
		this->mes = 0; 
		
		this->ano = 0; 
		
		} 
		
		    	void setDia(int dia) 
		
		    	{ 
		
		this->dia = dia; 
		
		} 
		
		void setMes(int mes) 
		
		    	{ 
		
		this->mes = mes; 
		
		} 
		
		void setAno(int ano) 
		
		    	{ 
		
		this->ano = ano; 
		
		} 
		
		int getDia() 
		
		{ 
		
		return this->dia; 
		
		} 
		
		int getMes() 
		
		{ 
		
		return this->mes; 
		
		} 
		
		int getAno() 
		
		{ 
		
		return this->ano; 
		
		} 
		
		string getData() 
		
		{ 
		
		    return to_string ( this -> dia ) + "/" +
					 to_string ( this -> mes ) + "/" +
					  to_string ( this -> ano ); 
		
		} 
		
		Data* dia_seguinte() 
		
		{ 
		
		int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
		
		Data *d1 = new Data(this->dia, this->mes, this->ano); 
		
		 
		
		if (d1->ano%4 == 0) 
		
		{ 
		
		diasMes[1]++; 
		
		} 
		
		 
		
		d1->dia++; 
		
		if (d1->dia > diasMes[d1->mes-1]) 
		
		{ 
		
		d1->dia = 1; 
		
		if (++d1->mes > 12) 
		
		{ 
		
		d1->mes = 1; 
		
		d1->ano++; 
		
		} 
		
		} 
		
		 
		
		return d1; 
		
		} 
		
		}; 
		
		 
		
		class contato 
		
		{ 
		
		 
		
		private: 
		
		string email; 
		
		string name; 
		
		string telefone;		 
		
		int idade; 
		
		 
		
		public: 
		
		 
		
		contato(string Email, string name, string Telefone){ 
		
		 
		
		email=Email; 
		
		name=name; 
		
		telefone=Telefone;	 
		
		} 
		
		 
		
		contato(){ 
		
		this->email="teste@teste.com.br"; 
		
		this->name="testando"; 
		
		this->telefone="4002-8922";		 
		
		}	 
		
		 
		
		void setIdade(int Idade){ 
		
		idade=Idade; 
		
		}	  		 
		
		 
		
		string getIdade(){ 
		
		return to_string(idade); 
		
		} 
		
		 
		
		void setEmail(string Email) 
		
		{ 
		
		email=Email; 
		
		} 
		
		 
		
		void setname(string name) 
		
		{ 
		
		name=name; 
		
		} 
		
		 
		
		void setTel(string Telefone) 
		
		{ 
		
		telefone=Telefone; 
		
		} 
		
		 
		
		string getEmail() 
		
		{ 
		
		return email; 
		
		} 
		
		 
		
		string getname() 
		
		{ 
		
		return name; 
		
		} 
		
		 
		
		string getTelefone() 
		
		{ 
		
		return telefone; 
		
		} 
		
		 
		
		void Idade(int dianasc,int mesnasc, int anonasc) 
		
		{ 
		
		int diaAtual=13; 
		
		int mesAtual=4; 
		
		int anoAtual=2023;		 
		
		 
		
		if(mesnasc==mesAtual){ 
		
		 
		
		if(dianasc<=diaAtual) 
		
		{ 
		
		idade=anoAtual-anonasc; 
		
		} 
		
		else 
		
		{idade=anoAtual-anonasc-1;}					 
		
		 
		
		} 
		
		else if (mesnasc<=mesAtual)  
		
		{ 
		
		idade=anoAtual-anonasc; 
		
		} 
		
		else{idade=anoAtual-anonasc-1;}							 
		
		}		 
		
		}; 
		
		 
		
		 
		
		int main(int argc, char** argv) 
		
		{ 
		
		for (int i = 1; i<=5; i++) 
		
		{ 
		
		contato *cont=new contato(); 
		
		Data *data=new Data(); 
		
		string name; 
		
		string telefone; 
		
		string email; 
		
		int dia; 
		
		int mes; 
		
		int ano; 
		
		 
		
		cout<<"Nome: " ; 
		
		cin>>name; 
		
		cout<<endl; 
		
		 
		
		cout<<"Telefone: "; 
		
		cin>>telefone; 
		
		cout<<endl; 
		
		 
		
		cout<<"E-mail: "; 
		
		cin>>email; 
		
		cout<<endl; 
		
		 
		
		cout<<"Dia de nascimento: "; 
		
		cin>>dia; 
		
		cout<<endl; 
		
		 
		
		cout<<"Mês de nascimento: "; 
		
		cin>>mes; 
		
		cout<<endl; 
		
		 
		
		cout<<"Ano de nascimento: "; 
		
		cin>>ano; 
		
		cout<<endl; 
		
		 
		
		cont->setname(name); 
		
		cont->setEmail(email); 
		
		cont->setTel(telefone); 
		
		 
		
		data->setDia(dia); 
		
		data->setMes(mes); 
		
		data->setAno(ano); 
		
		 
		
		cont->Idade(dia,mes,ano); 
		
		 
		
		cout<<cont->getname()<< "E-mail: "<<cont->getEmail()<<" - Tel: "<<cont->getTelefone()<<" - Data de nascimento: "<<data->getData()<<endl; 
		
		 
		
		cout<<"Idade: "<<cont->getIdade() <<" anos"; 
		
		} 
		
		 
		
		return 0; 
		
		} 