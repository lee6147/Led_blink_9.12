#include <iom128v.h> // 9/12

// �Լ� ����
void delay_m(unsigned int m);

int main(void)
{
    // PC6�� PC4 ���� ������� �����մϴ�.
    DDRC = 0x50;  // 0101 0000 -> DDRC ���������� bit6, bit4�� 1�� ����

    while(1) {
        // PORTC�� 6��, 4�� �ɿ� HIGH ��ȣ�� ����Ͽ� LED�� �մϴ�.
        PORTC = 0x50;  // 0101 0000 -> PC6, PC4 ON
        delay_m(500);

        // PORTC�� ��� �ɿ� LOW ��ȣ�� ����Ͽ� LED�� ���ϴ�.
        PORTC = 0x00;  // 0000 0000 -> PC6, PC4 OFF
        delay_m(500);
    }
    return 0;
}

// m �и���(ms) ��ŭ ������Ű�� �Լ�
void delay_m(unsigned int m) {
    unsigned int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < 2100; j++) {
            ; // �ƹ� ���۵� ���� �ʰ� �ð� ����
        }
    }
}
