import styled from 'styled-components/native';

const Container = styled.ScrollView`
  width: 100%;
  height: 100%;
  background-color: #e3e3e3;
`;

const InputContainer = styled.View`
  align-items: center;
  margin: 40px 20px;
`;

const Text = styled.Text`
  color: #3694b9;
  font-size: 20px;
  font-weight: bold;
  align-self: center;
`;

const Logo = styled.Image`
  align-self: center;
  margin: 20px;
  width: 200px;
  height: 200px;
`;

export default {
  Container,
  InputContainer,
  Text,
  Logo,
};
