typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
    char field_10;
} struct_2;

typedef struct struct_1 {
    char padding_0[16];
    unsigned int field_10;
} struct_1;

extern struct_0 *group_alist;
extern struct_0 *nogroup_alist;

int getgidbyname()
{
    BOT tmp_9;  // tmp #9
    BOT tmp_12;  // tmp #12
    unsigned long long v1;  // rax
    struct_1 *v4;  // rax
    struct_0 * v5;  // rbx
    struct_2 * v6;  // rbx
    char *v7;  // rdi
    unsigned long long v8;  // r12

    v5 = group_alist;
    if (group_alist != 0)
    {
        while (true)
        {
            if (v5->field_10 == *(v7))
            {
                v1 = strcmp(v5 + 16, v7);
                if (v1 != 0)
                {
                    tmp_9 = v5;
                    return tmp_9;
                }
            }
            if (v1 != 0 || v5->field_10 != *(v7))
            {
                v5 = v5->field_8;
            }
        }
    }
    v6 = nogroup_alist;
    if (nogroup_alist != 0)
    {
        while (true)
        {
            if (v6->field_10 == *(v7))
            {
                v1 = strcmp(v6 + 16, v7);
                if (v1 == 0)
                {
                    return 0;
                }
            }
            if (v1 != 0 || v6->field_10 != *(v7))
            {
                v6 = v6->field_8;
                if (v6 == 0)
                {
                    break;
                }
            }
        }
    }
    v8 = getgrnam(((int)v7));
    strlen(v7);
    v5 = (long long)xmalloc();
    strcpy(v5 + 16, v7);
    if (v4 != 0)
    {
        v5->field_0 = v4->field_10;
        v1 = group_alist;
        group_alist = v5;
        v5->field_8 = v1;
        tmp_9 = v5;
        return tmp_9;
    }
    tmp_12 = nogroup_alist;
    nogroup_alist = v5;
    v5->field_8 = tmp_12;
    return v8;
}
