

#include "main.h"
//#include "adc.h"
//#include "uart.h"

void printmsg(char *format,...);


int main(void)
{
	//tạo ngắt 1ms với 16M ahb (mặc định)
	rcc_Systick_config(16000);
	USART1_Init();
//	char data[]= "vuquanghuy\n\r";
//	single_conversion_adc1_channel10_pin_C0();

	while(1)
	{
		printf("vu quang huy\n");
		printf("ahihih\n");

		printf("tao branch huy1\n");
		printf("fresher\n");
		printf("moi them dong nay");

		printf("tạo branch huy3\n");
		printf("thêm code cho branch huy3\n");

		printf("tạo branch huy4\n");
		printf("giờ chuyển sang hàm main/n");

		printf("nâng cấp main\n");

		printf("chuyển sang huyvu\n");
		printf("ahihih");

		printf("sửa đổi bằng vuhuy");


//		uart_uart1_transmit((uint8_t*)data,strlen(data),HUY_MAX_DELAY);
		printmsg("hello world \r\n");
		rcc_ms_delay(1000);


	}

}


void printmsg(char *format,...)
 {

	char str[80];

	/*Extract the the argument list using VA apis */
	va_list args;
	va_start(args, format);
	vsprintf(str, format,args);
	uart_uart1_transmit((uint8_t *)str, strlen(str), HUY_MAX_DELAY);
	va_end(args);

 }
