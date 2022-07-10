typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned short field_4;
} struct_1;

extern unsigned int g_407fb4;
extern unsigned long long numname_table;

int sig2str()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // r12
    struct_0 * v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    struct_1 *v7;  // rbp
    char * v8;  // rsi
    unsigned long long|char * v9;  // rdi

    v5 = 0;
    v4 = &numname_table;
    v7 = v8;
    v6 = v9;
    while (true)
    {
        if (v4->field_0 != ((int)v9))
        {
            v5 = ((long long)(((int)v5) + 1));
            v4 += 12;
            v10 = __libc_current_sigrtmin();
            if (((int)v10) > ((int)v9))
            {
                v1 = -1;
                return v1;
            }
            else if (((int)v10) < ((int)v9))
            {
                v1 = -1;
                return v1;
            }
            else if (((int)((((long long)(v10 - v10)) >> 1) + v10)) < ((int)v9))
            {
                v7->field_0 = 1095586898;
                v10 = __libc_current_sigrtmax();
                v7->field_4 = 88;
                break;
            }
            else
            {
                v7->field_0 = 1229804626;
                v7->field_4 = 78;
                break;
            }
        }
        else
        {
            v5 *= 3;
            v9 = v8;
            v8 = &numname_table + v5 * 4 + 4;
            strcpy(v9, v8);
            v1 = 0;
            return v1;
        }
    }
    v1 = ((long long)(v6 - v10));
    if (((int)v6) == ((int)v10))
    {
        return v1;
    }
    __sprintf_chk(((int)v7) + 5, 0x1, 0xffffffff, &g_407fb4, ((int)v1));
    return 0;
}
