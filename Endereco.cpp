#include <string>
using namespace std;

class Endereco{
  public:
    string rua;
    string bairro;
    int numero;

    Endereco(string rua, string bairro, int numero): rua{rua}, bairro{bairro}, numero{numero} {};

    string getEndereco(){
      return rua + ", " + to_string(numero) + "\t" + bairro;
    }
};
