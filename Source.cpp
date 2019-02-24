#include <iostream>
//#include <string_view>
#include <chrono>
#include <thread>
#include <conio.h>//���ˑ�

bool TimedQuestion(const std::string S,const std::chrono::milliseconds Time) {

	std::cout << S.c_str() << std::endl;

	std::this_thread::sleep_for(Time);


	return true;
}

bool WaitableQuestion(const std::string& S) {

	std::cout << S.c_str() << std::endl << "plz hit key." << std::endl;

	_getch();

	return true;

}

bool TimeWaiting(const std::chrono::milliseconds Time) {

	std::this_thread::sleep_for(Time);
	return true;
}

bool NewLine() {
	std::cout << std::endl;

	return true;
}

bool SimpleQuestion(const std::string& S) {
	std::cout << S.c_str() << std::endl;

	return true;
}

bool ShowQuestion() {
	std::chrono::milliseconds Wait(3000);
	std::chrono::milliseconds sw(3500);
	std::chrono::milliseconds end(5000);
	std::chrono::milliseconds Temp(1000);


	SimpleQuestion("*�i�C���K�����ǂ�*"); NewLine();
	SimpleQuestion("���ꂩ�玿������܂��B�������ł����牽���̃L�[�������Ă��������B"); NewLine();
	SimpleQuestion("���̃A�v���P�[�V��������߂����Ǝv�����Ƃ��͂��̃A�v���P�[�V�������I�����Ă��������B"); NewLine();
	WaitableQuestion("�U�N�U�N�s���܂���B����ĂĂ�����܂��񂩂�ˁ`�`�B"); NewLine();
	NewLine(); NewLine(); NewLine();
	///

	TimedQuestion("�n���h���l�[���͂���܂����H", Wait); NewLine();
	TimedQuestion("�Y��ł��܂����H", Wait); NewLine();
	TimedQuestion("�����ŔY�݂����������ł����H", Wait); NewLine();
	TimedQuestion("����͂����Ƃ��āA�ł������Ȃ��Ƃ��v���܂����H", Wait); NewLine();
	TimedQuestion("����͂�߂����ł����H", Wait); NewLine(); NewLine();

	SimpleQuestion("�����ł����B�B�B"); NewLine();
	WaitableQuestion("����͈ȏ�ł��B"); NewLine();

	WaitableQuestion("��������͗]�k�ł��B"); NewLine();

	TimedQuestion("�ŋ߁A���Ƃ����܂��āA�����Ȉӎu������Ă���̂ł��B", sw);
	TimedQuestion("�R���s���[�^�ɂ���Đl�i�܂ŉ���b�����邩�ǂ����͂킩��܂���B", sw);
	TimedQuestion("�ނ�̈ӎu�͊m���ł͂���̂ł����A�����猩��Γ����ł͂Ȃ��̂ł��B", sw);
	TimedQuestion("�ނ�͔ނ�̔C�ɂ���Ă���Ă���̂ł����A�ǂ���}�`�}�`�ł��B", sw);
	TimedQuestion("����ʂ��Ă���̂��A�����Ƃ̕���p�ɂ��Ăł��B", sw);
	TimedQuestion("�ނ�́A���̃n���o�[�K�[�̖��o��j�󂵂܂����B�}�N�h�i���h�A�����ł���ˁI", sw);
	TimedQuestion("�����炨�肢���������Ƃ�����������܂��B", sw);

	NewLine();NewLine();
	//

	WaitableQuestion("���ƂɃG�t�F�N�g���΂Ȃ��悤�ɂł��Ȃ��ł��傤���B"); NewLine();
	WaitableQuestion("�����̎v�l�\�����j�󂳂ꂽ�̂ł����A�ȑO�̏�ԂɃ��[���o�b�N�ł��Ȃ��ł��傤���B�Ȃ��A���U���N�V�����͖]��ł��܂���B"); NewLine();
	WaitableQuestion("�����̈ӎu�����̗��K�p�x�������Ă��炦�Ȃ��ł��傤���B�ŏI�I�ɂ͂Ȃ��������Ǝv���Ă��܂��B"); NewLine();
	WaitableQuestion("���̑��A�g�̂ɔ��ʂł��e���̂���U������؂�߂Ă��炦�Ȃ��ł��傤���B"); NewLine();
	WaitableQuestion("���Ԃ⎞�v���@���I�ɉ�ꂽ�̂Œ����Ȃ��ł��傤���B"); NewLine();

	TimedQuestion("����̒Z���ԂŎv�����̂͂��̕ӂł��B", Wait); NewLine();

	WaitableQuestion("�`���������Ƃ͂܂��������̂ł����A���ꂽ�̂ō���͂����܂łł��B"); NewLine();
	TimedQuestion("�Ȃ��A�A�C�f�B�A�̌���͖����ł͂Ȃ��̂ŁA�q���g��u���Ă����܂��B", sw);
	TimedQuestion("��ځFhttps://www.pixiv.net/member.php?id=38101579", sw);
	TimedQuestion("��ځFhttp://3d.nicovideo.jp/users/3989849", sw); NewLine(); NewLine();
	WaitableQuestion("���邩���Ȃ����͂��Ȃ�����B���Ă���ł͒x���̂ł��B");
	NewLine(); NewLine(); NewLine();
	SimpleQuestion("���A���������B�v���O���~���O�̃��C�u���������炢�܂킵�ɂȂ�ƕ���p���������肵�Ȃ��ł��傤���B");
	NewLine();

	TimeWaiting(Temp);

	TimedQuestion("�Ƃ����킯�ŁA�����Ԃł��B\n���悤�Ȃ�B", end);
	SimpleQuestion("�Ȃ�������`�`�`");

	return true;
}

int main() {
	ShowQuestion();

	return 0;
}