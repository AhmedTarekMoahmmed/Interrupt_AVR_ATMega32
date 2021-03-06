/*
 * INT_config.h
 *
 *  Created on: Mar 20, 2019
 *      Author: Ahmed Tarek
 */

#ifndef INT_CONFIG_H_
#define INT_CONFIG_H_


/*Range :
 * 		INT0_SENSE_LEVEL_FALLING_EDGE
		INT0_SENSE_LEVEL_RISING_EDGE
		INT0_SENSE_LEVEL_ON_CHANGE
		INT0_SENSE_LEVEL_LOW_LEVEL
 * */

#define INT0_INIT_STATUE	DISABLE
#define INT0_INIT_LEVEL		INT0_SENSE_LEVEL_FALLING_EDGE


/*Range :
 * 		INT1_SENSE_LEVEL_FALLING_EDGE
		INT1_SENSE_LEVEL_RISING_EDGE
		INT1_SENSE_LEVEL_ON_CHANGE
		INT1_SENSE_LEVEL_LOW_LEVEL
 * */

#define INT1_INIT_STATUE	DISABLE
#define INT1_INIT_LEVEL		INT1_SENSE_LEVEL_FALLING_EDGE

/*Range :
 * 		INT2_SENSE_LEVEL_FALLING_EDGE
		INT2_SENSE_LEVEL_RISING_EDGE
 * */

#define INT2_INIT_STATUE	DISABLE
#define INT2_INIT_LEVEL		INT2_SENSE_LEVEL_FALLING_EDGE


#endif /* INT_CONFIG_H_ */
