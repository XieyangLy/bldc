/*
	Copyright 2019 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef IMU_IMU_H_
#define IMU_IMU_H_

#include "ch.h"
#include "hal.h"

void imu_init(void);
void imu_init_mpu9x50(stm32_gpio_t *sda_gpio, int sda_pin, stm32_gpio_t *scl_gpio, int scl_pin);
float imu_get_roll(void);
float imu_get_pitch(void);
float imu_get_yaw(void);
void imu_get_rpy(float *rpy);
void imu_get_accel(float *accel);
void imu_get_gyro(float *gyro);
void imu_get_mag(float *mag);
void imu_get_accel_derotated(float *accel);
void imu_get_quaternions(float *q);

#endif /* IMU_IMU_H_ */
