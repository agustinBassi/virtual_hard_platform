
/*==================[inclusions]=============================================*/

#include "appPoncho_board.h"
#include "sapi.h"     // <= sAPI header

/*==================[macros and definitions]=================================*/

/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/

static void	TestBluetoothCommands	(void);

/*==================[internal data definition]===============================*/

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

//static void	TestBluetoothCommands	(void){
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_GPIO_READ);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_GPIO_WRITE);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_ADC_READ);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_DAC_WRITE);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_LCD_WRITE_BYTE);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_LCD_WRITE_STRING);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_7SEG_WRITE);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_MOTOR_RIGHT);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, COMMAND_MOTOR_LEFT);
//	delay(2000);
//	gpioToggle(LEDB);
//
//	while (gpioRead(TEC2));
//	uartWriteByte(UART_232, 15);
//	delay(2000);
//	gpioToggle(LEDB);
//
//}
//
//static void TestGpioWrite	(){
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDR, BT_HIGH);
//	gpioWrite(LEDR, TRUE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDG, BT_HIGH);
//	gpioWrite(LEDG, TRUE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDB, BT_HIGH);
//	gpioWrite(LEDB, TRUE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LED1, BT_HIGH);
//	gpioWrite(LED1, TRUE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LED2, BT_HIGH);
//	gpioWrite(LED2, TRUE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LED3, BT_HIGH);
//	gpioWrite(LED3, TRUE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDR, BT_LOW);
//	gpioWrite(LEDR, FALSE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDG, BT_LOW);
//	gpioWrite(LEDG, FALSE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDB, BT_LOW);
//	gpioWrite(LEDB, FALSE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LED1, BT_LOW);
//	gpioWrite(LED1, FALSE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LED2, BT_LOW);
//	gpioWrite(LED2, FALSE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LED3, BT_LOW);
//	gpioWrite(LED3, FALSE);
//	delay(2000);
//
//
//}
//
//static void TestGpioRead (){
//	uint8_t state;
//
//	appPonchoGpioRead(BT_TEC1, &state);
//	if (state == BT_LOW){
//		gpioWrite(LEDB, ON);
//		appPonchoGpioWrite(BT_LEDB, BT_HIGH);
//	} else {
//		gpioWrite(LEDB, OFF);
//		appPonchoGpioWrite(BT_LEDB, BT_LOW);
//	}
//	delay (200);
//
//	appPonchoGpioRead(BT_TEC2, &state);
//	if (state == BT_LOW){
//		gpioWrite(LED1, ON);
//		appPonchoGpioWrite(BT_LED1, BT_HIGH);
//	} else {
//		gpioWrite(LED1, OFF);
//		appPonchoGpioWrite(BT_LED1, BT_LOW);
//	}
//	delay (200);
//
//	appPonchoGpioRead(BT_TEC3, &state);
//	if (state == BT_LOW){
//		gpioWrite(LED2, ON);
//		appPonchoGpioWrite(BT_LED2, BT_HIGH);
//	} else {
//		gpioWrite(LED2, OFF);
//		appPonchoGpioWrite(BT_LED2, BT_LOW);
//	}
//	delay (200);
//
//	appPonchoGpioRead(BT_TEC4, &state);
//	if (state == BT_LOW){
//		gpioWrite(LED3, ON);
//		appPonchoGpioWrite(BT_LED3, BT_HIGH);
//	} else {
//		gpioWrite(LED3, OFF);
//		appPonchoGpioWrite(BT_LED3, BT_LOW);
//	}
//	delay (200);
//
//}
//
//static void TestGpioToggle (){
//	uint8_t state;
//
//	appPonchoGpioToggle(BT_LEDR);
//	delay (200);
//
//	appPonchoGpioToggle(BT_LEDG);
//	delay (200);
//
//	appPonchoGpioToggle(BT_LEDB);
//	delay (200);
//
//	appPonchoGpioToggle(BT_LED1);
//	delay (200);
//
//	appPonchoGpioToggle(BT_LED2);
//	delay (200);
//
//	appPonchoGpioToggle(BT_LED3);
//	delay (200);
//}
//
//static void TestGpioReadAndToggle (){
//	uint8_t state;
//
//	appPonchoGpioRead(BT_TEC1, &state);
//	if (state == BT_LOW){
//		appPonchoGpioToggle(BT_LEDB);
//	}
//	delay (200);
//
//	appPonchoGpioRead(BT_TEC2, &state);
//	if (state == BT_LOW){
//		appPonchoGpioToggle(BT_LED1);
//	}
//	delay (200);
//
//	appPonchoGpioRead(BT_TEC3, &state);
//	if (state == BT_LOW){
//		appPonchoGpioToggle(BT_LED2);
//	}
//	delay (200);
//
//	appPonchoGpioRead(BT_TEC4, &state);
//	if (state == BT_LOW){
//		appPonchoGpioToggle(BT_LED3);
//	}
//	delay (200);
//
//}
//
//static void TestDisplayWriteByte	(){
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, '0');
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, '1');
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, '2');
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, 'A');
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, 'B');
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, 'C');
//	gpioToggle(LEDB);
//	delay(2000);
//}
//
//
//static void TestDisplayWriteString	(){
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteString(BT_LCD1, "Hola App Poncho");
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteString(BT_LCD1, "Como estas?");
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteString(BT_LCD1, "Por aca programando...");
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteString(BT_LCD1, "Chau, nos vemos!");
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, 'B');
//	gpioToggle(LEDB);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoDisplayWriteByte(BT_LCD1, 'C');
//	gpioToggle(LEDB);
//	delay(2000);
//
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDG, BT_LOW);
//	gpioWrite(LEDG, FALSE);
//	delay(2000);
//
//	while (gpioRead(TEC2));
//	appPonchoGpioWrite(BT_LEDB, BT_LOW);
//	gpioWrite(LEDB, FALSE);
//	delay(2000);
//}
//
//static void Vumeter (uint8_t value){
//	gpioWrite(LEDB, FALSE);
//	gpioWrite(LED1, FALSE);
//	gpioWrite(LED2, FALSE);
//	gpioWrite(LED3, FALSE);
//	if 			(value > 200){
//		gpioWrite(LED3, TRUE);
//	} else if 	(value > 120){
//		gpioWrite(LED2, TRUE);
//	} else if 	(value > 60){
//		gpioWrite(LED1, TRUE);
//	} else if 	(value > 20){
//		gpioWrite(LEDB, TRUE);
//	}
//
////	appPonchoGpioWrite(BT_LEDB, BT_LOW);
////	appPonchoGpioWrite(BT_LED1, BT_LOW);
////	appPonchoGpioWrite(BT_LED2, BT_LOW);
////	appPonchoGpioWrite(BT_LED3, BT_LOW);
////	if 			(value > 200){
////		appPonchoGpioWrite(BT_LED3, BT_HIGH);
////	} else if 	(value > 120){
////		appPonchoGpioWrite(BT_LED2, BT_HIGH);
////	} else if 	(value > 60){
////		appPonchoGpioWrite(BT_LED1, BT_HIGH);
////	} else if 	(value > 20){
////		appPonchoGpioWrite(BT_LEDB, BT_HIGH);
////	}
//}
//
//static void TestAdc (){
//	uint8_t adcValue = 0;
//
//	adcValue = appPonchoAdcRead(BT_CH1);
//	appPonchoDisplayWriteString(BT_LCD1, "Valor ADC leido");
//	Vumeter(adcValue);
//	delay(200);
//
//}
//
//static void TestDac (){
//	uint8_t adcValue = 0;
//
////	for (adcValue = 0; adcValue < 250; adcValue+=10){
////		appPonchoDacWrite(BT_DAC1, adcValue);
////		appPonchoDisplayWriteByte(BT_LCD1, adcValue);
////		Vumeter(adcValue);
////		delay(200);
////	}
//	adcValue = appPonchoAdcRead(BT_CH1);
//	appPonchoDacWrite(BT_DAC1, adcValue);
//	Vumeter(adcValue);
//	delay(200);
//}
//
//static void Test7Segments (){
//	uint8_t value = 0;
//
//	for (value = '0'; value < '9'; value++){
//		appPoncho7SegmentsWrite(BT_7SEG, value);
//		appPonchoDisplayWriteByte(BT_LCD1, value);
//		delay (1000);
//	}
//
//}

static void TestIntegral (){

	while (gpioRead(TEC2));
	appPonchoGpioWrite(BT_LEDR, TRUE);
	gpioWrite(LEDR, TRUE);
	delay (2000);

	while (gpioRead(TEC2));
	appPonchoGpioWrite(BT_LED1, TRUE);
	gpioWrite(LED1, TRUE);
	delay (2000);

	while (gpioRead(TEC2));
	appPoncho7SegmentsWrite(BT_7SEG, '5');
	delay (2000);

	while (gpioRead(TEC2));
	appPonchoDacWrite(BT_DAC1, appPonchoAdcRead(BT_CH1));
	delay (2000);

	while (gpioRead(TEC2));
	appPonchoDacWrite(BT_DAC1, appPonchoAdcRead(BT_CH1));
	delay (2000);

	while (gpioRead(TEC2));
	appPonchoDisplayWriteByte(BT_LCD1, 'm');
	delay (2000);

	while (gpioRead(TEC2));
	appPonchoDisplayWriteString(BT_LCD1, "Aqui llego Bala, bala!");
	delay (2000);

	while (gpioRead(TEC2));
	appPonchoGpioWrite(BT_LED3, !appPonchoGpioRead(BT_TEC4));
	gpioWrite(LED3, appPonchoGpioRead(BT_TEC4));
	delay (2000);
}

void TestIntegral2 (){
	uint8_t adcValue = 0;
	static uint8_t counter = '0';

	if (!appPonchoGpioRead(BT_TEC1)){
		appPonchoGpioToggle(BT_LEDB);
		gpioToggle(LEDB);
	}

	if (!appPonchoGpioRead(BT_TEC2)){
			appPonchoGpioToggle(BT_LED1);
			gpioToggle(LED1);
		}

	if (!appPonchoGpioRead(BT_TEC3)){
			appPonchoGpioToggle(BT_LED2);
			gpioToggle(LED2);
		}

	if (!appPonchoGpioRead(BT_TEC4)){
			appPonchoGpioToggle(BT_LED3);
			gpioToggle(LED3);
		}

	adcValue = appPonchoAdcRead(BT_CH1);
	appPonchoDacWrite(BT_DAC1, adcValue);
	appPoncho7SegmentsWrite(BT_7SEG, ((adcValue/25) + '0') );

	appPonchoDisplayWriteByte(BT_LCD1, counter);

	if (++counter > '9'){
		counter = '0';
		appPonchoDisplayWriteString(BT_LCD1, "Se resetea el contador...");
		delay (2000);
	}
	adcValue = 0;
}
/*==================[external functions definition]==========================*/

/* todo: gran BUG de programacion. Resulta que no andaba el delay.
 * Pense que era el codigo, pero lo que paso fue que con freeRTOS en la
 * sapi lo comentamos al tick config. Esto fue porque freeRTOS necesita
 * usar el tick. Lo que pasa, es que mas alla que haya dos sapi (una baremetal
 * y la otra rtos, en un momento el codigo de freeRTOS no compilaba, entonces
 * comentamos la funcion tick config en la sapi baremetal tambien. */
/* FUNCION PRINCIPAL, PUNTO DE ENTRADA AL PROGRAMA LUEGO DE RESET. */

/**
 * El paradigma respecto a la aplicacion en C y bluetooth es que para el micro
 * sera transparente si el acceso es a hardware real o a hardware fisico, es decir
 * en la biblioteca appPoncho se incluiran funciones como si fueran hardware real
 * que ya esta configurado y disponible para usar.
 * Hay que imaginar que la app dispone de hardware real al que se accede, por lo
 * que, cuando se manda por ejemplo uartWriteString por la uart, en realidad, en la
 * aplicacion no hay ningun hardware que pueda soportar esa opcion. Si puede llegar
 * a ver un display que sea capaz de recibir texto, entonces, si se quiere manadr
 * una cadena de texto por bluetooth hacia un display de la APP se deberia mandar, por ejemplo
 *
 * 		appPonchoDisplayWrite ("Cadena de texto");
 *
 * Ya que una funcion de este tipo tiene mucho mas sentido si se esta emulando hardware real.
 * Este mismo concepto tiene el mismo efecto para todos los perifericos.
 *
 * Algunas aclaraciones y/o limitaciones;
 *
 * 	Debido que se esta emulando hardware el envio/recepcion de comandos hacia la app
 * 	sera bloqueante. Imaginar el caso de querer leer una tecla de hardware fisico.
 * 	El micro pregunta por un pin y si o si se va a devolver algo. Entonces claramente
 * 	se debe quedar bloqueado esperando que le llegue un dato, si no es como si fisicamente
 * 	hubiera perdido conexion con el hardware.
 *
 * @return
 */
int main(void){

	/* Inicializar la placa */
	boardConfig();

	appPonchoConfig(BT_MODULE_HC06, UART_232, BAUD_RATE_BLUETOOTH);

	while(1) {
		//		TestBluetoothCommands();
		//		TestGpioWrite();
		//		TestGpioRead();
		//		TestGpioToggle();
		//		TestGpioReadAndToggle();
//		TestDisplayWriteByte();
//		TestDisplayWriteString();
//		TestAdc();
//		TestDac();
//		Test7Segments();
		TestIntegral2();
	}
	return 0 ;
}

/*==================[end of file]============================================*/
