
#ifndef MULTICORRELATOR_RESAMPLER_3_1_H
#define MULTICORRELATOR_RESAMPLER_3_1_H


/****************** Include Files ********************/
#include "xil_types.h"
#include "xstatus.h"

#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG0_OFFSET 0
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG1_OFFSET 4
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG2_OFFSET 8
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG3_OFFSET 12
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG4_OFFSET 16
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG5_OFFSET 20
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG6_OFFSET 24
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG7_OFFSET 28
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG8_OFFSET 32
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG9_OFFSET 36
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG10_OFFSET 40
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG11_OFFSET 44
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG12_OFFSET 48
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG13_OFFSET 52
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG14_OFFSET 56
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG15_OFFSET 60
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG16_OFFSET 64
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG17_OFFSET 68
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG18_OFFSET 72
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG19_OFFSET 76
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG20_OFFSET 80
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG21_OFFSET 84
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG22_OFFSET 88
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG23_OFFSET 92
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG24_OFFSET 96
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG25_OFFSET 100
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG26_OFFSET 104
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG27_OFFSET 108
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG28_OFFSET 112
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG29_OFFSET 116
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG30_OFFSET 120
#define MULTICORRELATOR_RESAMPLER_3_1_S00_AXI_SLV_REG31_OFFSET 124


/**************************** Type Definitions *****************************/
/**
 *
 * Write a value to a MULTICORRELATOR_RESAMPLER_3_1 register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the MULTICORRELATOR_RESAMPLER_3_1device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void MULTICORRELATOR_RESAMPLER_3_1_mWriteReg(u32 BaseAddress, unsigned RegOffset, u32 Data)
 *
 */
#define MULTICORRELATOR_RESAMPLER_3_1_mWriteReg(BaseAddress, RegOffset, Data) \
  	Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

/**
 *
 * Read a value from a MULTICORRELATOR_RESAMPLER_3_1 register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the MULTICORRELATOR_RESAMPLER_3_1 device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	u32 MULTICORRELATOR_RESAMPLER_3_1_mReadReg(u32 BaseAddress, unsigned RegOffset)
 *
 */
#define MULTICORRELATOR_RESAMPLER_3_1_mReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

/************************** Function Prototypes ****************************/
/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the MULTICORRELATOR_RESAMPLER_3_1 instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus MULTICORRELATOR_RESAMPLER_3_1_Reg_SelfTest(void * baseaddr_p);

#endif // MULTICORRELATOR_RESAMPLER_3_1_H
