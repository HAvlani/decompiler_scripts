int mdir_name()
{
    unsigned long long v1;  // rbx
    void *v2;  // rdi
    unsigned long long v3;  // r8

    v1 = (long long)dir_len();
    v3 = malloc(v1 + ((long long)(v1 == 0)) + 1);
    if (v3 != 0)
    {
        v3 = memcpy(v3, v2, v1);
        if (v1 != 0)
        {
            *(v3 + v1) = 0;
            return v3;
        }
        *(v3) = 46;
        v1 = 1;
        *(v3 + v1) = 0;
        return v3;
    }
    return v3;
}
