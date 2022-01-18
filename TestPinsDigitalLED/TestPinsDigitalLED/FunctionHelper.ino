void initialSetPins() {
  portBackbone.initSetPins();
  portSensorsA.initSetPins();
  portSensorsB.initSetPins();
}

void invertAllPorts() {
  portBackbone.invertPins();
  portSensorsA.invertPins();
  portSensorsB.invertPins();
}
