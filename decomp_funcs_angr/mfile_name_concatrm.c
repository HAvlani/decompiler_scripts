typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mfile_name_concat()
{
    char v0;  // [bp-0x41]
    unsigned long v10;  // rdi
    unsigned long long v12;  // r13
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v2;  // rax
    unsigned long|char * v3;  // rax
    struct_0 *v4;  // rdx
    unsigned long v6;  // rbx
    unsigned long long v7;  // bl
    char *v8;  // rbp
    char *v9;  // rsi

    v8 = v9;
    v13 = (long long)last_component() - v10 + v6;
    v12 = strlen(v9);
    if (!((long long)base_len() != 0))
    {
        v7 = 0;
        v7 = ((char)(*(v8) == 47));
        v0 = ((char)(*(v8) != 47? 0 : 46));
    }
    else if (*(v10 + v13 + 1) != 47)
    {
        v7 = 0;
        v7 = ((char)(*(v8) != 47));
        v0 = ((char)(*(v8) == 47? 0 : 47));
    }
    else
    {
        v0 = 0;
        v7 = 0;
    }
    v14 = malloc(v13 + v12 + 1 + v7);
    if (v3 != 0)
    {
        v3 = mempcpy(((int)v3), ((int)v10), ((int)v13));
        v10 = v3 + v7;
        *(v3) = v0;
        if (v4 != 0)
        {
            v4->field_0 = v10;
            *(mempcpy(v10, ((int)v8), ((int)v12)) + None) = 0;
            v3 = v14;
            return v2;
        }
        *(mempcpy(v10, ((int)v8), ((int)v12)) + None) = 0;
        v3 = v14;
        return v2;
    }
    v3 = v14;
    return v2;
}