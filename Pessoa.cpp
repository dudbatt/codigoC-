
#include "Data.cpp"
#include "Endereco.cpp"

using namespace std;

class Pessoa{
  private:
    string nome;
    string sobrenome;
    const Data nascimento;
    Endereco endereco;

  public:
    static int quantidade;

  Pessoa(string nome, string sobrenome, int dia, int mes, int ano, Endereco endereco):
    nome{nome}, sobrenome{sobrenome}, nascimento{dia, mes, ano}, endereco{endereco}
  {quantidade++;}

  string getNome(){
    return nome;
  }

  string getNomeCompleto(){
    return nome + " " + sobrenome;
  }

  string getEndereco(){
    return endereco.getEndereco();
  }

  const string getNascimento(){
    return nascimento.formataData();
  }

  void setNome(string nome){
    this->nome = nome;
  }

  void setNome(string nome, string sobrenome){
    this->setNome(nome);
    this->sobrenome = sobrenome;
  }

  void setEndereco(Endereco endereco){
    this->endereco = endereco;
  }

  bool operator==(const Pessoa& outro){
    if(this->nome == outro.nome && this->sobrenome == outro.sobrenome)
      return true;

    return false;
  }
};

int Pessoa::quantidade = 0;

