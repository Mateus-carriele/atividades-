class Turma {
  var _periodo = 0;
  var _serie = 0;
  var _sigla = "";
  var _ensina = "";

  Turma(int periodo, int serie, String sigla, String ensina){
    this._periodo = periodo;
    this._serie = serie;
    this._sigla = sigla;
    this._ensina = ensina;

  }

  int get periodo {
    return _periodo;
  }
  
  int get serie {
    return _serie;
  }
  
  String get sigla {
    return _sigla;
  }
  
  String get ensino {
    return _ensina;
  }
  
 

  

}