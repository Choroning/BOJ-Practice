#include <iostream>
#include <string>
using namespace std;

// 문자열 a를 뒤집는 함수
void revStr(string &a, int size) {
    for (int i = 0; i < size / 2; i++) {
        char temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, res;
    cin >> a >> b;

    // 우선 a, b를 뒤집어 (일의 자리부터) 더하기 편하게 만든다
    int sa = a.size();
    int sb = b.size();
    revStr(a, sa);
    revStr(b, sb);

    // carry: 덧셈 중 발생하는 올림
    int carry = 0;

    // 1) a가 더 긴 경우
    if (sa > sb) {
        // 결과를 우선 a(뒤집힌 상태)를 복사
        res = a;

        // (1) b의 길이만큼 각각 자릿수 더하기
        for (int i = 0; i < sb; i++) {
            int x = (a[i] - '0');  // 문자 → 숫자
            int y = (b[i] - '0');
            int sum = x + y + carry;
            res[i] = (sum % 10) + '0';  // 다시 숫자 → 문자
            carry = sum / 10;
        }
        // (2) 남은 a의 자릿수 처리
        for (int i = sb; i < sa; i++) {
            int x = (res[i] - '0');  // 현재 res[i]는 a[i]와 동일
            int sum = x + carry;
            res[i] = (sum % 10) + '0';
            carry = sum / 10;
        }
        // (3) 마지막 carry가 남아있다면 1을 추가
        if (carry == 1) {
            res.push_back('1');
        }

    // 2) b가 더 긴 경우 (a, b 역할 비슷하게)
    } else if (sa < sb) {
        res = b;
        for (int i = 0; i < sa; i++) {
            int x = (a[i] - '0');
            int y = (b[i] - '0');
            int sum = x + y + carry;
            res[i] = (sum % 10) + '0';
            carry = sum / 10;
        }
        // b가 더 기니까 남은 b 부분 처리
        for (int i = sa; i < sb; i++) {
            int x = (res[i] - '0');  // 원래 b[i]
            int sum = x + carry;
            res[i] = (sum % 10) + '0';
            carry = sum / 10;
        }
        if (carry == 1) {
            res.push_back('1');
        }

    // 3) 길이가 같을 경우
    } else {
        // 길이가 같으면 res를 a로 두고 a+b 진행
        res = a;
        for (int i = 0; i < sa; i++) {
            int x = (a[i] - '0');
            int y = (b[i] - '0');
            int sum = x + y + carry;
            res[i] = (sum % 10) + '0';
            carry = sum / 10;
        }
        if (carry == 1) {
            res.push_back('1');
        }
    }

    // 결과를 뒤집어(가장 높은 자리부터 출력) 출력
    revStr(res, res.size());
    cout << res << "\n";

    return 0;
}