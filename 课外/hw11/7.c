void RtPara(int width, int height, char symbol) {
    if (width <= 0 || height <= 0) {
        return;
    }
    Show(height - 1, ' ');
    Show(width, symbol);
    Show(1, '\n');
    RtPara(width, height - 1, symbol);
}