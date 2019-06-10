#include "..\header\7_val.h" //<- Windows Style
// window 상에서 linux style 0
//
//#include "header/7_val.h" // Linux Style
// linux 상에서 windows style x
#include "C:\iot_bigdata\C_Study_basic\8_development_by_team\header\7_val.h"
//절대경로 지정시 가장 큰 문제점은 상호 운영성이 떨어진다.
//컴퓨터마다 절대경로가 다른 경우
//linux상에서 \가 인식이 되지 않는경우
void increment(){
	num++;
}
int getnum(){
	return num;
}
