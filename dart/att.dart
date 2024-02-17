class Usuario {
  String nome = "";
  String matricula = "";
  bool reserva = true;

  void realizarReserva() {
    reserva = true;
  }

  void acessar() {
    if (reserva) {
      print("Acesso liberado");
      reserva = false;
    } else {
      print("Erro: reserva não realizada");
    }
  }
}

class Aluno extends Usuario {}

class Servidor extends Usuario {
  double saldo = 0.0;
  static double taxa = 10.0;

  @override
  void realizarReserva() {
    saldo -= taxa;
    reserva = true;
  }

  void recarga(double valor) {
    saldo += valor;
  }
}
