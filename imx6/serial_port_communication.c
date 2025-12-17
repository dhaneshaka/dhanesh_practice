#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

int main() {
    int fd = open("/dev/ttymxc0", O_RDWR | O_NOCTTY);
    if (fd < 0) {
        perror("Failed to open serial port");
        return 1;
    }

    struct termios tty;
    tcgetattr(fd, &tty);

    cfsetospeed(&tty, B115200);
    cfsetispeed(&tty, B115200);

    tty.c_cflag |= (CLOCAL | CREAD);
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8;

    tcsetattr(fd, TCSANOW, &tty);

    write(fd, "Hello from i.MX6!\n", 18);
    close(fd);

    return 0;
}

