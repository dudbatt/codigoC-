#include <iostream>
#include "Pessoa.cpp"

using namespace std;

int main(){

  Endereco e("Rua Vazia", "Bairro Nenhum", 1);
  Pessoa p("Arstd", "Qwfpg", 1, 2, 2024, e);

  cout << "Nome: " << p.getNomeCompleto() << "\n";
  cout << "Data de nascimento: " << p.getNascimento() << "\n";
  cout << "Endereco: " << p.getEndereco() << "\n";
  cout << "Quantidade de pessoas: " << p.quantidade << "\n";

  Pessoa p2("", "", 0, 0, 0, e);
  cout << "Quantidade de pessoas: " << p.quantidade << "\n";

}
