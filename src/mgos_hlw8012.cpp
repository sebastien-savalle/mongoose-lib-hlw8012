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
    unsigned char sel_pin,
    unsigned char currentWhen,
    bool use_interrupts,
    unsigned long pulse_timeout) {
    if (sensor == nullptr) return false;
    sensor->begin(cf_pin, cf1_pin, sel_pin, currentWhen, use_interrupts, pulse_timeout);
    sensor->setResistors(0.001, 5 * 470000, 1000);
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
unsigned int mgos_hlw8012_readActivePower(HLW8012 *sensor)
{
	if (sensor == nullptr) return 0;
    return sensor -> getActivePower();
}
unsigned int mgos_hlw8012_readApparentPower(HLW8012 *sensor)
{
	if (sensor == nullptr) return 0;
    return sensor -> getApparentPower();
}
double mgos_hlw8012_readPowerFactor(HLW8012 *sensor)
{
	if (sensor == nullptr) return 0;
    return sensor -> getPowerFactor();
}
unsigned int mgos_hlw8012_readReactivePower(HLW8012 *sensor)
{
	if (sensor == nullptr) return 0;
    return sensor -> getReactivePower();
}
void mgos_hlw8012_resetEnergy(HLW8012 *sensor)
{
	if (sensor == nullptr) return;
    sensor -> resetEnergy();
}
void mgos_hlw8012_setCurrentMultiplier(HLW8012 *sensor, double current_multiplier)
{
	if (sensor == nullptr) return;
    sensor -> setCurrentMultiplier(current_multiplier);
}
void mgos_hlw8012_setVoltageMultiplier(HLW8012 *sensor, double voltage_multiplier)
{
	if (sensor == nullptr) return;
    sensor -> setVoltageMultiplier(voltage_multiplier);
}
void mgos_hlw8012_setPowerMultiplier(HLW8012 *sensor, double power_multiplier)
{
	if (sensor == nullptr) return;
    sensor -> setPowerMultiplier(power_multiplier);
}
