int NumDigit(int number) {
    if (number == 0) {
        return 0;
    }
    if (number < 10) {
        return 1;
    }
    return 1 + NumDigit(number / 10);
}