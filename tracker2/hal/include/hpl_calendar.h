/**
 * \file
 *
 * \brief Generic CALENDAR functionality declaration.
 *
 * Copyright (C) 2014-2016 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */
#ifndef _HPL_CALENDER_H_INCLUDED
#define _HPL_CALENDER_H_INCLUDED

#include <compiler.h>
#include "hpl_irq.h"

#ifdef __cplusplus
	extern "C" {
#endif

/**
 * \brief Calendar structure
 *
 * The Calendar structure forward declaration.
 */
struct calendar_dev;

/**
 * \brief Available mask options for alarms.
 *
 * Available mask options for alarms.
 */
enum calendar_alarm_option {
	/** Alarm disabled. */
	CALENDAR_ALARM_MATCH_DISABLED = 0,
	/** Alarm match on second. */
	CALENDAR_ALARM_MATCH_SEC,
	/** Alarm match on second and minute. */
	CALENDAR_ALARM_MATCH_MIN,
	/** Alarm match on second, minute, and hour. */
	CALENDAR_ALARM_MATCH_HOUR,
	/** Alarm match on second, minute, hour, and day. */
	CALENDAR_ALARM_MATCH_DAY,
	/** Alarm match on second, minute, hour, day, and month. */
	CALENDAR_ALARM_MATCH_MONTH,
	/** Alarm match on second, minute, hour, day, month and year. */
	CALENDAR_ALARM_MATCH_YEAR
};

/**
 * \brief Available mode for alarms.
 */
enum calendar_alarm_mode {
	ONESHOT = 1,
	REPEAT
};
/**
 * \brief Time struct for calendar
 */
struct calendar_time {
	/*range from 0 to 59*/
	uint8_t sec;
	/*range from 0 to 59*/
	uint8_t min;
	/*range from 0 to 23*/
	uint8_t hour;
};

/**
 * \brief Time struct for calendar
 */
struct calendar_date {
	/*range from 1 to 28/29/30/31*/
	uint8_t day;
	/*range from 1 to 12*/
	uint8_t month;
	/*absolute year>= 1970(such as 2000)*/
	uint16_t year;
};

/**
 * \brief Prototype of callbak on alarm match
 */
typedef void (*calendar_drv_cb_alarm_t)(struct calendar_dev *const dev);

/**
 * \brief Structure of Calendar instance
 */
struct calendar_dev {
	/** Pointer to the hardware base */
	void *hw;
	/** Alarm match callback */
	calendar_drv_cb_alarm_t callback;
	/** IRQ struct */
	struct _irq_descriptor irq;
};

/**
 * \brief Initialize Calendar instance
 *
 * \param[in] dev The pointer to calendar device struct
 *
 * \return ERR_NONE on success, or an error code on failure.
 */
int32_t _calendar_init(struct calendar_dev *const dev);

/**
 * \brief Deinitialize Calendar instance
 *
 * \param[in] dev The pointer to calendar device struct
 *
 * \return ERR_NONE on success, or an error code on failure.
 */
int32_t _calendar_deinit(struct calendar_dev *const dev);

/**
 * \brief Enable Calendar instance
 *
 * \param[in] dev The pointer to calendar device struct
 *
 * \return ERR_NONE on success, or an error code on failure.
 */
int32_t _calendar_enable(struct calendar_dev *const dev);

/**
 * \brief Disable Calendar instance
 *
 * \param[in] dev The pointer to calendar device struct
 *
 * \return ERR_NONE on success, or an error code on failure.
 */
int32_t _calendar_disable(struct calendar_dev *const dev);

/**
 * \brief Set counter for calendar
 *
 * \param[in] dev The pointer to calendar device struct
 * \param[in] counter The counter for set
 *
 * \return ERR_NONE on success, or an error code on failure.
 */
int32_t _calendar_set_counter(struct calendar_dev *const dev,
		const uint32_t counter);

/**
 * \brief Get counter for calendar
 *
 * \param[in] dev The pointer to calendar device struct
 *
 * \return return current counter value
 */
uint32_t _calendar_get_counter(struct calendar_dev *const dev);

/**
 * \brief Set compare value for calendar
 *
 * \param[in] dev The pointer to calendar device struct
 * \param[in] comp The compare value for set
 *
 * \return ERR_NONE on success, or an error code on failure.
 */
int32_t _calendar_set_comp(struct calendar_dev *const dev,
		const uint32_t comp);

/**
 * \brief Get compare value for calendar
 *
 * \param[in] dev The pointer to calendar device struct
 *
 * \return return current compare value
 */
uint32_t _calendar_get_comp(struct calendar_dev *const dev);

/**
 * \brief Register callback for calendar alarm
 *
 * \param[in] dev The pointer to calendar device struct
 * \param[in] callback The pointer to callback function
 *
 * \return ERR_NONE on success, or an error code on failure.
 */
int32_t _calendar_register_callback(struct calendar_dev *const dev,
		calendar_drv_cb_alarm_t callback);

/**
 * \brief Set calendar IRQ
 *
 * \param[in] dev The pointer to calendar device struct
 */
void _calendar_set_irq(struct calendar_dev *const dev);

#ifdef __cplusplus
	}
#endif

#endif /* _HPL_RTC_H_INCLUDED */
