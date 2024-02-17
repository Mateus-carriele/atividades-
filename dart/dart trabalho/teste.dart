import 'Aluno.dart';
import 'Fucionario.dart';
import 'Turma.dart';
void main(){
  
  Turma t1 = Turma(2,3,"f","ensino medio");
  
  Aluno a1 = Aluno("mateus", "0314555", "13/11/2002", t1);
  Aluno a2 = Aluno("pedro", "8555245", "20/05/1999", t1);

  Funcionario f1 = Funcionario("joao", 2500.00, "3548425");

  print("ALUNO");

  print("NOME DO ALUNO : ${a1.nome_Aluno}");
  
  print("PERIODO DO ALUNO : ${a1.periodo_turma}");

  print("RG DO ALUNO : ${a1.rg_Aluno}");

  print("**********************************");
  
  print("ALUNO");
  
  print("NOME DO ALUNO : ${a2.nome_Aluno}");
  
  print("PERIODO DO ALUNO : ${a2.periodo_turma}");

  print("RG DO ALUNO : ${a2.rg_Aluno}");

  print("**********************************");

  print("FUNCIONARIO");

  print("NOME DO FUNCIONARIO :${f1.nome_Fucionario}");

  print("MATRICULA DO FUNCIONORIO : ${f1.matricula_Funcionario}");
  
}