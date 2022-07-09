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
extern struct_0 *group_alist;

int getgroup()
{
    struct_1 *v1;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    struct_0 * v5;  // rbx
    unsigned int v6;  // ebp
    unsigned long long|unsigned int v7;  // rdi
    char * v8;  // r12

    v6 = ((int)((unsigned int)v7));
    v5 = group_alist;
    if (group_alist == 0)
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
            v1 = getgrgid(((unsigned int)v7));
        }
        else
        {
            v4 = 0;
        }
    }
    if (group_alist == 0 || v1 != 0)
    {
        v8 = &g_418a9f;
        v1 = getgrgid(((unsigned int)v7));
        if (v1 != 0)
        {
            v8 = v1->field_0;
            v7 = strlen(v1->field_0) + 24 & 18446744069414584312;
        }
        v5->field_0 = v6;
        v5 = (long long)xmalloc();
        strcpy(v5 + 16, v8);
        v3 = group_alist;
        group_alist = v5;
        v5->field_8 = v3;
    }
    v4 = 0;
    if (v5->field_10 != 0)
    {
        v4 = v5 + 16;
        return v4;
    }
    return v4;
}
