typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char g_418a9f;
extern struct_0 *user_alist;

int getuser()
{
    struct_0 *v1;  // rax
    unsigned long long v3;  // rax
    struct_1 *v4;  // rax
    struct_0 * v5;  // rbx
    unsigned int v6;  // ebp
    unsigned long long|unsigned int v7;  // rdi
    char * v8;  // r12

    v6 = ((int)((unsigned int)v7));
    v5 = user_alist;
    if (user_alist == 0)
    {
    }
    else
    {
        while (true)
        {
            v5 = v5->field_8;
        }
        if (v5->field_0 != ((int)((unsigned int)v7)))
        {
            v8 = &g_418a9f;
            v4 = getpwuid(((unsigned int)v7));
        }
        else
        {
            v3 = 0;
        }
    }
    if (user_alist == 0 || v4 != 0)
    {
        v8 = &g_418a9f;
        v4 = getpwuid(((unsigned int)v7));
        if (v4 != 0)
        {
            v8 = v4->field_0;
            v7 = strlen(v4->field_0) + 24 & 18446744069414584312;
        }
        v5->field_0 = v6;
        v5 = (long long)xmalloc();
        strcpy(v5 + 16, v8);
        v1 = user_alist;
        user_alist = v5;
        v5->field_8 = v1;
    }
    v3 = 0;
    if (v5->field_10 != 0)
    {
        v3 = v5 + 16;
        return v3;
    }
    return v3;
}
