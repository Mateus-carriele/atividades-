import React, { useState } from 'react';
import { Text, TextInput, View, Button, Image } from 'react-native';

function App() {
  const [user, setuser] = useState('');
  const [senha, setsenha] = useState('');
  const [print, setprint] = useState('');

  function log() {
    if (user === 'IFPI' && senha === '123') {
      setprint(
        <Text
          style={{
            fontWeight: 'bold',
            fontSize: 20,
            color: '#00FF00',
          }}>
          correta
        </Text>
      );
    } else {
      setprint(
        <Text
          style={{
            fontWeight: 'bold',
            fontSize: 20,
            color: '#FF0000',
          }}>
          incorreta
        </Text>
      );
    }
  }

  return (
    <View
      style={{
        flex: 1,
        justifyContent: 'flex-start',
        backgroundColor: '#A8A8A8',
      }}>
      <Text
        style={{
          textAlign: 'center',
          paddingTop: 60,
          backgroundColor: '#FFFFFF',
          fontWeight: 'bold',
          fontSize: 20,
        }}>
        login
      </Text>
      <View
        style={{
          justifyContent: 'center',
          alignItems: 'center',
          paddingTop: 30,
        }}>
        <Image
          source={{
            uri: 'https://upload.wikimedia.org/wikipedia/commons/thumb/2/23/Instituto_Federal_do_Piau%C3%AD_-_Marca_Vertical_2015.svg/800px-Instituto_Federal_do_Piau%C3%AD_-_Marca_Vertical_2015.svg.png',
          }}
          style={{ width: 100, height: 100 }}
        />
      </View>
      <View>
        <TextInput
          style={{
            height: 40,
            borderWidth: 1,
            alignItems: 'center',
            padding: 15,
            margin: 15,
          }}
          placeholder="USER"
          onChangeText={(valor) => setuser(valor)}
        />
      </View>
      <View>
        <TextInput
          style={{
            height: 40,
            borderWidth: 1,
            padding: 15,
            margin: 15,
          }}
          placeholder="SENHA"
          onChangeText={(valor) => setsenha(valor)}
        />
      </View>
      <View
        style={{
          padding: 5,
          margin: 10,
        }}>
        <Button title="log in" onPress={log} />
      </View>

      <View>
        <Text style={{ textAlign: 'center' }}>{print}</Text>
      </View>
    </View>
  );
}

export default App;
