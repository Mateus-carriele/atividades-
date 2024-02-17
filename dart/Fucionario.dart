class Funcionario {
  var _nome = "";
  var _salario = 0.0;
  var _mat = "";

  Funcionario(String nome_Fucionario, double salario_funcionario,String matricula_Funcionario){
    this._mat = matricula_Funcionario;
    this._nome = nome_Fucionario;
    this._salario = salario_funcionario;

  }

  String get nome_Fucionario{
    return _nome;
  }
  double get salario{
    return _salario;
  }
  String get matricula_Funcionario{
    return _mat;
  }
  

  

}