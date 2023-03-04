import React from 'react';

import Button from '../../../../components/Button';
import Styles from './Buttons.styles';
import {IButtonsProps} from './Buttons.types';

export default function Buttons({onPressed}: IButtonsProps) {
  return (
    <>
      <Styles.ButtonContainer>
        <Button text="Frente" onPress={() => onPressed('forward')} />
      </Styles.ButtonContainer>

      <Styles.LeftRightContainer>
        <Styles.ButtonContainer>
          <Button text="Esquerda" onPress={() => onPressed('left')} />
        </Styles.ButtonContainer>
        <Styles.ButtonContainer>
          <Button text="Direita" onPress={() => onPressed('right')} />
        </Styles.ButtonContainer>
      </Styles.LeftRightContainer>

      <Styles.ButtonContainer>
        <Button text="Voltar" onPress={() => onPressed('back')} />
      </Styles.ButtonContainer>
    </>
  );
}
