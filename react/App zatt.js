import React, { useState } from 'react';
import {
  View,
  Text,
  TextInput,
  Button,
  FlatList,
  Image,
  StyleSheet,
} from 'react-native';

function ListaItem({ item }) {
  return (
    <View style={styles.itemContainer}>
      <View>
        <Image source={{ uri: item.url }} style={styles.itemImage} />
      </View>
      <View style={styles.itemDetails}>
        <Text style={styles.itemName}>{item.nome}</Text>
        <Text style={styles.itemDescription}>{item.descricao}</Text>
        <Text style={styles.itemvalo}>R${item.valor}</Text>
      </View>
    </View>
  );
}

function ToDOList() {
  const [lista, setLista] = useState([]);

  const [nome, setNome] = useState('');
  const [valor, setValor] = useState('');
  const [descricao, setDescricao] = useState('');
  const [url, setUrl] = useState('');

  function addTarefa() {
    const novaTarefa = {
      nome: nome,
      valor: valor,
      descricao: descricao,
      url: url,
    };

    const novaLista = [...lista, novaTarefa];

    setLista(novaLista);
  }

  return (
    <View>
      <View style={styles.container}>
        <View>
          <Text>Cadatro de Hamburgues</Text>
        </View>

        <View style={{ paddingBottom: 10 }}>
          <TextInput
            placeholder="Digite o nome"
            style={styles.digite}
            onChangeText={setNome}
            value={nome}
          />
          <TextInput
            placeholder="Digite o valor"
            style={styles.digite}
            onChangeText={setValor}
            value={valor}
          />
          <TextInput
            placeholder="Digite a descrição"
            style={styles.digite}
            onChangeText={setDescricao}
            value={descricao}
          />
          <TextInput
            placeholder="Digite a URL"
            style={styles.digite}
            onChangeText={setUrl}
            value={url}
          />
        </View>

        <Button title="Inserir" onPress={addTarefa} />
      </View>
      <View>
        <FlatList data={lista} renderItem={ListaItem} />
      </View>
    </View>
  );
}
const styles = StyleSheet.create({
  digite: {
    borderBottomWidth: 1,
    padding: 15,
  },
  container: {
    margin: 10,
    padding: 20,
    fontSize: 25,
    textAlign: 'center',
    borderWidth: 1,
  },
  itemContainer: {
    flexDirection: 'row',
    paddingBottom: 30,
    marginEnd: 5,
    marginBottom: 20,
    borderBottomWidth: 1,
  },
  itemImage: {
    width: 100,
    height: 100,
    marginRight: 10,
  },
  itemDetails: {
    flex: 1,
  },
  itemName: {
    fontWeight: 'bold',
    fontSize: 16,
  },
  itemDescription: {
    fontSize: 14,
  },
  itemvalo: {
    color: '#0000FF',
    fontSize: 16,
  },
});
export default ToDOList;
