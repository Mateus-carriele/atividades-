1)
class Ingresso  {
  double valor  = 0.0;
  bool validade = true;
  bool usar(){
    if (this.validade) {
      validade = false;
      return true;
    } else {
      return false;
    }

  }
}
class ingressovip extends Ingresso {
  double adicional = 50.00;
  @override
  // TODO: implement valor
  double get valor => super.valor + adicional;
  
}
void main(List<String> args) {
  ingressovip a = ingressovip();
  a.valor = 10;
  print(a.valor);
  print(a.validade);
  a.usar();
  print(a.validade);
}