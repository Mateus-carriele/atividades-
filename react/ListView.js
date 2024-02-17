import { View, FlatList, TouchableOpacity, Text } from "react-native";
import { ListItem, Image  } from "@rneui/base";
import { DATA_BASE } from "./db";

function Item({item, index, navigation}){

    function itemSelecionado(){
        console.log(`Item Selecionado = ${index}`)
        navigation.navigate('Detail',{id: item.id})
        
    }
    return(
        <View style={{paddingTop:40}}>
            <ListItem onPress={itemSelecionado}>
                <Image
                    source={{ uri: item.imagem  }}
                    containerStyle={{width:100, height:100}}
                />                
                <ListItem.Content style={{flex: 1}}>
                    <ListItem.Title style={{fontWeight:"bold"}}>{item.nome}</ListItem.Title>
                    <ListItem.Subtitle>{item.descricao}</ListItem.Subtitle>
                    <ListItem.Subtitle style={{color:"blue"}}>R$ {item.valor}</ListItem.Subtitle>
                </ListItem.Content>
            </ListItem>
        </View>
    )
}


function ListView({navigation}) {

    const renderItem = ({ item }) => {
        return <Item item={item} navigation={navigation} />;
      };
  
    return(
        <View style={{paddingTop: 50, flex:1}}>
            <View style={{flex:1}}>
                <FlatList 
                    data={DATA_BASE}
                    renderItem={renderItem}
                    key={(item)=> item.nome}
                />
                <Text>{DATA_BASE.length}</Text>
            </View>
        </View>
    )

}
export default ListView;