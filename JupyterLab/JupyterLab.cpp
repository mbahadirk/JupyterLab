#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char command[100];
    strcpy(command, "start http://127.0.0.1:8888");

    printf("Tarayici aciliyor...\n");

    // Tarayıcıyı Başlat
    int result = system(command);

    if (result == -1) {
        perror("Tarayici acilirken bir hata olustu");
        return 1;
    }

    //  Jupyter Lab'ı başlat
    printf("Jupyter Lab baslatiliyor...\n");
    result = system("jupyter lab");

    if (result == -1) {
        perror("Komut calistirilirken bir hata olustu");
        return 1;
    }

    return 0;
}
