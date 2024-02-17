class Empregado {
  String nome ="";
  String cpf ="";
  
}
class Vendedor extends Empregado{
  double totalVendas = 0.0;
  double porcentagem_comissao = 0.5;

  void addVendas (double valor){
    totalVendas += valor;
  }

  double pagarSalario (){
    double salario = totalVendas * porcentagem_comissao;
    return salario;
  }
  
}
class Entregador extends Empregado {
  int totalEntregas = 0;
  double valor_Entrega = 12.0;

  void addentrega (int valor){
    totalEntregas += valor;
  }

  double pagarSalario (){
    double salario = totalEntregas * valor_Entrega;
    return salario;
  }

}

class Montador extends Empregado {
  int totaldias = 0;
  double valorDiaria = 120.0;

  void addedia (int valor){
    totaldias += valor;
  }

  double pagarSalario (){
    double salario = totaldias * valorDiaria;
    return salario;
  }

}

void main(List<String> args) {
  Vendedor v1 = Vendedor();
  v1.nome = "mateus";
  v1.cpf  = "6465465-8";
  v1.addVendas(1200.00);
  print(v1.nome);
  print(v1.pagarSalario());

  Entregador e1 = Entregador();
  e1.nome = "pedro";
  e1.cpf  = "984513-9";
  e1.addentrega(3);
  print(e1.nome);
  print(e1.pagarSalario());


  Montador m1 = Montador();
  m1.nome = "francisco";
  m1.cpf  = "5654646-5";
  m1.addedia(3);
  print(m1.nome);
  print(m1.pagarSalario());

  }
