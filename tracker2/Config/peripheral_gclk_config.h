/* Auto-generated config file peripheral_gclk_config.h */
#ifndef PERIPHERAL_GCLK_CONFIG_H
#define PERIPHERAL_GCLK_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>



// <y> USB Clock Source
// <id> usb_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for USB.
#ifndef CONF_GCLK_USB_SRC
#    define CONF_GCLK_USB_SRC GCLK_PCHCTRL_GEN_GCLK0_Val

#endif

/**
 * \def CONF_GCLK_USB_FREQUENCY
 * \brief USB's Clock frequency
 */
#ifndef CONF_GCLK_USB_FREQUENCY
#    define CONF_GCLK_USB_FREQUENCY 47513600
#endif


// <y> TCC Clock Source
// <id> tcc_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TCC.
#ifndef CONF_GCLK_TCC0_SRC
#    define CONF_GCLK_TCC0_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TCC0_FREQUENCY
 * \brief TCC0's Clock frequency
 */
#ifndef CONF_GCLK_TCC0_FREQUENCY
#    define CONF_GCLK_TCC0_FREQUENCY 47513600
#endif


// <y> EIC Clock Source
// <id> eic_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for EIC.
#ifndef CONF_GCLK_EIC_SRC
#    define CONF_GCLK_EIC_SRC GCLK_PCHCTRL_GEN_GCLK3_Val
#endif

/**
 * \def CONF_GCLK_EIC_FREQUENCY
 * \brief EIC's Clock frequency
 */
#ifndef CONF_GCLK_EIC_FREQUENCY
#    define CONF_GCLK_EIC_FREQUENCY 32768
#endif


// <y> ADC Clock Source
// <id> adc_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for ADC.
#ifndef CONF_GCLK_ADC_SRC
#    define CONF_GCLK_ADC_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_ADC_FREQUENCY
 * \brief ADC's Clock frequency
 */
#ifndef CONF_GCLK_ADC_FREQUENCY
#    define CONF_GCLK_ADC_FREQUENCY 47513600
#endif


// <y> EVSYS Channel 0 Clock Source
// <id> evsys_clk_selection_0

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 0.
#ifndef CONF_GCLK_EVSYS_CHANNEL_0_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_0_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_0_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_0_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_0_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 1 Clock Source
// <id> evsys_clk_selection_1

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 1.
#ifndef CONF_GCLK_EVSYS_CHANNEL_1_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_1_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_1_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_1_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_1_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 2 Clock Source
// <id> evsys_clk_selection_2

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 2.
#ifndef CONF_GCLK_EVSYS_CHANNEL_2_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_2_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_2_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_2_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_2_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 3 Clock Source
// <id> evsys_clk_selection_3

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 3.
#ifndef CONF_GCLK_EVSYS_CHANNEL_3_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_3_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_3_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_3_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_3_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 4 Clock Source
// <id> evsys_clk_selection_4

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 4.
#ifndef CONF_GCLK_EVSYS_CHANNEL_4_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_4_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_4_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_4_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_4_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 5 Clock Source
// <id> evsys_clk_selection_5

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 5.
#ifndef CONF_GCLK_EVSYS_CHANNEL_5_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_5_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_5_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_5_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_5_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 6 Clock Source
// <id> evsys_clk_selection_6

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 6.
#ifndef CONF_GCLK_EVSYS_CHANNEL_6_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_6_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_6_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_6_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_6_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 7 Clock Source
// <id> evsys_clk_selection_7

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 7.
#ifndef CONF_GCLK_EVSYS_CHANNEL_7_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_7_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_7_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_7_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_7_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 8 Clock Source
// <id> evsys_clk_selection_8

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 8.
#ifndef CONF_GCLK_EVSYS_CHANNEL_8_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_8_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_8_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_8_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_8_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 9 Clock Source
// <id> evsys_clk_selection_9

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 9.
#ifndef CONF_GCLK_EVSYS_CHANNEL_9_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_9_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_9_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_9_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_9_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 10 Clock Source
// <id> evsys_clk_selection_10

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 10.
#ifndef CONF_GCLK_EVSYS_CHANNEL_10_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_10_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_10_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_10_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_10_FREQUENCY 47513600.0
#endif

// <y> EVSYS Channel 11 Clock Source
// <id> evsys_clk_selection_11

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for channel 11.
#ifndef CONF_GCLK_EVSYS_CHANNEL_11_SRC
#    define CONF_GCLK_EVSYS_CHANNEL_11_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EVSYS_CHANNEL_11_FREQUENCY
 * \brief EVSYS's Clock frequency
 */

#ifndef CONF_GCLK_EVSYS_CHANNEL_11_FREQUENCY
#    define CONF_GCLK_EVSYS_CHANNEL_11_FREQUENCY 47513600.0
#endif

// <y> RTC Clock Source
// <id> rtc_clk_selection
// <RTC_CLOCK_SOURCE"> RTC source
// <i> Select the clock source for RTC.
#ifndef CONF_GCLK_RTC_SRC
#    define CONF_GCLK_RTC_SRC RTC_CLOCK_SOURCE
#endif

/**
 * \def CONF_GCLK_RTC_FREQUENCY
 * \brief RTC's Clock frequency
 */
#ifndef CONF_GCLK_RTC_FREQUENCY
#    define CONF_GCLK_RTC_FREQUENCY 1024
#endif

/**
 * \def CONF_CPU_FREQUENCY
 * \brief CPU's Clock frequency
 */
#ifndef CONF_CPU_FREQUENCY
#define CONF_CPU_FREQUENCY 47513600
#endif


// <y> Core Clock Source
// <id> core_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for CORE.
#ifndef CONF_GCLK_SERCOM4_CORE_SRC
#    define CONF_GCLK_SERCOM4_CORE_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

// <y> Slow Clock Source
// <id> slow_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the slow clock source.
#ifndef CONF_GCLK_SERCOM4_SLOW_SRC
#    define CONF_GCLK_SERCOM4_SLOW_SRC GCLK_PCHCTRL_GEN_GCLK3_Val
#endif

/**
 * \def CONF_GCLK_SERCOM4_CORE_FREQUENCY
 * \brief SERCOM4's Core Clock frequency
 */
#ifndef CONF_GCLK_SERCOM4_CORE_FREQUENCY
#    define CONF_GCLK_SERCOM4_CORE_FREQUENCY 47513600
#endif

/**
 * \def CONF_GCLK_SERCOM4_SLOW_FREQUENCY
 * \brief SERCOM4's Slow Clock frequency
 */
#ifndef CONF_GCLK_SERCOM4_SLOW_FREQUENCY
#    define CONF_GCLK_SERCOM4_SLOW_FREQUENCY 32768
#endif


// <y> Core Clock Source
// <id> core_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for CORE.
#ifndef CONF_GCLK_SERCOM5_CORE_SRC
#    define CONF_GCLK_SERCOM5_CORE_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

// <y> Slow Clock Source
// <id> slow_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the slow clock source.
#ifndef CONF_GCLK_SERCOM5_SLOW_SRC
#    define CONF_GCLK_SERCOM5_SLOW_SRC GCLK_PCHCTRL_GEN_GCLK3_Val
#endif

/**
 * \def CONF_GCLK_SERCOM5_CORE_FREQUENCY
 * \brief SERCOM5's Core Clock frequency
 */
#ifndef CONF_GCLK_SERCOM5_CORE_FREQUENCY
#    define CONF_GCLK_SERCOM5_CORE_FREQUENCY 47513600
#endif

/**
 * \def CONF_GCLK_SERCOM5_SLOW_FREQUENCY
 * \brief SERCOM5's Slow Clock frequency
 */
#ifndef CONF_GCLK_SERCOM5_SLOW_FREQUENCY
#    define CONF_GCLK_SERCOM5_SLOW_FREQUENCY 32768
#endif


// <y> Core Clock Source
// <id> core_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for CORE.
#ifndef CONF_GCLK_SERCOM0_CORE_SRC
#    define CONF_GCLK_SERCOM0_CORE_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

// <y> Slow Clock Source
// <id> slow_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the slow clock source.
#ifndef CONF_GCLK_SERCOM0_SLOW_SRC
#    define CONF_GCLK_SERCOM0_SLOW_SRC GCLK_PCHCTRL_GEN_GCLK3_Val
#endif

/**
 * \def CONF_GCLK_SERCOM0_CORE_FREQUENCY
 * \brief SERCOM0's Core Clock frequency
 */
#ifndef CONF_GCLK_SERCOM0_CORE_FREQUENCY
#    define CONF_GCLK_SERCOM0_CORE_FREQUENCY 47513600
#endif

/**
 * \def CONF_GCLK_SERCOM0_SLOW_FREQUENCY
 * \brief SERCOM0's Slow Clock frequency
 */
#ifndef CONF_GCLK_SERCOM0_SLOW_FREQUENCY
#    define CONF_GCLK_SERCOM0_SLOW_FREQUENCY 32768
#endif


// <y> Core Clock Source
// <id> core_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for CORE.
#ifndef CONF_GCLK_SERCOM1_CORE_SRC
#    define CONF_GCLK_SERCOM1_CORE_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

// <y> Slow Clock Source
// <id> slow_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the slow clock source.
#ifndef CONF_GCLK_SERCOM1_SLOW_SRC
#    define CONF_GCLK_SERCOM1_SLOW_SRC GCLK_PCHCTRL_GEN_GCLK3_Val
#endif

/**
 * \def CONF_GCLK_SERCOM1_CORE_FREQUENCY
 * \brief SERCOM1's Core Clock frequency
 */
#ifndef CONF_GCLK_SERCOM1_CORE_FREQUENCY
#    define CONF_GCLK_SERCOM1_CORE_FREQUENCY 47513600
#endif

/**
 * \def CONF_GCLK_SERCOM1_SLOW_FREQUENCY
 * \brief SERCOM1's Slow Clock frequency
 */
#ifndef CONF_GCLK_SERCOM1_SLOW_FREQUENCY
#    define CONF_GCLK_SERCOM1_SLOW_FREQUENCY 32768
#endif


// <y> Core Clock Source
// <id> core_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for CORE.
#ifndef CONF_GCLK_SERCOM2_CORE_SRC
#    define CONF_GCLK_SERCOM2_CORE_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

// <y> Slow Clock Source
// <id> slow_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the slow clock source.
#ifndef CONF_GCLK_SERCOM2_SLOW_SRC
#    define CONF_GCLK_SERCOM2_SLOW_SRC GCLK_PCHCTRL_GEN_GCLK3_Val
#endif

/**
 * \def CONF_GCLK_SERCOM2_CORE_FREQUENCY
 * \brief SERCOM2's Core Clock frequency
 */
#ifndef CONF_GCLK_SERCOM2_CORE_FREQUENCY
#    define CONF_GCLK_SERCOM2_CORE_FREQUENCY 47513600
#endif

/**
 * \def CONF_GCLK_SERCOM2_SLOW_FREQUENCY
 * \brief SERCOM2's Slow Clock frequency
 */
#ifndef CONF_GCLK_SERCOM2_SLOW_FREQUENCY
#    define CONF_GCLK_SERCOM2_SLOW_FREQUENCY 32768
#endif


// <y> Core Clock Source
// <id> core_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for CORE.
#ifndef CONF_GCLK_SERCOM3_CORE_SRC
#    define CONF_GCLK_SERCOM3_CORE_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

// <y> Slow Clock Source
// <id> slow_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the slow clock source.
#ifndef CONF_GCLK_SERCOM3_SLOW_SRC
#    define CONF_GCLK_SERCOM3_SLOW_SRC GCLK_PCHCTRL_GEN_GCLK3_Val
#endif

/**
 * \def CONF_GCLK_SERCOM3_CORE_FREQUENCY
 * \brief SERCOM3's Core Clock frequency
 */
#ifndef CONF_GCLK_SERCOM3_CORE_FREQUENCY
#define CONF_GCLK_SERCOM3_CORE_FREQUENCY       48000000
//#    define CONF_GCLK_SERCOM3_CORE_FREQUENCY 47513600
#endif

/**
 * \def CONF_GCLK_SERCOM3_SLOW_FREQUENCY
 * \brief SERCOM3's Slow Clock frequency
 */
#ifndef CONF_GCLK_SERCOM3_SLOW_FREQUENCY
#    define CONF_GCLK_SERCOM3_SLOW_FREQUENCY 32768
#endif


// <y> TC Clock Source
// <id> tc_gclk_selection

// <GCLK_PCHCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_PCHCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_PCHCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_PCHCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_PCHCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_PCHCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_PCHCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_PCHCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TC.
#ifndef CONF_GCLK_TC1_SRC
#    define CONF_GCLK_TC1_SRC GCLK_PCHCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TC1_FREQUENCY
 * \brief TC1's Clock frequency
 */
#ifndef CONF_GCLK_TC1_FREQUENCY
#    define CONF_GCLK_TC1_FREQUENCY 47513600
#endif


// <<< end of configuration section >>>

#endif // PERIPHERAL_GCLK_CONFIG_H
