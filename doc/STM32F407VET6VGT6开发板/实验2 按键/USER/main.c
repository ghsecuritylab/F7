

/******************** ��ѧ�Ƽ� **************************
 * ʵ��ƽ̨��������STM32������
 * ��汾  ��ST3.5.0
 * ����    ����ѧ�Ƽ��Ŷ� 
 * �Ա�    ��http://shop102218275.taobao.com/
 * ������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
 *��Ȩ���У�����ؾ���
**********************************************************************************/


#include "stm32f4xx.h"
#include "LED.H"
#include "delay.h"

  





int main(void)
{	
	unsigned char value=0;
	/* LED �˿ڳ�ʼ�� */
	LED_GPIO_Config();
	/* �����˿ڳ�ʼ�� */
	Key_GPIO_Config();	

	while(1)
	{
		 /*��ȡ����ֵ*/
		value=KEY_Scan();

		  if(value==2)
		GPIO_WriteBit(GPIOE, GPIO_Pin_5, (BitAction)(1-(GPIO_ReadOutputDataBit(GPIOE, GPIO_Pin_5))));/*LED��ת*/
		else if(value==3)
    GPIO_WriteBit(GPIOE, GPIO_Pin_6, (BitAction)(1-(GPIO_ReadOutputDataBit(GPIOE, GPIO_Pin_6))));/*LED��ת*/
		else if(value==1)
    GPIO_WriteBit(GPIOC, GPIO_Pin_13, (BitAction)(1-(GPIO_ReadOutputDataBit(GPIOC, GPIO_Pin_13))));/*LED��ת*/
			
		} 
}	





