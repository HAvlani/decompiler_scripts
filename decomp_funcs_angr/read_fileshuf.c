int read_file()
{
    void *|unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned int v4;  // esi
    char *v5;  // rsi
    char *v6;  // rdi
    unsigned long v7;  // r12

    v3 = v4;
    v5 = ((v4 & 1) == 0? "re" : "rbe");
    v1 = fopen(v6, v5);
    if (v7 != 0)
    {
        v7 = v1;
        if ((((char)v3) & 2) != 0)
        {
            setvbuf(v7, NULL, 0x2, 0x0);
        }
        v1 = rpl_fclose();
        if (v1 == 0)
        {
            v2 = (long long)fread_file();
            return v2;
        }
        else if (!(v2 != 0))
        {
            return 0;
        }
        else if (((int)(v3 & 2)) == 0)
        {
            rpl_free();
            return 0;
        }
        else
        {
            __explicit_bzero_chk();
            rpl_free();
            return 0;
        }
    }
    return 0;
}
