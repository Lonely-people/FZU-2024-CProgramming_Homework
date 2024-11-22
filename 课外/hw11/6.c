void Show(int number, char symbol) {
    if (number <= 0) {
        return;
    }
    putchar(symbol);
    Show(number - 1, symbol);
}