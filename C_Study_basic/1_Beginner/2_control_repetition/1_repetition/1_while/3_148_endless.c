#include <stdio.h>

void main(){
	int condition1=10;
	int condition2=-10;
//	while(10){
//	while(condition1){
//	while(condition1+condition2){ // ()안의 값이 '0'이다.
	while(-1){ // 0만 아니면 참값으로 인지하기에 무한루프에 빠진다.
		printf("Hello world!\n");
	}
}
