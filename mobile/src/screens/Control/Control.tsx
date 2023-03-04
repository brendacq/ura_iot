import React, {useState} from 'react';

import Buttons from './sections/Buttons';
import Panel from './sections/Panel';
import Styles from './Control.styles';
import {SafeAreaView} from 'react-native';

export default function Control() {
  const [direction, setDirection] = useState<string>();

  console.log(direction);

  return (
    <SafeAreaView>
      <Styles.Container>
        <Styles.Logo source={require('../../../assets/ura.jpg')} />
        <Buttons onPressed={buttonPressed => setDirection(buttonPressed)} />
        <Panel />
      </Styles.Container>
    </SafeAreaView>
  );
}
