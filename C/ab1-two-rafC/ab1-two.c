int album(int n, int ano_nasc)
{
    int a, t;
    if (n == 0)
        return 1;
    else
    {
        scanf("%d %d", &a, &t);
        if (a - t == ano_nasc)
            return album(n - 1, ano_nasc);
        else
            return 0;
    }
}
int main()
{
    int n, a, t;
    scanf("%d", &n);
    scanf("%d %d", &a, &t);
    if (album(n - 1, a - t))
        printf("idades corretas\n");
    else
        printf("mentiu a idade\n");
    return 0;
}



