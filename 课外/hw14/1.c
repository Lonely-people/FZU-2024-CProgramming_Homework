int ChickenRabbit(int *chicken, int *rabbit, int head, int foot) {
    for (int i = 0; i <= head; ++i) {
        if (i * 2 + (head - i) * 4 == foot) {
            *chicken = i;
            *rabbit = head - i;
            return 1;
        }
    }
    return 0;
}