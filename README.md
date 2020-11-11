# mongoose-lib-hlw8012
Mongoose library for arduino HLW8012 and BL0937 sensors

## Example application for BL0937 (Shelly 1PM)


```
#include "mgos.h"
#include "mgos_hlw8012.h"

static struct HLW8012 *hlw8012 = NULL;

static void power_meter_cb (void *user_data) {
    int energy = mgos_hlw8012_readEnergy(hlw8012);
    LOG(LL_INFO, ("Energy Ws  %d", energy));
    LOG(LL_INFO, ("Energy Wh %d", energy / 3600));
    LOG(LL_INFO, ("ActivePower %d", mgos_hlw8012_readActivePower(hlw8012)));
}

enum mgos_app_init_result mgos_app_init(void) {
  if ((hlw8012 = mgos_hlw8012_create()) == NULL) {
    LOG(LL_ERROR, ("Unable to initialize HLW8012"));
    return;
  }
  
  mgos_hlw8012_begin(hlw8012,
                     mgos_sys_config_get_gpio_cf(),
                     mgos_sys_config_get_gpio_cf1(),
                     mgos_sys_config_get_gpio_sel(),
                     LOW,
                     true,
                     2000);

  mgos_hlw8012_setResistors(hlw8012, 0.001, 5 * 470000, 1000);
  mgos_hlw8012_setCurrentMultiplier(hlw8012, 25.7400);
  mgos_hlw8012_setVoltageMultiplier(hlw8012, 313.4000);
  mgos_hlw8012_setPowerMultiplier(hlw8012, 3414.2900);
  
  mgos_set_timer(1000, true, power_meter_cb, NULL);

  return MGOS_APP_INIT_SUCCESS;
}

```
