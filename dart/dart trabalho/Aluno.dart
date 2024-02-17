import 'Turma.dart';
class Aluno {
  var _nome = "";
  var _rg = "";
  var _data_nacimento = "";
  Turma _turma = Turma(0,0,"","");
   
   Aluno(String nome, String rg_Aluno, String data_nacimento, Turma turma){
    this._data_nacimento = data_nacimento;
    this._nome = nome;
    this._rg = rg_Aluno;
    this._turma = turma; 

   }
  String get nome_Aluno {
    return _nome;
  }
  String get rg_Aluno {
    return _rg;
  }
  String get data_Nacimento_Aluno {
    return _data_nacimento;
  }
  set turma(Turma turma){
    this._turma = turma;

  }
  int get periodo_turma {
  return _turma.periodo;
  }
  String get sigla_turma{
    return _turma.sigla;

  }
  String get ensina_turma{
    return _turma.ensino;
  }
  int get serie_turma{
    return _turma.serie;
  }
 
}