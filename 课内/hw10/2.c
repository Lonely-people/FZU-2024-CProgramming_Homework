int IntMax3(int x, int y, int z) {
    x = x > y ? x : y;
    return x > z ? x : z;
}