#include "HLW8012.h"

#ifdef __cplusplus
extern "C"
{
#endif

HLW8012 *mgos_hlw8012_create();

void mgos_hlw8012_close(HLW8012 *sensor);

bool mgos_hlw8012_begin(HLW8012 *sensor, int i2caddr);

double mgos_hlw8012_readCurrent(HLW8012 *sensor);

unsigned int mgos_hlw8012_readVoltage(HLW8012 *sensor);

unsigned int mgos_hlw8012_readEnergy(HLW8012 *sensor);

#ifdef __cplusplus
}
#endif  /* __cplusplus */