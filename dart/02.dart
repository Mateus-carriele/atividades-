
class Ingresso  {
  double valor  = 0.0;
  bool validade = true;

  bool usar(){
    if (this.validade) {
      print("valido");
      validade = false;
      return true;
    } else {
      print("invalido");
      return false;
    }

  }
  double get valor_ingresso{
    return valor;

  }
}
class Ingresso_normal extends Ingresso{

}

class Ingresso_meia extends Ingresso{
  double get valor_Ingresso_meia{
    return valor * 0.5;
  }
}
class Ingresso_Cortesia extends Ingresso {
  double get valor_Ingresso_Cortesia{
    return valor - valor;
  }
}
class ingressovip extends Ingresso {
  double adicional = 50.00;

  double get valor_vipingresso{
    return valor + adicional;
  }
  
}
void main(List<String> args) {
  ingressovip a = ingressovip();
  Ingresso_normal b = Ingresso_normal();
  Ingresso_Cortesia c = Ingresso_Cortesia();
  Ingresso_meia d = Ingresso_meia();
  c .valor = 10;
  d.valor = 10;
  b.valor = 10;
  a.valor = 10;

  print(a.valor_vipingresso);
  a.usar();
  a.usar();
  

  print(b.valor_ingresso);
  b.usar();
  b.usar();

  print("valor do Ingresso Cortesia = ${c.valor_Ingresso_Cortesia}");
  print("valor do Ingresso meia = ${d.valor_Ingresso_meia}");



}