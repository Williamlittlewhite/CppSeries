//�������ӵ���Ҫ�������ҵ�ÿ�����źͺ��������������������������Ӧ�ó�����Ҫ֪����ڵ㣨entry point��һ��Ϊmain�����������ʵ���������Ӧ�ó����ʱ��C++����ʱ�⣨run time library����˵������main��������Ҫ�������Ȼ��ʼִ�д��롣
//
//��VS�а���ctrl + F7��ֻ�б���ᷢ�������ӽ���Զ���ᷢ�������������build������F5���У��������Ȼ�����ӡ�
//
//�﷨����syntax error����C��ͷ��compile�����������Ǵ����ڱ���׶Ρ�LNK���������link���������Ǵ��������ӽ׶Ρ�
//
//�Զ���entry point��һ��exeһ����entry point����
//
//���Ӵ���
//
//δ������ⲿ����unresolved external symbol�������������Ҳ�������Ҫ�Ķ���ʱ���������������û����ĳ��������������������ӣ�

#include <iostream>
// include find a file called iostream, it takes the content of the iostream file and paste it here.
// include is a header
// we include iostream because we need the declaration of the function 'cin' and 'cout'
#include "7Log.h"
//pre - process statement they happen before the actual compilation
//void Log(const char* message);

//int Multiply(int a, int b) {
//	Log("Multiply");
//	return a * b;
//}

//static int Multiply(int a, int b) {
//	Log("Multiply");
//	return a * b;
//}
//int main()
//{
//	//std::cout << Multiply(5, 8) << std::endl;
//	std::cin.get();
//}
//���ϣ���һ�γ����У���������ں����е���Log������main�в�û�е���multiply�����logû�б��������ҵ�������Ȼ�ᱨ������Ϊmultiply�������п��ܱ���ķ��뵥Ԫ���õģ������Ȼ��Ҫ�������ӡ�
//
//��ôֻҪ������multiply������Ϊstatic�ģ��� static int Multiply(int a, int b)����ô��ͱ����������ֻ��������������뵥Ԫ�С���˼�ʹLog�������������뵥Ԫ��û�ж���ģ�������ֻ������Multiply�У���Multiply��static���ҵ�ǰ���뵥Ԫδ�����ã��ͱ���Multiply����û�б����ù�������������ӣ�Ҳ�Ͳ���õ��κ����Ӵ���
//��Ȼ���ظ����壬������������֪�����ӵ���һ�����������Ҳ�����������һ��ͷ�ļ�7Log.h�ж�����һ������������Log.cpp��Math.cpp�ж�������Log�������Ұ�����Log.hͷ�ļ���ע�⣬ͷ�ļ�include�����ǰ�ͷ�ļ����ݸ���ճ���������ѣ�����ô���ڸ���Ϊ���뵥Ԫ��������Log�����Ķ�����ڣ���������Ȼ����֪��ȥ�����ĸ�����������ִ���
//�޸���ʩ��
//1.static
//����ͷ�ļ�������������ʱ���������ֻ���ļ����ڲ�����������Log.cpp��Math.cpp�������Ǹ��Ե�Log�����Ҷ�������obj�ļ����ɼ���
//2.inline
//inline����˼�ǻ�ȡ����ʵ�ʵĺ����岢�����������滻Ϊ�����壨ֱ������ȥ����
//3.�ŵ������ķ��뵥Ԫ�У�ͷ�ļ�ֻ����
//
//��������Ҫ�����������е�Ŀ���ļ�����������������һ����Ҳ���������ǿ����õ��������κ������⣬���� C run time library��C++��׼�⡢ƽ̨��api�ȵȣ�����಻ͬ�ĵط�linking�Ǻܳ����ġ�
//
//����������ͬ�����ӣ���̬���ӺͶ�̬���ӣ���49�ڿκ͵�50�ڿΣ���̬��dll��̬��lib��