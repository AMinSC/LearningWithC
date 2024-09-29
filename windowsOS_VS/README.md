README update

#### built-in functions
- getchar() / putchar()
    - Buffered I/O
    - 값이 저장된 메모리 값을 읽거나 출력
- _getch() / _getche()
    - Non-buffered I/O
    - 키보드 입력 자체에 대한 **감지**
- gets() / gets_s() / fgets() / puts()

#### keyword
- buffered I/O
- device file (special file)
    - file name: CON(console device)
- 시큐어 코딩
    - 보안 문제가 발생하지 않도록 코드 수준에서 대응 하는 것이 중
- 단순 대입 연산자
    - 두 피연산자 중 오른쪽 피연산자(r-value)의 값을 왼쪽 피연산자(l-value)에 저장하는 연산자
        - l-value의 'l'은 Left가 될수도 있지만 Location입니다.
            > C언어에서 자료형이란 일정 길이의 메모리에 저장된 정보를 해석하는 방법입니다.
            <br>자료형은 다른 말로 '수'이고, 수는 크게 변수와 상수입니다.
            <br>특히, 변수는 메모리 쓰는 문법이고, 메모리는 주소이자 위치정보, 즉, Location입니다.
    - l-value는 Overwrite가 발생하며 기존 값이 사라짐, 따라서 상수는 l-value가 될 수 없음

