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

/* PCA9539 I2C control register power-up default definitions */
#define PCA9539_OUTPUT_PORT_0_DEFAULT           0xFF    /* PCA9539 Output Port 0 register default             */
#define PCA9539_OUTPUT_PORT_1_DEFAULT           0xFF    /* PCA9539 Output Port 1 register default             */
#define PCA9539_POLARITY_INV_PORT_0_DEFAULT     0x00    /* PCA9539 Polarity Inversion Port 0 register default */
#define PCA9539_POLARITY_INV_PORT_1_DEFAULT     0x00    /* PCA9539 Polarity Inversion Port 1 register default */
#define PCA9539_CONFIG_PORT_0_DEFAULT           0xFF    /* PCA9539 Configuration Port 0 register default      */
#define PCA9539_CONFIG_PORT_1_DEFAULT           0xFF    /* PCA9539 Configuration Port 1 register default      */

/* PCA9539 Port 0 and 1 input or output pin index definition */
#define PCA9539_PIN0_INDEX    0x00    /* PCA9539 Port 0 and 1 Pin Register 0 (P00 or P10) */
#define PCA9539_PIN1_INDEX    0x01    /* PCA9539 Port 0 and 1 Pin Register 1 (P01 or P11) */
#define PCA9539_PIN2_INDEX    0x02    /* PCA9539 Port 0 and 1 Pin Register 2 (P02 or P12) */
#define PCA9539_PIN3_INDEX    0x03    /* PCA9539 Port 0 and 1 Pin Register 3 (P03 or P13) */
#define PCA9539_PIN4_INDEX    0x04    /* PCA9539 Port 0 and 1 Pin Register 4 (P04 or P14) */
#define PCA9539_PIN5_INDEX    0x05    /* PCA9539 Port 0 and 1 Pin Register 5 (P05 or P15) */
#define PCA9539_PIN6_INDEX    0x06    /* PCA9539 Port 0 and 1 Pin Register 6 (P06 or P16) */
#define PCA9539_PIN7_INDEX    0x07    /* PCA9539 Port 0 and 1 Pin Register 7 (P07 or P17) */

/* PCA9539 I/O direction */
#define PCA9539_PIN_MODE_OUTPUT    0x00    /* Pin is configured as ouput                */
#define PCA9539_PIN_MODE_INPUT     0x01    /* Pin is configured as high-impedance input */

/* PCA9539 arbitrary port index */
#define PCA9539_PORT0    0x00    /* Port 0 (P00 - P07) */
#define PCA9539_PORT1    0x01    /* Port 1 (P10 - P17) */
#endif /* PCA9539_H */

/*** end of file ***/