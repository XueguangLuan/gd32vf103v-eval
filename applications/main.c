/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-07-23     tyustli      first version
 */

#include <rtthread.h>
#include <rtdevice.h>

#include "gd32vf103_rcu.h"
#include "gd32vf103_gpio.h"

static void rt_thread_delay1(int n)
{
    volatile int delay=1000*600;

    while (delay--);
}

int main(int argc, char *argv[])
{
    rt_kprintf("hello GD32VF103VBT6! build %s %s\r\n", __DATE__, __TIME__);

    // gpio clk
    // rcu_periph_clock_enable(RCU_GPIOE);
    // gpio init
    // gpio_init(GPIOE, GPIO_MODE_OUT_PP, GPIO_OSPEED_2MHZ, GPIO_PIN_3);

    while (1)
    {
        // gpio_bit_reset(GPIOE, GPIO_PIN_3);
        rt_kprintf("gpio_bit_reset\r\n");
        rt_thread_delay(1000);
        rt_kprintf("current tick : %d\n", rt_tick_get());

        // gpio_bit_set(GPIOE, GPIO_PIN_3);
        rt_kprintf("gpio_bit_set\r\n");
        rt_thread_delay(1000);
        rt_kprintf("current tick : %d\n", rt_tick_get());

/*         gpio_bit_reset(GPIOE, GPIO_PIN_3);
        rt_kprintf("gpio_bit_set\r\n");
        rt_thread_delay1(500);
 */    }
    
    return RT_EOK;
}

/******************** end of file *******************/

