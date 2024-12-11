PLEX multi(PLEX a,PLEX b) {
    PLEX res;
    res.re = a.re * b.re - a.im * b.im;
    res.im = a.re * b.im + b.re * a.im;
    return res;
}