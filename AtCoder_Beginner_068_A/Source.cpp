/*
��蕶
���̃R���e�X�g�A�܂� AtCoder Beginner Contest �̗��̂́A�A���t�@�x�b�g 3 ������ ABC �ƂȂ��Ă���܂��B
�����āAABC �̂�������̉���w���Ƃ��́A����ڂ� ABC ���� 3 ���̐����ŕ\���Č��ɕt���AABC680 �̂悤�ɌĂт܂��B�Ⴆ�� ABC680 �́A680 ��ڂ� ABC �̂��Ƃ��w���܂��B
�ł́AN ��ڂ� ABC �͂ǂ̂悤�ɕ\���ł��傤���A������o�͂���v���O�������쐬���Ă��������B
*/

#include<iostream>
#include<string>

int main() {
	int num;
	std::string str("ABC");
	
	std::cin >> num; 

	std::cout << str + std::to_string(num) << std::endl;  //std::cout << str << num << std::endl;�ł��ǂ������� int ����@string �ւ̃L���X�g���K

	return 0;
}