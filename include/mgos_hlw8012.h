#include "HLW8012.h"

#ifdef __cplusplus
extern "C"
{
#endif

HLW8012 *mgos_hlw8012_create();

void mgos_hlw8012_close(HLW8012 *sensor);

bool mgos_hlw8012_begin(HLW8012 *sensor, 
            unsigned char cf_pin, 
            unsigned char cf1_pin, 
            unsigned char sel_pin,
            unsigned char currentWhen = HIGH,
            bool use_interrupts = true,
            unsigned long pulse_timeout = PULSE_TIMEOUT);

double mgos_hlw8012_readCurrent(HLW8012 *sensor);

unsigned int mgos_hlw8012_readVoltage(HLW8012 *sensor);

unsigned int mgos_hlw8012_readEnergy(HLW8012 *sensor);

unsigned int mgos_hlw8012_readActivePower(HLW8012 *sensor);
        
unsigned int mgos_hlw8012_readApparentPower(HLW8012 *sensor);

double mgos_hlw8012_readPowerFactor(HLW8012 *sensor);

unsigned int mgos_hlw8012_readReactivePower(HLW8012 *sensor);

void mgos_hlw8012_resetEnergy(HLW8012 *sensor);

void mgos_hlw8012_setCurrentMultiplier(HLW8012 *sensor, double current_multiplier);
    
void mgos_hlw8012_setVoltageMultiplier(HLW8012 *sensor, double voltage_multiplier);
    
void mgos_hlw8012_setPowerMultiplier(HLW8012 *sensor, double power_multiplier);

#ifdef __cplusplus
}
#endif  /* __cplusplus */