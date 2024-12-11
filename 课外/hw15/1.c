void showCaptain(TeamMember team[], int n) {
    TeamMember res;
    res.ability = 0;
    for (int i = 0; i < n; ++i) {
        if (team[i].ability > res.ability) {
            res = team[i];
        }
    }
    printf("%d %s %s %s %.2lf\n", res.id,res.lastname, res.firstname, res.sex, res. ability);
}