typedef struct struct_4 {
    char padding_0[250];
    char field_fa;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

int factor_insert_multiplicity()
{
    BOT tmp_21;  // tmp #21
    unsigned long long|char * v1;  // rax
    char * v10;  // r10
    struct_5 * v11;  // r11
    unsigned long long v12;  // cc_dep1
    char * v2;  // rcx
    char v3;  // dl
    char v4;  // dl
    unsigned int v5;  // ebx
    unsigned long v6;  // rsi
    struct_4 *v7;  // rdi
    char * v8;  // r8
    unsigned long long v9;  // r9

    v1 = ((long long)v7->field_fa);
    v11 = v7 + 16;
    v10 = v7 + 224;
    if (((int)v1) != 0)
    {
        v5 = ((int)v1) - 1;
        v2 = v1 - 1;
        v1 -= 1;
        while (true)
        {
            v8 = v1;
            v12 = *(v7 + v1 * 8 + 16);
            if (*(v7 + (v1 << 3) + 16) > v6)
            {
                v1 -= 1;
                v8 = ((int)v1);
            }
            else if (!(((char)(v12 == v6))))
            {
                v1 += 1;
                v11 = v7 + 16 + v1 * 8;
                v10 = v7 + 224 + v1;
                if (((int)v8) >= v5)
                {
                    break;
                }
            }
            else
            {
                *(v10 + v1) = *(v10 + v1) + v3;
                return v1;
            }
            if ((((int)v1) == -1 || *(v7 + (v1 << 3) + 16) <= v6) && (((int)v8) < v5 || *(v7 + (v1 << 3) + 16) > v6) && (!(((char)(v12 == v6))) || *(v7 + (v1 << 3) + 16) > v6))
            {
                do
                {
                    *(v7 + v2 * 8 + 24) = *(v7 + v2 * 8 + 16);
                    v1 = ((long long)*(v7 + v2 + 224));
                    *(v7 + v2 + 225) = *(v7 + v2 + 224);
                    v2 -= 1;
                }
                while (v8 < ((int)v2));
            }
        }
        v9 = ((long long)(((int)v7->field_fa) + 1));
        v11->field_0 = v6;
        *(v10) = v4;
        tmp_21 = v9;
        v7->field_fa = tmp_21;
        return v1;
    }
    v9 = ((long long)(((int)v7->field_fa) + 1));
    v11->field_0 = v6;
    *(v10) = v4;
    tmp_21 = v9;
    v7->field_fa = tmp_21;
    return v1;
}
