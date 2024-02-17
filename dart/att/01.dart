
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
class ingressovip extends Ingresso {
  double adicional = 50.00;
  @override
  double get valor => super.valor + adicional;
  double get valor_vipingresso{
    return valor;
  }
  
}
void main(List<String> args) {
  ingressovip a = ingressovip();
  Ingresso b = Ingresso();
  b.valor = 10;
  a.valor = 10;

  print(a.valor);
  a.usar();
  a.usar();
  

  print(b.valor);
  b.usar();
  b.usar();



}