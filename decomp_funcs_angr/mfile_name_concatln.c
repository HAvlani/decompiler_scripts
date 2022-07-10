typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mfile_name_concat()
{
    char v0;  // [bp-0x41]
    unsigned long v10;  // rdi
    unsigned long long v11;  // r13
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long|char * v2;  // rax
    unsigned long long v3;  // rax
    struct_0 *v4;  // rdx
    unsigned long long v6;  // bl
    unsigned long v7;  // rbx
    char *v8;  // rbp
    char *v9;  // rsi

    v8 = v9;
    v13 = (long long)last_component() - v10 + v7;
    v11 = strlen(v9);
    if (!((long long)base_len() != 0))
    {
        v6 = 0;
        v6 = ((char)(*(v8) == 47));
        v0 = ((char)(*(v8) != 47? 0 : 46));
    }
    else if (*(v10 + v13 + 1) != 47)
    {
        v6 = 0;
        v6 = ((char)(*(v8) != 47));
        v0 = ((char)(*(v8) == 47? 0 : 47));
    }
    else
    {
        v0 = 0;
        v6 = 0;
    }
    v14 = malloc(v13 + v11 + 1 + v6);
    if (v2 != 0)
    {
        v2 = mempcpy(((int)v2), ((int)v10), ((int)v13));
        v10 = v2 + v6;
        *(v2) = v0;
        if (v4 != 0)
        {
            v4->field_0 = v10;
            *(mempcpy(v10, ((int)v8), ((int)v11)) + None) = 0;
            v2 = v14;
            return v3;
        }
        *(mempcpy(v10, ((int)v8), ((int)v11)) + None) = 0;
        v2 = v14;
        return v3;
    }
    v2 = v14;
    return v3;
}
