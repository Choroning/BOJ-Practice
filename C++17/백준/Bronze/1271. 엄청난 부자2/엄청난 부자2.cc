#include <iostream>
#include <string>
using namespace std;

// 문자열 s를 뒤집는 함수 (왼쪽 <-> 오른쪽 교환)
void reverseString(string &s) {
    int i = 0;
    int j = s.size() - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

// 두 문자열 형태의 큰 수 a, b를 비교
//  a < b  -> -1
//  a == b ->  0
//  a > b  ->  1
int compareString(const string &a, const string &b) {
    // 1) 자릿수(길이) 비교
    if (a.size() < b.size()) return -1;
    if (a.size() > b.size()) return 1;
    // 2) 길이가 같다면, 앞에서부터 한 자리씩 비교
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
    }
    return 0; // 완전히 같음
}

// a >= b 라고 가정했을 때, a - b를 문자열로 반환
string subString(const string &a, const string &b) {
    // 뒤에서부터 뺄셈 (일의 자리 -> 십의 자리 순)
    // a >= b라고 가정
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0; // 실제로는 'borrow'(빌림)이지만 편의상 carry 사용
    string result;

    while (i >= 0 || j >= 0 || carry) {
        int x = 0;
        int y = 0;
        if (i >= 0) x = a[i--] - '0';
        if (j >= 0) y = b[j--] - '0';

        int tmp = x - y - carry;
        if (tmp < 0) {
            tmp += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result.push_back(char(tmp + '0'));
    }
    // result에는 일의 자리부터 역순으로 들어가 있으므로
    // 뒤에 붙은 '0'들을 제거 + 뒤집기
    while (result.size() > 1 && result.back() == '0') {
        result.pop_back();
    }
    reverseString(result);
    return result;
}

// a(문자열) * (한 자리 정수 digit) => 문자열
string multiplyStringByDigit(const string &a, int digit) {
    if (digit == 0 || a == "0") return "0";
    int carry = 0;
    string result;
    // 뒤에서부터 곱셈
    for (int i = a.size() - 1; i >= 0; i--) {
        int prod = (a[i] - '0') * digit + carry;
        carry = prod / 10;
        result.push_back(char((prod % 10) + '0'));
    }
    while (carry) {
        result.push_back(char((carry % 10) + '0'));
        carry /= 10;
    }
    // 뒤집고, 뒤의 0 제거 (곱셈에서는 맨 뒤에 불필요한 0이 잘 안생기지만 형평상 처리)
    while (result.size() > 1 && result.back() == '0') {
        result.pop_back();
    }
    reverseString(result);
    return result;
}

// n ÷ m 의 (몫, 나머지)를 문자열로 구하는 함수
pair<string, string> divideString(const string &n, const string &m) {
    // 1) m == "0"인 경우는 문제 조건상 주어지지 않는다고 가정.
    // 2) n < m -> 몫 "0", 나머지 n
    if (compareString(n, m) < 0) {
        return make_pair("0", n);
    }
    // 3) n == m -> 몫 "1", 나머지 "0"
    if (compareString(n, m) == 0) {
        return make_pair("1", "0");
    }

    // 이제 n > m 인 상황에서 롱 디비전(long division) 구현
    string quotient;    // 최종 몫
    string current = "0";  // 현재 나머지(계산 중)

    // n의 왼쪽(가장 앞)부터 한 자릿수씩 순회
    for (size_t i = 0; i < n.size(); i++) {
        // current = current * 10 + (n[i] - '0')
        // 문자열 방식으로는 "current"가 "0"이 아니면 뒤에 n[i] 한 자리를 추가
        if (current == "0") {
            current = string(1, n[i]);
        } else {
            current.push_back(n[i]);
        }

        // 이제 current에서 m을 몇 번 뺄 수 있는지(0~9) 찾는다
        int count = 0;
        for (int d = 1; d <= 9; d++) {
            // m * d <= current ?
            string test = multiplyStringByDigit(m, d);
            // 비교
            if (compareString(current, test) >= 0) {
                count = d; // d번 뺄 수 있음
            } else {
                break;     // 더 이상은 뺄 수 없음
            }
        }
        // count번 빼기
        if (count == 0) {
            // 몫 자릿수는 '0'
            quotient.push_back('0');
        } else {
            // current -= m * count
            string mul = multiplyStringByDigit(m, count);
            current = subString(current, mul);
            quotient.push_back(char(count + '0'));
        }
    }

    // ---- 몫의 앞쪽 불필요한 '0' 제거 ----
    // 예: "000123" 같은 경우 -> "123" 으로 만들기
    int idx = 0;
    while (idx + 1 < (int)quotient.size() && quotient[idx] == '0') {
        idx++;
    }
    string finalQuotient = quotient.substr(idx);

    // ---- 나머지( current )에서의 불필요한 '0' 제거 ----
    // current가 "000"이면 최종 "0"
    idx = 0;
    while (idx + 1 < (int)current.size() && current[idx] == '0') {
        idx++;
    }
    string finalRemainder = current.substr(idx);
    if (finalRemainder == "") {
        finalRemainder = "0";
    }

    return make_pair(finalQuotient, finalRemainder);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n, m;
    cin >> n >> m;

    // n을 m으로 나눈 (몫, 나머지)
    pair<string, string> result = divideString(n, m);

    // 출력: 첫 줄에 몫, 둘째 줄에 나머지
    cout << result.first << "\n" << result.second << "\n";

    return 0;
}