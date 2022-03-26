/** @file pca9539.h
 * 
 * @brief A driver for the Texas Instruments PCA9539 16-bit I2C I/O expander
 *
 * @author Matthew Kaiser (github.com/MattKai45)
 */ 

#ifndef PCA9539_H
#define PCA9539_H

/**
* PCA9539 7-bit base address. This should be shifted by 1 bit to include the R/W bit.
* The base address would appear as 0xE8 for read and 0xE9 for write. If the A0-A2 pins
* are pulled high the appropriate bit should be set. Example,If A1 is high:
* PCA9539_ADDR = PCA9539_7BIT_BASE_ADDRESS | PCA9539_A1.
*/
#define PCA9539_7BIT_BASE_ADDRESS (uint8_t)0x74
#define PCA9539_A0                (uint8_t)(1 << 0)
#define PCA9539_A1                (uint8_t)(1 << 1)

/* PCA9539 I2C control register definitions */
#define PCA9539_REG_INPUT_PORT_0            0x00    /* PCA9539 Input Port 0 register              */
#define PCA9539_REG_INPUT_PORT_1            0x01    /* PCA9539 Input Port 1 register              */
#define PCA9539_REG_OUTPUT_PORT_0           0x02    /* PCA9539 Output Port 0 register             */
#define PCA9539_REG_OUTPUT_PORT_1           0x03    /* PCA9539 Output Port 1 register             */
#define PCA9539_REG_POLARITY_INV_PORT_0     0x04    /* PCA9539 Polarity Inversion Port 0 register */
#define PCA9539_REG_POLARITY_INV_PORT_1     0x05    /* PCA9539 Polarity Inversion Port 1 register */
#define PCA9539_REG_CONFIG_PORT_0           0x06    /* PCA9539 Configuration Port 0 register      */
#define PCA9539_REG_CONFIG_PORT_1           0x07    /* PCA9539 Configuration Port 1 register      */

#endif /* PCA9539_H */

/*** end of file ***/