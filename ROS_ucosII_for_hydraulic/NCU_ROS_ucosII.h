/******************* (C) COPYRIGHT 2011 NCU-Roboteam *************************
**               		      NCU_Rotot_OS
**							 NCU_ROS_ucosII.h
**
** 				 		�ϲ���ѧ�����˶� - 2012
**
** ϵͳ���ܣ�
**			 
** ϵͳ˵����
**
** �� �� ����NCU_ROS_ucosII.h
** ģ �� ���������˲���ϵͳ�����ļ�
** ��������������UCOSII����ر���
** ����˵����
**
** �� �� �ˣ�½����
** ����ʱ�䣺2012-03-23
** ----------------------------------------------------------------------------
** �� �� �ˣ�½����
** �޸�ʱ�䣺2012-03-23
** �޸�˵����
** ----------------------------------------------------------------------------
** �� �� �ˣ�½����
** �޸�ʱ�䣺2012-03-23
** �޸�˵����
** ----------------------------------------------------------------------------
*******************************************************************************/	
#ifndef __NCU_ROS_ucosII__
#define __NCU_ROS_ucosII__

/* ------------------------------ͷ�ļ�����-----------------------------------*/
//#include "includes.h"
#include "ucos_ii.h"
#include "NCU_ROS_ucosII_cfg.h"
/* ------------------------------�궨��-----------------------------------*/
/*��������*/
//#define PI 3.1415926


/*�¼���־��*/

//ִ�������㵽��Կռ���������Ϊ׼��
//#define FlAG_TASK_1_GET 0x0001


/*�����ź���Mute_*/
//#define PIP 10	//���廥���ź����̳����ȼ�Ϊ #define PIP 10,


/* ------------------------------�ṹ�嶨��-----------------------------------*/
//typedef struct	 //λ�˽ṹ��
//{
//	float X;
//	float Y;
//	float Sida;
//}ROS_PosiTypeDef;

/* ------------------------------ȫ�ֱ���-----------------------------------*/


/* --------------------------------uC/OS-II�¼�����------------------------------------*/

/*�¼���־��Stat_*/

/*��������Ĳ�ͬ��������Ϊ��ͬ��λ������Ϊ16λ����#define OS_FLAGS_NBITS 16*/
/*1Ϊ���0Ϊû�е��ע����ɺ�������*/
//extern OS_FLAG_GRP *Stat_Impl_Task_Xx_Posi;	//ִ�������㵽��Կռ���������Ϊ׼��


/*��Ϣ����Cont_data*/
//������λ������
//extern OS_EVENT *Q_Cont_Data_Posi_Enco; //������λ�˶���


/*�ڴ������ Map_;Task_*/
//extern OS_MEM *Map_Mem;
//extern float Map[1][1];

/* --------------------------------uC/OS-II�����ջ�ռ�------------------------------------*/				  			
//extern static OS_STK  	OS_Task_Manm_Inter_STK[OS_TASK_MANM_INTER_STK_SIZE];                        

/* --------------------------------uC/OS-II����������------------------------------------*/
int Robot_OS_Main(void);//ϵͳ����Main����
void Robot_OS_Event_Create(void);// ���������¼�
void Robot_OS_Tasks_Create(void);//������������



/*--------------------------------uC/OS-II��������------------------------------------*/
/*ϵͳ��ʼ*/
void OS_Task_Start(void *P_arg);//ϵͳ��������
void OS_Task_MonitorDiagnose(void *P_arg);
void OS_Task_ControlLawSwitch(void *P_arg);
void OS_Task_ParameterCalibrationTuning(void *P_arg);
void OS_Task_Log(void *P_arg);
void OS_Task_Communication(void *P_arg);
#endif