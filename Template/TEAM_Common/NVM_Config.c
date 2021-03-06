<<<<<<< HEAD
<<<<<<< HEAD
/**
 * \file
 * \brief Non-Volatile memory configuration handling.
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements the infrastructure to store configuration data
 * into non-volatile FLASH memory on the microcontroller.
 */

#include "Platform.h"
#if PL_CONFIG_HAS_CONFIG_NVM
#include "NVM_Config.h"
#include "IFsh1.h"

static bool isErased(uint8_t *ptr, int nofBytes) {
  while (nofBytes>0) {
    if (*ptr!=0xFF) {
      return FALSE; /* byte not erased */
    }
    ptr++;
    nofBytes--;
  }
  return TRUE;
}

uint8_t NVMC_SaveReflectanceData(void *data, uint16_t dataSize) {
  if (dataSize>NVMC_REFLECTANCE_DATA_SIZE) {
    return ERR_OVERFLOW;
  }
  return IFsh1_SetBlockFlash(data, (IFsh1_TAddress)(NVMC_REFLECTANCE_DATA_START_ADDR), dataSize);  
}

void *NVMC_GetReflectanceData(void) {
  if (isErased((uint8_t*)NVMC_REFLECTANCE_DATA_START_ADDR, NVMC_REFLECTANCE_DATA_SIZE)) {
    return NULL;
  }
  return (void*)NVMC_REFLECTANCE_DATA_START_ADDR;
}

uint8_t NVMC_SavePIDData(void *data, uint16_t dataSize) {
  if (dataSize>NVMC_PID_SETTINGS_DATA_SIZE) {
    return ERR_OVERFLOW;
  }
  return IFsh1_SetBlockFlash(data, (IFsh1_TAddress)(NVMC_PID_SETTINGS_DATA_START_ADDR), dataSize);
}

void *NVMC_GetPIDData(void) {
  if (isErased((uint8_t*)NVMC_PID_SETTINGS_DATA_START_ADDR, NVMC_PID_SETTINGS_DATA_SIZE)) {
    return NULL;
  }
  return (void*)NVMC_PID_SETTINGS_DATA_START_ADDR;
}


void NVMC_Init(void) {
  /* nothing needed */
}

void NVMC_Deinit(void) {
  /* nothing needed */
}

#endif /* PL_CONFIG_HAS_CONFIG_NVM */


=======
/**
 * \file
 * \brief Non-Volatile memory configuration handling.
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements the infrastructure to store configuration data
 * into non-volatile FLASH memory on the microcontroller.
 */

#include "Platform.h"
#if PL_CONFIG_HAS_CONFIG_NVM
#include "NVM_Config.h"
#include "IFsh1.h"

static bool isErased(uint8_t *ptr, int nofBytes) {
  while (nofBytes>0) {
    if (*ptr!=0xFF) {
      return FALSE; /* byte not erased */
    }
    ptr++;
    nofBytes--;
  }
  return TRUE;
}

uint8_t NVMC_SaveReflectanceData(void *data, uint16_t dataSize) {
  if (dataSize>NVMC_REFLECTANCE_DATA_SIZE) {
    return ERR_OVERFLOW;
  }
  return IFsh1_SetBlockFlash(data, (IFsh1_TAddress)(NVMC_REFLECTANCE_DATA_START_ADDR), dataSize);  
}

void *NVMC_GetReflectanceData(void) {
  if (isErased((uint8_t*)NVMC_REFLECTANCE_DATA_START_ADDR, NVMC_REFLECTANCE_DATA_SIZE)) {
    return NULL;
  }
  return (void*)NVMC_REFLECTANCE_DATA_START_ADDR;
}

uint8_t NVMC_SavePIDData(void *data, uint16_t dataSize) {
  if (dataSize>NVMC_PID_SETTINGS_DATA_SIZE) {
    return ERR_OVERFLOW;
  }
  return IFsh1_SetBlockFlash(data, (IFsh1_TAddress)(NVMC_PID_SETTINGS_DATA_START_ADDR), dataSize);
}

void *NVMC_GetPIDData(void) {
  if (isErased((uint8_t*)NVMC_PID_SETTINGS_DATA_START_ADDR, NVMC_PID_SETTINGS_DATA_SIZE)) {
    return NULL;
  }
  return (void*)NVMC_PID_SETTINGS_DATA_START_ADDR;
}


void NVMC_Init(void) {
  /* nothing needed */
}

void NVMC_Deinit(void) {
  /* nothing needed */
}

#endif /* PL_CONFIG_HAS_CONFIG_NVM */


>>>>>>> 0017e4b2604695de8388f95d077525bce50dad25
=======
/**
 * \file
 * \brief Non-Volatile memory configuration handling.
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements the infrastructure to store configuration data
 * into non-volatile FLASH memory on the microcontroller.
 */

#include "Platform.h"
#if PL_CONFIG_HAS_CONFIG_NVM
#include "NVM_Config.h"
#include "IFsh1.h"

static bool isErased(uint8_t *ptr, int nofBytes) {
  while (nofBytes>0) {
    if (*ptr!=0xFF) {
      return FALSE; /* byte not erased */
    }
    ptr++;
    nofBytes--;
  }
  return TRUE;
}

uint8_t NVMC_SaveReflectanceData(void *data, uint16_t dataSize) {
  if (dataSize>NVMC_REFLECTANCE_DATA_SIZE) {
    return ERR_OVERFLOW;
  }
  return IFsh1_SetBlockFlash(data, (IFsh1_TAddress)(NVMC_REFLECTANCE_DATA_START_ADDR), dataSize);  
}

void *NVMC_GetReflectanceData(void) {
  if (isErased((uint8_t*)NVMC_REFLECTANCE_DATA_START_ADDR, NVMC_REFLECTANCE_DATA_SIZE)) {
    return NULL;
  }
  return (void*)NVMC_REFLECTANCE_DATA_START_ADDR;
}

uint8_t NVMC_SavePIDData(void *data, uint16_t dataSize) {
  if (dataSize>NVMC_PID_SETTINGS_DATA_SIZE) {
    return ERR_OVERFLOW;
  }
  return IFsh1_SetBlockFlash(data, (IFsh1_TAddress)(NVMC_PID_SETTINGS_DATA_START_ADDR), dataSize);
}

void *NVMC_GetPIDData(void) {
  if (isErased((uint8_t*)NVMC_PID_SETTINGS_DATA_START_ADDR, NVMC_PID_SETTINGS_DATA_SIZE)) {
    return NULL;
  }
  return (void*)NVMC_PID_SETTINGS_DATA_START_ADDR;
}


void NVMC_Init(void) {
  /* nothing needed */
}

void NVMC_Deinit(void) {
  /* nothing needed */
}

#endif /* PL_CONFIG_HAS_CONFIG_NVM */


>>>>>>> 0017e4b2604695de8388f95d077525bce50dad25
