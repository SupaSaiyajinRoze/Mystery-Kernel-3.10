#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_alsps.h>
#include <mach/upmu_common.h>

/* Mysteryagr
 Sync values with x510.dts */

static struct alsps_hw cust_alsps_hw = {
    .i2c_num    = 2,
	.polling_mode_ps =0,
	.polling_mode_als =1,
    .power_id   = MT65XX_POWER_NONE,    /*LDO is not used*/
    .power_vol  = VOL_DEFAULT,          /*LDO is not used*/
    //.i2c_addr   = {0x0C, 0x48, 0x78, 0x00},
    /* MTK: modified to support AAL */
    .als_level  = {0, 1, 7, 15, 50, 100, 500, 1000, 2000, 3000, 6000, 10000, 14000, 18000, 20000},
    .als_value  = {0, 1, 40, 90, 160, 225, 320, 640, 1280, 2000, 3000, 4000, 6000, 8000, 10240, 20000},
    .ps_threshold_high = 20,
    .ps_threshold_low = 14,
    .is_batch_supported_ps = false,
    .is_batch_supported_als = false,
};
struct alsps_hw *get_cust_alsps_hw(void) {
    return &cust_alsps_hw;
}

