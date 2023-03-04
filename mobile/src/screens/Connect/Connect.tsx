import React, {useState} from 'react';
import Button from '../../components/Button';

import Input from '../../components/Input';
import Styles from './Connect.styles';

export default function Connect() {
  const [text, onChangeText] = useState('');

  const handlePress = () => {
    console.log(text);
  };

  return (
    <Styles.Container>
      <Styles.Logo source={require('../../../assets/ura.jpg')} />
      <Styles.InputContainer>
        <Styles.Text>Qual robozinho você quer controlar?</Styles.Text>
        <Input onChangeText={value => onChangeText(value)} value={text} />
        <Button text="Conectar" onPress={() => handlePress()} />
      </Styles.InputContainer>
    </Styles.Container>
  );
}
