import React from 'react';

import Styles from './Button.styles';
import {IButtonProps} from './Button.types';

export default function Button({text, onPress}: IButtonProps) {
  return (
    <Styles.Button onPress={onPress}>
      <Styles.Text>{text}</Styles.Text>
    </Styles.Button>
  );
}
