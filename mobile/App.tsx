import React from 'react';
import {SafeAreaView} from 'react-native';

import Control from './src/screens/Control';
import Connect from './src/screens/Connect';

export default function App() {
  return (
    <SafeAreaView>
      <Connect />
    </SafeAreaView>
  );
}
