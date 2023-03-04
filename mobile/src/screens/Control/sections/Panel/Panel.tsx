import React, {useEffect, useState} from 'react';

import Styles from './Panel.styles';

export default function Panel() {
  const [connectionTime, setConnectionTime] = useState<string>();

  useEffect(() => {
    const date = new Date();
    setConnectionTime(date.toTimeString());
  }, [setConnectionTime]);

  return (
    <Styles.Panel>
      <Styles.Row>
        <Styles.InfoField>Robô: </Styles.InfoField>
        <Styles.InfoValue>URA 07</Styles.InfoValue>
      </Styles.Row>
      <Styles.Row>
        <Styles.InfoField>Status: </Styles.InfoField>
        <Styles.InfoValue>Conectado</Styles.InfoValue>
      </Styles.Row>
      <Styles.Row>
        <Styles.InfoField>Distância até obstáculo: </Styles.InfoField>
        <Styles.InfoValue>20 cm</Styles.InfoValue>
      </Styles.Row>
      <Styles.Row>
        <Styles.InfoField>Conectado desde </Styles.InfoField>
        <Styles.InfoValue>{connectionTime}</Styles.InfoValue>
      </Styles.Row>
    </Styles.Panel>
  );
}
