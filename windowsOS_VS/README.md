#### built-in functions
- getchar() / putchar()
    - Buffered I/O
    - 값이 저장된 메모리 값을 읽거나 출력
- _getch() / _getche()
    - Non-buffered I/O
    - 키보드 입력 자체에 대한 **감지**
- gets() / gets_s() / fgets() / puts()
- sizeof()
    - 피연산자의 자료형에 대해 수행하는 컴파일 타임 연산자
    - 만들어질 때, 딱 한 번만 수행되는 연산
    - 컴파일러가 계산해 줌
    - 리터럴값을 직접 입력하는 것보다 사용해 주는 게 좋음
        - 따라서 자주 사용하면 좋음!

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
- Endian [엔디언(Endianness)]
  - Endian은 Little Endian과 Big Endian이 있으며, Little은 메모리가 큰곳에서 작은곳으로, Big은 작은곳에서 큰곳으로 작성됩니다.
  - Intel CPU의 경우, 대부분 Little Endian을 채택하고 있습니다.
- Short circuit
    - SQL에서도 많이 사용함
    - 논리합의 경우 왼쪽 조건이 만족되면 이후 식은 연산하지 않음
    - 논리곱의 경우 마지막 식까지 모두 평가해, 모든 결과가 참인지 확인
        - 따라서, 논리곱의 경우, 연산이 많은 것을 뒤쪽으로 두는것이 좋음
- %zd 서식지정
- 무조건 goto
    - 프로그램의 흐름을 조건 없이 즉시 변경하는 제어문
    - 프로그램의 흐름이 엉킬 수 있어 대부분 사용을 권하지 않음
    - 필요에 따라 사용해도 무방 (무조건이 아닌, 조건문에 응용하여 사용)
        - 유효성 체크
        - 리소스 클리어
