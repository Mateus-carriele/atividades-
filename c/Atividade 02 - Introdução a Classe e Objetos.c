1)
class Lanpadar{
  bool lanpadar = false;

  void liga(){
    lanpadar = true;
  }
  void apaga(){
    lanpadar = false;
  }
  String toString() {
    return 'Lanpadar: $lanpadar';
  }


}
void main() {
  Lanpadar l1  = Lanpadar();
  l1.liga();
  print(l1.toString());
}

2)

class Conta{
  var num = "";
  var salto = 0.0;

  void deposito (var valor){
    salto = salto + valor;

  }
  void saque(var valor){
    if (valor <= salto) {
      salto = salto - valor;
    }else{
      print("salto insuficiente");
    }
  }
  
  
    String toString() {
    return 'salto: R\$$salto';
  }


}
void main() {
 Conta c1 = Conta();
 c1.num = "2165411-4";
 c1.salto = 75;
 c1.saque(5);
 c1.deposito(100);
 var a = c1.toString();
 print(a);
}

3)
import 'dart:math';

class Cartesiano{
  var x1 = 0.0;
  var y1 = 0.0;
 
  

  String destacia (){
    double d = sqrt(pow(x1, 2)+pow(y1, 2));

    return 'A distância entre os pontos: (x$x1, y$y1)  é ($d)  ';
  }


}
void main() {
Cartesiano b1 = Cartesiano();
b1.y1 = 5;
b1.x1 = 2;

var a  = b1.destacia();
print(a);
}

4)
import 'dart:math';

class Cartesiano{
  var x1 = 0.0;
  var y1 = 0.0;
 
  

  String destacia (){
    double d = sqrt(pow(x1, 2)+pow(y1, 2));

    return 'A distância entre os pontos: (x$x1, y$y1)  é ($d)  ';
  }


}
void main() {
Cartesiano b1 = Cartesiano();
b1.y1 = 5;
b1.x1 = 2;

var a  = b1.destacia();
print(a);
}
5) 
import 'dart:math';

class Cartesiano{
  var x1 = 0.0;
  var y1 = 0.0;
  var x2 = 0.0;
  var y2 = 0.0;
  

  void destacia (){
    double d1 = sqrt(pow(x1, 2)+pow(y1, 2));
    double d2 = sqrt(pow(x2, 2)+pow(y2, 2));
    print('Os pontos: (x$x1, y$y1) e (x$x2,y$y2)  ');
   
    if (d1 > d2){
      print("O ponto mais distande é : (x$x1, y$y1) distancia é $d1 ");
    }else{
      print("O ponto mais distande é : (x$x2, y$y2) distancia é $d2 ");
    }

  }
}
void main() {
Cartesiano b1 = Cartesiano();
b1.y1 = 5;
b1.y2 = 2;
b1.x1 = 4;
b1.x2 = 5;
b1.destacia();

}
6)



class Carro{
var distancia = 0;
var combustivel = 0;

void andar (){
  if (combustivel <= 0) {
    print("voce nao tem combustivel para andar");
  }else{
    distancia = distancia + 5;
    combustivel = combustivel - 5;
  }
  
}
void abastecer(int gasolina){
  combustivel = combustivel + gasolina;


}
String p(){
  return' distancia = $distancia\n combustivel = $combustivel';
}


  
}
void main() {
  Carro c1 = Carro();
  Carro c2 = Carro();
  c1.andar();
  c1.abastecer(10);
  c2.abastecer(15);
  c1.andar();
  c2.andar();
  var a = c1.p();
  var b = c2.p();
  print("carro 1 :\n$a\n");
  print("carro 2 :\n$b\n");

}
7)


class Aluno{
var  mat= "";
var not = 0.0;

  
}
void main() {
Aluno a1 = Aluno();
a1.mat = "2022112LINF0254";
a1.not = 7.2;
print(a1.mat);
print(a1.not);
}
8)


class Aluno{
var  mat= "";
List<double> not = [];

double media (){
   var soma = not.reduce((valorAnterior, valorAtual) => valorAnterior + valorAtual);
    var media = soma / not.length;
    return media;
}
 
}
void main() {
Aluno a1 = Aluno();
a1.mat = "2022112LINF0254";
a1.not.add(5);
a1.not.add(5);
a1.not.add(6);
print(a1.mat);
print("media = ${a1.media()}");
}
