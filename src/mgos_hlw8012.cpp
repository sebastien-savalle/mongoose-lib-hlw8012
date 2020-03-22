#include "mgos_hlw8012.h" 

HLW8012 *mgos_hlw8012_create() {
  return new HLW8012();
}

void mgos_hlw8012_close(HLW8012 *sensor) {
  if (sensor != nullptr) {
    delete sensor;
    sensor = nullptr;
  }
}

bool mgos_hlw8012_begin(
    HLW8012 *sensor,
    unsigned char cf_pin,
    unsigned char cf1_pin,
    unsigned char sel_pin) {
    if (sensor == nullptr) return false;
    sensor->begin(cf_pin, cf1_pin, sel_pin);
    return true;
}
double mgos_hlw8012_readCurrent(HLW8012 *sensor)
{
	if (sensor == nullptr) return 0;
    return sensor -> getCurrent();
}
unsigned int mgos_hlw8012_readVoltage(HLW8012 *sensor)
{
	if (sensor == nullptr) return 0;
    return sensor -> getVoltage();
}
unsigned int mgos_hlw8012_readEnergy(HLW8012 *sensor)
{
	if (sensor == nullptr) return 0;
    return sensor -> getEnergy();
}