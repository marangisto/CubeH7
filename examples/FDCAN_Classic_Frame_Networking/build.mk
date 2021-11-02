MCU=STM32H743ZITx
BASE_DIR=../../..
LIBS=corona CubeH7
DEFS=USE_HAL_DRIVER USE_FULL_LL_DRIVER STM32H743xx USE_STM32H743I_EVAL
#INCLUDE=../Inc ../../../../../../Drivers/STM32H7xx_HAL_Driver/Inc ../../../../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include ../../../../../../Drivers/CMSIS/Include ../../../../../../Drivers/BSP/STM32H743I-EVAL
LINK=STM32H743XIHx_FLASH.ld
ENTRY=Reset_Handler
