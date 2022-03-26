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
#endif /* PCA9539_H */

/*** end of file ***/