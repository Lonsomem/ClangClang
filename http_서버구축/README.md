# socket() -> bind() -> listen() -> accept() -> read() -> write() -> finished() -> close()

Socket()
    - 소켓 생성
bind()
    - IP 주소와 포트 번호 소켓에 결합
listen()
    - 다른 컴퓨터가 접근했을 때 기다리며 대기
accept()
    - 연결 요청 시 수락
read() & write()
    - 데이터 송수신
finished() & close()
    - 연결 끊기
