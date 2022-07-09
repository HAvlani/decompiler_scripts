typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[56];
    char field_38;
} struct_1;

int rpl_regexec()
{
    unsigned long|unsigned long long v0;  // [bp-0x78]
    unsigned long|unsigned long long|struct_0 * v1;  // [bp-0x70]
    unsigned int v10;  // ebx
    char *v11;  // rsi
    struct_1 *v12;  // rdi
    unsigned long v13;  // r8
    struct_2 *v14;  // r15
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x50]
    struct_2 *v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    char|unsigned long long v7;  // rax
    struct_2 * v8;  // rcx
    unsigned long|unsigned long long v9;  // rdx

    v7 = 2;
    v3 = v9;
    if ((((int)v13) & -8) == 0)
    {
        v14 = v8;
        if (((long long)(v13 & 4)) == 0)
        {
            v9 = strlen(v11);
        }
        else
        {
            v8 = v8->field_0;
            v9 = v1->field_8;
        }
        if (((long long)(((char)(0 != 0)) | ((char)(0 != 0)))) != 0)
        {
            v5 = v9;
            v4 = v8;
            pthread_mutex_lock();
        }
        if (((long long)(v12->field_38 & 16)) != 0)
        {
            v2 = v13;
            v1 = 0;
            v0 = 0;
        }
        else
        {
            v2 = v13;
            v1 = v14;
            v0 = v3;
        }
        v10 = re_search_internal();
        if (((long long)(((char)(0 != 0)) | ((char)(0 != 0)))) != 0)
        {
            pthread_mutex_unlock();
            v7 = 0;
            v7 = ((char)(v10 != 0));
            return rax<8>;
        }
        v7 = 0;
        v7 = ((char)(v10 != 0));
        return rax<8>;
    }
    return rax<8>;
}
