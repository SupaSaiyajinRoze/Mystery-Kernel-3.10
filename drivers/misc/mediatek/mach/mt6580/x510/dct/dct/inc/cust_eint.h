/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6580. Copyright MediaTek Inc. (C) 2013.
 * Sun Mar 26 14:44:41 2017
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH
#ifdef __cplusplus
extern "C" {
#endif
#define CUST_EINT_POLARITY_LOW              0
#define CUST_EINT_POLARITY_HIGH             1
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
#define CUST_EINT_EDGE_SENSITIVE            0
#define CUST_EINT_LEVEL_SENSITIVE           1
//////////////////////////////////////////////////////////////////////////////


#define CUST_EINT_ACCDET_NUM              0
#define CUST_EINT_ACCDET_DEBOUNCE_CN      256
#define CUST_EINT_ACCDET_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_ACCDET_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_GYRO_NUM              1
#define CUST_EINT_GYRO_DEBOUNCE_CN      0
#define CUST_EINT_GYRO_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_GYRO_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_GYRO_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_GSE_1_NUM              2
#define CUST_EINT_GSE_1_DEBOUNCE_CN      0
#define CUST_EINT_GSE_1_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_GSE_1_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_GSE_1_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MSDC1_INS_NUM              3
#define CUST_EINT_MSDC1_INS_DEBOUNCE_CN      1
#define CUST_EINT_MSDC1_INS_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_MSDC1_INS_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_MSDC1_INS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_TOUCH_PANEL_NUM              5
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_TOUCH_PANEL_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ALS_NUM              6
#define CUST_EINT_ALS_DEBOUNCE_CN      0
#define CUST_EINT_ALS_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_ALS_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_DSI_TE_NUM              16
#define CUST_EINT_DSI_TE_DEBOUNCE_CN      0
#define CUST_EINT_DSI_TE_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_DSI_TE_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_DSI_TE_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif //_CUST_EINT_H


