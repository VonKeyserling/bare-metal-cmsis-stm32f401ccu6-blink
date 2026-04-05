#include <stdint.h>

typedef void (*ISR_t)(void);

extern uint32_t _estack;

extern uint32_t _etext;

extern uint32_t _sdata;
extern uint32_t _edata;

extern uint32_t _sbss;
extern uint32_t _ebss;

int main();

void Reset_Handler(void);
void NMI_Handler(void)          __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler(void)    __attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler(void)    __attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler(void)     __attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler(void)   __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler(void)          __attribute__ ((weak, alias("Default_Handler")));
void DebugMon_Handler(void)     __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler(void)       __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler(void)      __attribute__ ((weak, alias("Default_Handler")));

/* Interrupções periféricas (principais do STM32F401) */
void WWDG_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void PVD_IRQHandler(void)        __attribute__ ((weak, alias("Default_Handler")));
void TAMP_STAMP_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void RTC_WKUP_IRQHandler(void)   __attribute__ ((weak, alias("Default_Handler")));
void FLASH_IRQHandler(void)      __attribute__ ((weak, alias("Default_Handler")));
void RCC_IRQHandler(void)        __attribute__ ((weak, alias("Default_Handler")));
void EXTI0_IRQHandler(void)      __attribute__ ((weak, alias("Default_Handler")));
void EXTI1_IRQHandler(void)      __attribute__ ((weak, alias("Default_Handler")));
void EXTI2_IRQHandler(void)      __attribute__ ((weak, alias("Default_Handler")));
void EXTI3_IRQHandler(void)      __attribute__ ((weak, alias("Default_Handler")));
void EXTI4_IRQHandler(void)      __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream2_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream3_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream4_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream5_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream6_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void ADC_IRQHandler(void)        __attribute__ ((weak, alias("Default_Handler")));
void CAN1_TX_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void CAN1_RX0_IRQHandler(void)   __attribute__ ((weak, alias("Default_Handler")));
void CAN1_RX1_IRQHandler(void)   __attribute__ ((weak, alias("Default_Handler")));
void CAN1_SCE_IRQHandler(void)   __attribute__ ((weak, alias("Default_Handler")));
void EXTI9_5_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void TIM1_BRK_TIM9_IRQHandler(void)   __attribute__ ((weak, alias("Default_Handler")));
void TIM1_UP_TIM10_IRQHandler(void)   __attribute__ ((weak, alias("Default_Handler")));
void TIM1_TRG_COM_TIM11_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM1_CC_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void TIM2_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void TIM3_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void TIM4_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void I2C1_EV_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void I2C1_ER_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void I2C2_EV_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void I2C2_ER_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void SPI1_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void SPI2_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void USART1_IRQHandler(void)     __attribute__ ((weak, alias("Default_Handler")));
void USART2_IRQHandler(void)     __attribute__ ((weak, alias("Default_Handler")));
void EXTI15_10_IRQHandler(void)  __attribute__ ((weak, alias("Default_Handler")));
void RTC_Alarm_IRQHandler(void)  __attribute__ ((weak, alias("Default_Handler")));
void OTG_FS_WKUP_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream7_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void SDIO_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void TIM5_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void SPI3_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream0_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream1_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream2_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream3_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream4_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_FS_IRQHandler(void)     __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream5_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream6_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream7_IRQHandler(void) __attribute__ ((weak, alias("Default_Handler")));
void USART6_IRQHandler(void)     __attribute__ ((weak, alias("Default_Handler")));
void I2C3_EV_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void I2C3_ER_IRQHandler(void)    __attribute__ ((weak, alias("Default_Handler")));
void FPU_IRQHandler(void)        __attribute__ ((weak, alias("Default_Handler")));
void SPI4_IRQHandler(void)       __attribute__ ((weak, alias("Default_Handler")));

void Default_Handler(){
    while (1) {

    }
}

void Reset_Handler(void){
    uint32_t *source_data = &_etext;
    uint32_t *destination_data = &_sdata;

    while (destination_data < &_edata) {
        *destination_data++ = *source_data++;
    }

    source_data = &_sbss;

    while (source_data < &_ebss) {
        *source_data++ = 0;
    }

    main();
}

ISR_t isr_vector[] __attribute__((section(".isr_vector"))) = {
    (ISR_t)&_estack,
    Reset_Handler,
    NMI_Handler,
    HardFault_Handler,
    MemManage_Handler,
    BusFault_Handler,
    UsageFault_Handler,
    0,                          /* 0x1C - reservado */
    0,                          /* 0x20 - reservado */
    0,                          /* 0x24 - reservado */
    0,                          /* 0x28 - reservado */
    SVC_Handler,
    DebugMon_Handler,
    0,                          /* 0x34 - reservado */
    PendSV_Handler,
    SysTick_Handler,
    /* Interrupções externas (periféricos) */
    WWDG_IRQHandler,              /* 0x40 */
    PVD_IRQHandler,
    TAMP_STAMP_IRQHandler,
    RTC_WKUP_IRQHandler,
    FLASH_IRQHandler,
    RCC_IRQHandler,
    EXTI0_IRQHandler,
    EXTI1_IRQHandler,
    EXTI2_IRQHandler,
    EXTI3_IRQHandler,
    EXTI4_IRQHandler,
    DMA1_Stream0_IRQHandler,
    DMA1_Stream1_IRQHandler,
    DMA1_Stream2_IRQHandler,
    DMA1_Stream3_IRQHandler,
    DMA1_Stream4_IRQHandler,
    DMA1_Stream5_IRQHandler,
    DMA1_Stream6_IRQHandler,
    ADC_IRQHandler,
    CAN1_TX_IRQHandler,
    CAN1_RX0_IRQHandler,
    CAN1_RX1_IRQHandler,
    CAN1_SCE_IRQHandler,
    EXTI9_5_IRQHandler,
    TIM1_BRK_TIM9_IRQHandler,
    TIM1_UP_TIM10_IRQHandler,
    TIM1_TRG_COM_TIM11_IRQHandler,
    TIM1_CC_IRQHandler,
    TIM2_IRQHandler,
    TIM3_IRQHandler,
    TIM4_IRQHandler,
    I2C1_EV_IRQHandler,
    I2C1_ER_IRQHandler,
    I2C2_EV_IRQHandler,
    I2C2_ER_IRQHandler,
    SPI1_IRQHandler,
    SPI2_IRQHandler,
    USART1_IRQHandler,
    USART2_IRQHandler,
    0,                          /* USART3 não existe no F401CC */
    EXTI15_10_IRQHandler,
    RTC_Alarm_IRQHandler,
    OTG_FS_WKUP_IRQHandler,
    0,
    0,
    0,
    0,
    DMA1_Stream7_IRQHandler,
    0,
    SDIO_IRQHandler,
    TIM5_IRQHandler,
    SPI3_IRQHandler,
    0,
    0,
    0,
    0,
    DMA2_Stream0_IRQHandler,
    DMA2_Stream1_IRQHandler,
    DMA2_Stream2_IRQHandler,
    DMA2_Stream3_IRQHandler,
    DMA2_Stream4_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    OTG_FS_IRQHandler,
    DMA2_Stream5_IRQHandler,
    DMA2_Stream6_IRQHandler,
    DMA2_Stream7_IRQHandler,
    USART6_IRQHandler,
    I2C3_EV_IRQHandler,
    I2C3_ER_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    FPU_IRQHandler,
    0,
    0,
    SPI4_IRQHandler,
    0,
    0
};
