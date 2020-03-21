/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.17.0/apps/mongoose-lib-hlw8012/esp8266/build_contexts/build_ctx_488576883/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.17.0/apps/mongoose-lib-hlw8012/esp8266/build_contexts/build_ctx_488576883/build/gen/mos_conf_schema.yml
 */

#pragma once

#include <stdbool.h>
#include "common/mg_str.h"

#ifdef __cplusplus
extern "C" {
#endif

struct mgos_config_debug {
  const char * udp_log_addr;
  int udp_log_level;
  int mbedtls_level;
  int level;
  const char * file_level;
  int event_level;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  const char * mg_mgr_hexdump_file;
};

struct mgos_config_i2c {
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config_sys_atca {
  int enable;
  int i2c_bus;
  int i2c_addr;
  int ecdh_slots_mask;
};

struct mgos_config_sys {
  struct mgos_config_sys_atca atca;
  const char * tz_spec;
  int wdt_timeout;
  const char * pref_ota_lib;
};

struct mgos_config_device {
  const char * id;
  const char * license;
  const char * mac;
  const char * public_key;
  const char * sn;
};

struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_i2c i2c;
  struct mgos_config_i2c i2c1;
  struct mgos_config_sys sys;
  struct mgos_config_device device;
  const char * conf_acl;
};


const struct mgos_conf_entry *mgos_config_schema();

extern struct mgos_config mgos_sys_config;
extern const struct mgos_config mgos_config_defaults;

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug * mgos_config_get_debug(struct mgos_config *cfg);
static inline const struct mgos_config_debug * mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
const struct mgos_conf_entry *mgos_config_schema_debug(void);
bool mgos_config_parse_debug(struct mg_str json, struct mgos_config_debug *cfg);
bool mgos_config_copy_debug(const struct mgos_config_debug *src, struct mgos_config_debug *dst);
void mgos_config_free_debug(struct mgos_config_debug *cfg);

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_udp_log_addr(const char * v) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, v); }

/* debug.udp_log_level */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
int mgos_config_get_debug_udp_log_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_udp_log_level(void) { return mgos_config_get_debug_udp_log_level(&mgos_sys_config); }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_udp_log_level(int v) { mgos_config_set_debug_udp_log_level(&mgos_sys_config, v); }

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_mbedtls_level(int v) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, v); }

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_level(int v) { mgos_config_set_debug_level(&mgos_sys_config, v); }

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_file_level(void) { return mgos_config_get_debug_file_level(&mgos_sys_config); }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_file_level(const char * v) { mgos_config_set_debug_file_level(&mgos_sys_config, v); }

/* debug.event_level */
#define MGOS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
int mgos_config_get_debug_event_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_event_level(void) { return mgos_config_get_debug_event_level(&mgos_sys_config); }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_event_level(int v) { mgos_config_set_debug_event_level(&mgos_sys_config, v); }

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stdout_uart(int v) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, v); }

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stderr_uart(int v) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, v); }

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int v) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, v); }

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char * v) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, v); }

/* i2c */
#define MGOS_CONFIG_HAVE_I2C
#define MGOS_SYS_CONFIG_HAVE_I2C
const struct mgos_config_i2c * mgos_config_get_i2c(struct mgos_config *cfg);
static inline const struct mgos_config_i2c * mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }
const struct mgos_conf_entry *mgos_config_schema_i2c(void);
bool mgos_config_parse_i2c(struct mg_str json, struct mgos_config_i2c *cfg);
bool mgos_config_copy_i2c(const struct mgos_config_i2c *src, struct mgos_config_i2c *dst);
void mgos_config_free_i2c(struct mgos_config_i2c *cfg);

/* i2c.enable */
#define MGOS_CONFIG_HAVE_I2C_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
int mgos_config_get_i2c_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_enable(int v) { mgos_config_set_i2c_enable(&mgos_sys_config, v); }

/* i2c.freq */
#define MGOS_CONFIG_HAVE_I2C_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
int mgos_config_get_i2c_freq(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_freq(int v) { mgos_config_set_i2c_freq(&mgos_sys_config, v); }

/* i2c.debug */
#define MGOS_CONFIG_HAVE_I2C_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
int mgos_config_get_i2c_debug(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_debug(int v) { mgos_config_set_i2c_debug(&mgos_sys_config, v); }

/* i2c.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
int mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_sda_gpio(int v) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, v); }

/* i2c.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
int mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_scl_gpio(int v) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, v); }

/* i2c1 */
#define MGOS_CONFIG_HAVE_I2C1
#define MGOS_SYS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c * mgos_config_get_i2c1(struct mgos_config *cfg);
static inline const struct mgos_config_i2c * mgos_sys_config_get_i2c1(void) { return mgos_config_get_i2c1(&mgos_sys_config); }

/* i2c1.enable */
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
int mgos_config_get_i2c1_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_enable(void) { return mgos_config_get_i2c1_enable(&mgos_sys_config); }
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_enable(int v) { mgos_config_set_i2c1_enable(&mgos_sys_config, v); }

/* i2c1.freq */
#define MGOS_CONFIG_HAVE_I2C1_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
int mgos_config_get_i2c1_freq(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_freq(void) { return mgos_config_get_i2c1_freq(&mgos_sys_config); }
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_freq(int v) { mgos_config_set_i2c1_freq(&mgos_sys_config, v); }

/* i2c1.debug */
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
int mgos_config_get_i2c1_debug(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_debug(void) { return mgos_config_get_i2c1_debug(&mgos_sys_config); }
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_debug(int v) { mgos_config_set_i2c1_debug(&mgos_sys_config, v); }

/* i2c1.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
int mgos_config_get_i2c1_sda_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_sda_gpio(void) { return mgos_config_get_i2c1_sda_gpio(&mgos_sys_config); }
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_sda_gpio(int v) { mgos_config_set_i2c1_sda_gpio(&mgos_sys_config, v); }

/* i2c1.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
int mgos_config_get_i2c1_scl_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_scl_gpio(void) { return mgos_config_get_i2c1_scl_gpio(&mgos_sys_config); }
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_scl_gpio(int v) { mgos_config_set_i2c1_scl_gpio(&mgos_sys_config, v); }

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys * mgos_config_get_sys(struct mgos_config *cfg);
static inline const struct mgos_config_sys * mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
const struct mgos_conf_entry *mgos_config_schema_sys(void);
bool mgos_config_parse_sys(struct mg_str json, struct mgos_config_sys *cfg);
bool mgos_config_copy_sys(const struct mgos_config_sys *src, struct mgos_config_sys *dst);
void mgos_config_free_sys(struct mgos_config_sys *cfg);

/* sys.atca */
#define MGOS_CONFIG_HAVE_SYS_ATCA
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca * mgos_config_get_sys_atca(struct mgos_config *cfg);
static inline const struct mgos_config_sys_atca * mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }
const struct mgos_conf_entry *mgos_config_schema_sys_atca(void);
bool mgos_config_parse_sys_atca(struct mg_str json, struct mgos_config_sys_atca *cfg);
bool mgos_config_copy_sys_atca(const struct mgos_config_sys_atca *src, struct mgos_config_sys_atca *dst);
void mgos_config_free_sys_atca(struct mgos_config_sys_atca *cfg);

/* sys.atca.enable */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
int mgos_config_get_sys_atca_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_enable(int v) { mgos_config_set_sys_atca_enable(&mgos_sys_config, v); }

/* sys.atca.i2c_bus */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_i2c_bus(void) { return mgos_config_get_sys_atca_i2c_bus(&mgos_sys_config); }
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_i2c_bus(int v) { mgos_config_set_sys_atca_i2c_bus(&mgos_sys_config, v); }

/* sys.atca.i2c_addr */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int v) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, v); }

/* sys.atca.ecdh_slots_mask */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int v) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, v); }

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_tz_spec(const char * v) { mgos_config_set_sys_tz_spec(&mgos_sys_config, v); }

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_wdt_timeout(int v) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, v); }

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char * v) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, v); }

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device * mgos_config_get_device(struct mgos_config *cfg);
static inline const struct mgos_config_device * mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
const struct mgos_conf_entry *mgos_config_schema_device(void);
bool mgos_config_parse_device(struct mg_str json, struct mgos_config_device *cfg);
bool mgos_config_copy_device(const struct mgos_config_device *src, struct mgos_config_device *dst);
void mgos_config_free_device(struct mgos_config_device *cfg);

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_id(const char * v) { mgos_config_set_device_id(&mgos_sys_config, v); }

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_license(const char * v) { mgos_config_set_device_license(&mgos_sys_config, v); }

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_mac(void) { return mgos_config_get_device_mac(&mgos_sys_config); }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_mac(const char * v) { mgos_config_set_device_mac(&mgos_sys_config, v); }

/* device.public_key */
#define MGOS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
#define MGOS_SYS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
const char * mgos_config_get_device_public_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_public_key(void) { return mgos_config_get_device_public_key(&mgos_sys_config); }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_public_key(const char * v) { mgos_config_set_device_public_key(&mgos_sys_config, v); }

/* device.sn */
#define MGOS_CONFIG_HAVE_DEVICE_SN
#define MGOS_SYS_CONFIG_HAVE_DEVICE_SN
const char * mgos_config_get_device_sn(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_sn(void) { return mgos_config_get_device_sn(&mgos_sys_config); }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_sn(const char * v) { mgos_config_set_device_sn(&mgos_sys_config, v); }

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_conf_acl(const char * v) { mgos_config_set_conf_acl(&mgos_sys_config, v); }

bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value);
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings);

#ifdef __cplusplus
}
#endif
