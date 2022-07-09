int locale_charset()
{
    char *v1;  // rax

    v1 = nl_langinfo(0xe);
    if (v1 != 0)
    {
        return (*(v1) == 0? "ASCII" : v1);
    }
    return "ASCII";
}
