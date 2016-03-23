
void lol2() {
    printf("Hello World\n");
}

void lol(void) {
    lol2();
}

int main(int argc, char const *argv[])
{
    lol();
    return 0;
}