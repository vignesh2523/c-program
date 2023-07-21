int main()
{
    int b=25;
    //b memory location=1234;
    int *p;
    p=&b;
    printf("%d %d %d", &b, p);
    return 0;
}
