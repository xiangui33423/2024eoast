#ifndef __RGB_H__
#define __RGB_H__
 
#include "main.h"

#define STATUS_FLYMODE    			1 //1
#define STATUS_FIRSTMISSON     	2 //2
#define STATUS_SECONDMISSON  			3 //3?
#define STATUS_TAKEOFF			4 //4
#define STATUS_SENDMESS			5 //5
#define STATUS_TIME           6 //6
#define STATUS_FUNCTION         7 //�������
/*���������ļ�������CCR�ĺ궨��*/
#define CODE_1       (68)       //1�붨ʱ����������
#define CODE_0       (32)       //0�붨ʱ����������

/*����һ�����嵥��LED��ԭɫֵ��С�Ľṹ��*/
typedef struct
{
	uint8_t R;
	uint8_t G;
	uint8_t B;
}RGB_Color_TypeDef;
 
#define Pixel_NUM  4    //LED�����궨�壬������ʹ��һ��LED��������pixelΪ���ص���˼��
 
void RGB_SetColor(uint8_t LedId,RGB_Color_TypeDef Color);//��һ��LEDװ��24����ɫ�����루0���1�룩
void Reset_Load(void); //�ú������ڽ��������24�����ݱ�Ϊ0������RESET_code
void RGB_SendArray(void);          //������������
void RGB_RED(uint16_t Pixel_Len);  //��ʾ���
void RGB_GREEN(uint16_t Pixel_Len);//��ʾ�̵�
void RGB_BLUE(uint16_t Pixel_Len); //��ʾ����
void RGB_WHITE(uint16_t Pixel_Len);//��ʾ�׵�
void RGB_BLACK(uint16_t Pixel_Len);//��ʾ�ڵ�
void flicker_RGB(uint16_t Pixel_Len,uint16_t color,int number);//�ƹ���˸

void delay_ms(int32_t nms) ;//��ʱ����

uint32_t keyborad_scan(void) ;//�������
#endif