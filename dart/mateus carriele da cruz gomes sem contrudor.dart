import 'package:flutter/material.dart';
void main() {
  runApp(MaterialApp(
    title: "MEU APP",
    home: Container(
        decoration: BoxDecoration(
          gradient: LinearGradient(
            begin: Alignment.topCenter,
            end: Alignment.bottomCenter,
            colors: [
              Color.fromARGB(255, 0, 0, 0),
              Color.fromARGB(255, 245, 85, 73),
            ],
          ),
        ),
        child: Organizar1(),
      ),
    ),
  );
  }


class Pac extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Text(
          'PAC',
          style: TextStyle(
            fontSize: 40,
                color:  Colors.white,
                decoration: TextDecoration.none,
          ),
        ),
        Estr(),
        
      ],
    );
    
  }
}

class Sho extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Text(
          'SHO',
          style: TextStyle(
            fontSize: 40,
                color:  Colors.white,
                decoration: TextDecoration.none,
          ),
        ),
        Estr(),
        
      ],
    );
    
  }
}

class Pas extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Text(
          'PAS',
          style: TextStyle(
            fontSize: 40,
                color:  Colors.white,
                decoration: TextDecoration.none,
          ),
        ),
        Estr(),
        
      ],
    );
    
  }
}

class Dri extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Text(
          'DRI',
          style: TextStyle(
            fontSize: 40,
                color:  Colors.white,
                decoration: TextDecoration.none,
            ),
          ),
        Estr(),
      ],
    );
  }
}
class Def extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Text(
          'DEF',
          style: TextStyle(
            fontSize: 40,
                color:  Colors.white,
                decoration: TextDecoration.none,
          ),
        ),
        Estr(),
      ],
    );
  }
}

class Phy extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Text(
          
          'PHY',
          style: TextStyle(
            fontSize: 40,
                color: Colors.white,
                decoration: TextDecoration.none,
          ),
        ),
        Estr(),
      ],
    );
  }
}
class OrganizarEstrela extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        Pac(),
        Sho(),
        Pas()
      ],
    );
  }
}

class OrganizarEstrela2 extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        Dri(),
        Def(),
        Phy()
      ],
    );
  }
}

class OrganizarEstrelaFinal extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      mainAxisAlignment: MainAxisAlignment.spaceEvenly,
      children: [
        OrganizarEstrela(),
        OrganizarEstrela2()
      ],
    );
  }
}

class Organizar1 extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Row(
      children: [
        BH(),
        TituloECarreira()
      ],
    );
  }
}

class BH extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Image.network(
      'https://pbs.twimg.com/media/F0yowT7XsAMFq6X?format=jpg&name=large',
    );
  }
}

class TituloECarreira extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Expanded(
      child: Container(
        padding: EdgeInsets.all(16.0),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              "trajetória" ,
              style: TextStyle(
                fontSize: 40,
                color: Colors.white,
                decoration: TextDecoration.none,
              ),
            ),  
            SingleChildScrollView(
              child: Text(
                'Sua história no Inconfidência começa em 2009, quando Bruno era conhecido como "Bruninho" ou ainda "mosquito" (apelido que ganhou na infância porque passava "voando" pelos zagueiros). Conciliando rotina de estudos e trabalhos informais, ingressou na equipe de futebol amador de seu bairro: o Inconfidência Futebol Clube. Nessa época, Bruno trabalhava como office boy. Trabalhava durante a semana e jogava aos domingos. Antes do sucesso, "Bruninho" precisou ouvir diversos "nãos" em sua vida. No começo, foi recusado em peneiras do Atlético-MG e do América-MG e, por isso, não teve formação em categorias de base. Descoberto por Ronnie, seu primeiro treinador, passou a disputar a Copa Itatiaia, torneio promovido por uma rádio do estado, e lá chamou atenção. Destaque na Copa Itatiaia Em 2012, Bruno se destacou ao ser campeão da tradicional Copa Itatiaia de 2011–12 com o Inconfidência, de Concórdia, um bairro de sua cidade natal. Bruninho, como ainda era conhecido, foi eleito o melhor jogador da competição e atuou ao lado do seu irmão, Juninho, que ficou com o prêmio de revelação do campeonato. Cruzeiro e Uberlândia Após o destaque, aos 21 anos, Bruno foi contratado pelo Cruzeiro no início de 2012 e logo emprestado ao Uberlândia. Foi repassado novamente por empréstimo para a equipe do Triângulo Mineiro no começo do ano seguinte. Ao longo de 2013 já havia assinado em definitivo com o clube do interior de Minas, com contrato até o fim da temporada seguinte. Itumbiara e Goiás Em 24 de junho de 2014, Bruno mudou-se para o Itumbiara. Após marcar 9 gols na Segunda Divisão Goiana e ajudar seu clube a voltar à elite do estado, fechou com o Goiás, no dia 7 de janeiro de 2015. Uma curiosidade sobre sua passagem pelo Itumbiara aconteceu na partida contra o Social, no Estádio Louis Ensch, em Coronel Fabriciano. Nesta partida, Bruno teve que atuar como goleiro, já que o goleiro titular Glaysson foi expulso e a equipe já havia feito as 3 alterações. Bruno atuou por mais de 10 minutos na meta e tomou um gol. Bruno Henrique fez sua estreia na Série A pela equipe esmeraldina em 10 de maio de 2015, num empate em 0–0 fora contra o Vasco da Gama na rodada inicial da competição.[17] Marcou os seus primeiros gols no campeonato seis dias depois, os dois na vitória por 2–0 em casa contra o Atlético Paranaense. Wolfsburg Transferiu-se para o clube alemão Wolfsburg no dia 29 de janeiro de 2016, assinando contrato até junho de 2019, comprado por aproximadamente 4,5 milhões de euros. Em abril, deu uma assistência para o segundo gol da sua equipe e teve atuação destacada na vitória dos Lobos em cima do Real Madrid por 2–0, na Alemanha, válido pela 1.ª partida das quartas de final da Liga dos Campeões da UEFA. Entretanto, sua equipe foi eliminada ao perder o jogo da volta por 3–0 em Madri. Em 21 de janeiro de 2017, assinou contrato de quatro anos com o Santos. O alvinegro praiano pagou 4 milhões de euros (cerca de R\$ 13,5 milhões) para contar com Bruno em seu elenco. Seus primeiros gols pelo Peixe vieram em uma partida diante do São Bernardo, na qual o Santos foi a campo com um time praticamente reserva. O jogador marcou um hat-trick, queixou-se de cansaço e deu lugar a Rodrigão aos 37 minutos do segundo tempo, tendo jogado por 83 minutos. O alvinegro venceu a partida fora de casa por 4–1, em partida válida pelo Campeonato Paulista. Ao longo da temporada, Bruno foi o principal jogador do Santos, tornando-se o artilheiro da equipe no ano com 18 gols, sendo oito no Campeonato Brasileiro, (inclusive dando 11 assistências, ficando em 2.º lugar no quesito, somente atrás de Gustavo Scarpa), quatro na Copa do Brasil e quatro na Libertadores. Lesão no olho No dia 17 de janeiro de 2018, na partida do Santos contra o Linense válida pela 1.ª rodada do Campeonato Paulista, Bruno sofreu cinco lesões diferentes no olho direito após tomar uma bolada, fato que o deixou afastado dos gramados por cerca de um mês. Retornou aos gramados no dia 16 de fevereiro, para treinar e manter a forma física, utilizando óculos especiais devido à gravidade da lesão. Só retornou definitivamente a uma partida no dia 21 de abril de 2018, válida pelo Campeonato Brasileiro, contra o Bahia na Arena Fonte Nova, jogo que o Santos foi derrotado por 1–0, com o time baiano marcando o gol da vitória aos 48 do 2.º tempo. No jogo entre Santos e Fluminense, a equipe da Vila Belmiro venceu por 1–0, sendo Bruno o autor do gol aos 40 minutos do 2.º tempo, após cruzamento de Diego Pituca. Com a vitória, o Santos saiu da zona de rebaixamento. Muito por conta das lesões no olho e no joelho, além dos erros individuais, essa foi a pior temporada de Bruno no Santos, marcando somente dois gols e dando três assistências em 33 jogos pelo clube. Bruno Henrique trocou o Santos pelo Flamengo no início de 2019, e trilhou uma história de sucesso, alcançando o auge na carreira e foi um dos protagonistas de uma fase memorável e vencedora na história do clube. Ao marcar na ida da Recopa Sul-Americana de 2020 (2 a 2 contra o Independiente del Valle, tendo seu tento deixado o marcador em 1 a 1), tornou-se o primeiro jogador do Flamengo a marcar gol em todas as atuais competições de primeiro nível (7), do Carioca ao Mundial de Clubes FIFA. Na partida contra o Racing, pelo jogo de volta das oitavas de final da Libertadores 2020 , atingiu a marca de 100 jogos com a camisa do Flamengo',
                style: TextStyle(
                  fontSize: 15,
                  color: Colors.white,
                  decoration: TextDecoration.none,
                ),
              ),
            ),

            OrganizarEstrelaFinal(),

          ],
        ),
      ),
    );
  }
}

class Estr extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Container(
        padding: EdgeInsets.all(10.0),
        child: Row(
      children: [
        Icon(
          Icons.star,
          color: Color.fromARGB(255, 191, 194, 15),
        ),
        Icon(
          Icons.star,
          color: Color.fromARGB(255, 191, 194, 15),
        ),
        Icon(
          Icons.star,
          color: Color.fromARGB(255, 191, 194, 15),
        ),
        Icon(
          Icons.star,
          color: Color.fromARGB(255, 191, 194, 15),
        ),
        Icon(
          Icons.star,
          color: Color.fromARGB(255, 191, 194, 15),
        ),
      ],
    ),
      );
  }
}
