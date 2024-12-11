double getAverage(Applicant *a) {
    double res = 0;
    res = a -> presentation * 0.4 + a -> logical * 0.5 + a -> humanistic * 0.3
        + a -> scientific * 0.6 + a -> computational * 0.8;
    return res;
}