# include <sys/socket.h>

// socket() -> 연결 영역 및 사용 프로토콜 지정
// server_socket = socket(AF_INET, SOCK_STREAM, 0);

// bind() -> IP 주소 + 포트번호와 소켓 연결
// bind