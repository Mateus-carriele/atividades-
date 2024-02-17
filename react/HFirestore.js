import { View, Text } from "react-native";
import {doc,getDoc} from "firebase/firestore"
import db from "./Firestore"
import { useEffect, useState } from "react";

function Padrao({titulo, valor}){
    return(
        <View style={{flexDirection:"row"}}>
            <Text style={{fontWeight:"bold", fontSize:18}}>{titulo}:</Text>
            <Text>{valor}</Text>
        </View>
    )
}

export default function App(){
    const [item, setItem] = useState({})

    async function pegar(){
        const docRef = doc(db,"hamburgues/InY7Qkb8yYcqhY0pL0Fd")
        const docSnap = await getDoc(docRef);
        const data = docSnap.data();
        setItem(data);
    }
    
    useEffect(()=>{
        pegar().then();
    },[]);

    return(
        <View style={{paddingTop:30}}>

            
            <Padrao titulo="Nome" valor={item.nome}/>
            <Padrao titulo="Descricao" valor={item.descricao}/>
            <Padrao titulo="Valor" valor={item.valor}/>

        </View>
    )

}