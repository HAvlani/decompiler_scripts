typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int read_file()
{
    unsigned long long v1;  // rax
    unsigned long long|void * v2;  // rax
    struct_0 *v3;  // rdx
    unsigned int v4;  // ebp
    char *v5;  // rsi
    unsigned int v6;  // esi
    char *v7;  // rdi
    unsigned long v8;  // r12

    v4 = v6;
    v5 = ((v6 & 1) == 0? "re" : "rbe");
    v2 = fopen(v7, v5);
    if (v8 != 0)
    {
        v8 = v2;
        if ((((char)v4) & 2) != 0)
        {
            setvbuf(v8, NULL, 0x2, 0x0);
        }
        v2 = rpl_fclose();
        if (v2 == 0)
        {
            v1 = (long long)fread_file();
            return v1;
        }
        else if (!(v1 != 0))
        {
            return 0;
        }
        else if (((int)(v4 & 2)) == 0)
        {
            rpl_free();
            return 0;
        }
        else
        {
            __explicit_bzero_chk(((int)v1), ((int)v3->field_0), 0xffffffff);
            rpl_free();
            return 0;
        }
    }
    return 0;
}
