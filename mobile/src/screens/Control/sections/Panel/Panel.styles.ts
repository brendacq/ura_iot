import styled from 'styled-components/native';

const Panel = styled.View`
  padding: 25px;
  margin: 20px;
  border: 1px solid #53b4d9;
  border-radius: 15px;
`;

const Row = styled.View`
  flex-direction: row;
  margin-vertical: 5px;
`;

const InfoField = styled.Text`
  font-size: 16px;
  font-weight: bold;
  color: #3694b9;
`;

const InfoValue = styled.Text`
  font-size: 16px;
  color: #1c2529;
`;

export default {Panel, InfoField, InfoValue, Row};
