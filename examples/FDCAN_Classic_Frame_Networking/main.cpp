#include <gpio.h>
#include <mco.h>

static const pin_t          LED = PB0;
static const pin_t          LED2 = PE1;
static const pin_t          LED3 = PB14;
static const pin_t          BTN = PC13;
static const input_type_t   BTN_TYPE = pull_down;
static const interrupt_t    BTN_ISR = interrupt::EXTI15_10;
static const pin_t          PROBE = PA8;

static const int            SERIAL_USART = 3;
static const pin_t          SERIAL_TX = PD8;
static const pin_t          SERIAL_RX = PD9;
static const interrupt_t    SERIAL_ISR = interrupt::USART3;

extern "C" int cmain(void);

using led1 = output_t<LED>;
using led2 = output_t<LED2>;
using led3 = output_t<LED3>;
using probe = output_t<PROBE>;
using mco2 = mco_t<PC9>;

extern "C" void write_led1(int x)
{
    led1::write(x != 0);
}

extern "C" void write_led2(int x)
{
    led2::write(x != 0);
}

extern "C" void write_led3(int x)
{
    led3::write(x != 0);
}

extern "C" void write_probe(int x)
{
    probe::write(x != 0);
}

extern "C" void setup_mco()
{
    mco2::setup<mco_sys, 10>();
}

int main()
{
    led1::setup();
    led2::setup();
    led3::setup();
    probe::setup();
    cmain();
}

