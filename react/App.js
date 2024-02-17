import { Text, View, StyleSheet, Image } from 'react-native';

function Icone({ nome, url, tes }) {
  return (
    <View style={{ alignItems: 'center' }}>
      <View style={{ alignItems: 'center' }}>
        <Image style={{ height: 2, width: 2 }} source={{ url: url }} />
      </View>
      <View style={{ padding: 10 }}>
        <Image style={{ height: 30, width: 30 }} source={{ uri: url }} />
      </View>
      <View style={{ alignItems: 'center' }}>
        <Text style={{ padding: 5 }}> {nome} </Text>
        <Text style={{ padding: 5 }}> {tes} </Text>
      </View>
    </View>
  );
}
function Caixa({caixa}){
  return (
    <View style={{ flex: 1, alignItems: 'center' , backgroundColor: 'rgb(173, 216, 230)', borderRadius: 90 }}>
    <Text style={{ fontSize: 20,  }}>caixa</Text>
    </View>
  )
}
function Brigadeiro() {
  return (
    <View style={{ alignItems: 'center' }}>
      <View style={{ padding: 10, margin :20}}>
        <Image
          style={{ height: 200, width: 200 }}
          source={{
            uri: 'https://avidadoce.com/wp-content/uploads/2020/05/brigadeiros-gourmet-e1590075452121.jpg',
          }}
        />
      </View>
      <View style={{ alignItems: 'center' }}>
        <Text style={{ fontSize: 20, fontWeight: 800,padding: 10 }}>
          Brigadeiro Gourmet
        </Text>

        <Text style={{ padding: 19 }}>
          Para presentes o ideal é que os docinhos tenham 20 gramas. Por mais
          que você possa dar outro presente junto, o doce nesse tamanho é uma
          ótima opção e com certeza vai alegrar o dia de quem recebê-lo.
        </Text>
      </View>
    </View>
  );
}
function App() {
  return (
    <View
      style={{
        justifyContent: 'center',
        flex: 1,
        
      }}>
      <View style={{ justifyContent: 'center', flex: 8 }}>
        <Brigadeiro />
      </View>
      <View
        style={{
          justifyContent: 'space-evenly',
          flexDirection: 'row',
          flex: 2,
        }}>
        <Icone url="https://cdn-icons-png.flaticon.com/512/58/58901.png" />
        <Icone url="https://cdn-icons-png.flaticon.com/512/58/58901.png" />
        <Icone url="https://cdn-icons-png.flaticon.com/512/58/58901.png" />
        <Icone url="https://cdn-icons-png.flaticon.com/512/58/58901.png" />
        <View style={{ flexDirection: 'row' }}>
          <Icone url="https://cdn.icon-icons.com/icons2/930/PNG/512/star_icon-icons.com_72271.png" />
          <Text style={{ alignSelf: 'flex-start', paddingTop:20 }}>170 Review</Text>
        </View>
      </View>

      <View
        style={{
          justifyContent: 'space-evenly',
          flexDirection: 'row',
          flex: 2,
        }}>
        <Icone
          nome="Preop:"
          url="https://cdn3.iconfinder.com/data/icons/home-appliances-24/512/002-64.png"
          tes="25 Min"
        />
        <Icone
          nome="Cock:"
          url="https://cdn0.iconfinder.com/data/icons/simple-mix-outline/160/smartwatch-512.png"
          tes="25 Min"
        />
        <Icone
          nome="Feeds:"
          url="https://cdn0.iconfinder.com/data/icons/simple-mix-glyph/160/restaurant-64.png"
          tes="4 Pep"
        />
      </View>

      <View style={{ flexDirection: 'row', justifyContent: 'space-evenly', flex : 1}}>
      <Caixa caixa = 'caixa'/>
      <Caixa caixa = 'caixa'/>
      </View>
    </View>
  );
}
export default App;
