extern struct_0 *args;

int nextarg()
{
    unsigned long long v1;  // al
    char *v2;  // rdi

    v1 = 0;
    if (*(args) != 0)
    {
        v1 = strcmp(*(args), v2);
        v1 = ((char)(((int)v1) == 0));
        args = args + ((long long)(((int)v1) == 0)) * 8;
        return v1;
    }
    return v1;
}
