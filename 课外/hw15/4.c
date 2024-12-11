p = p1;
for (p2 = p1 + 1; p2 < pData + n; ++p2) {
    if (p2 -> score > p -> score) {
        p = p2;
    }
}
if (p != p1) {
    struct Student tmp = *p;
    *p = *p1;
    *p1 = tmp;
}