#include <string>
using namespace std;

class Data {
  public:
    int dia;
    int mes;
    int ano;

    Data(int dia, int mes, int ano): dia{dia}, mes{mes}, ano{ano} {};
    int getDia() {return dia;};
    int getMes() {return mes;};
    int getAno() {return ano;};

    string formataData() const{
      return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
    };
};

