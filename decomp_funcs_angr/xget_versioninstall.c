int xget_version()
{
    char *v1;  // rax
    char *v2;  // rsi

    if (v2 == 0 || *(v2) == 0)
    {
        v1 = getenv("VERSION_CONTROL");
        if (!(v1 != 0))
        {
            return 2;
        }
        else if (*(v1) == 0)
        {
            return 2;
        }
    }
}
