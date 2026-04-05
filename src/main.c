#include "cmsis/stm32f401xc.h"

int main(){
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;

    GPIOC->MODER &= ~(GPIO_MODER_MODE13);
    GPIOC->MODER |= GPIO_MODER_MODE13_0;

    while (1) {
        GPIOC->ODR ^= GPIO_ODR_OD13;

        for (int i = 0; i < 180000; i++) {

        }
    }

    return 0;
}
