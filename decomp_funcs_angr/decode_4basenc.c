typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char b64;

int decode_4()
{
    BOT tmp_3;  // tmp #3
    struct_0 *v1;  // rcx
    struct_0 *v2;  // rdx
    unsigned long|unsigned int v3;  // rsi
    char [4]|char * v4;  // rdi
    unsigned long long v5;  // r8
    unsigned long long v6;  // r8
    char v7;  // r11b
    unsigned long long v8;  // r11

    v6 = 0;
    if (!(v3 > 1))
    {
        return v6;
    }
    else if (!(((char)*(b64 + ((long long)v4[0]))) >= 0))
    {
        return v6;
    }
    else if (((char)*(b64 + ((long long)v4[1]))) >= 0)
    {
        v5 = v2->field_0;
        if (v1->field_0 != 0)
        {
            v8 = ((long long)*(b64 + ((long long)v4[1])));
            v5 = v2->field_0 + 1;
            v7 = ((char)(((long long)*(b64 + ((long long)v4[1]))) >> 4));
            *(v2->field_0 + 1 + 1) = ((char)(((int)(((long long)*(b64 + ((long long)v4[0]))) * 4)) | ((int)(((long long)*(b64 + ((long long)v4[1]))) >> 4))));
            v1->field_0 = v1->field_0 - 1;
        }
        if (!(v3 != 2))
        {
            v2->field_0 = v5;
            return 0;
        }
        else if (v4[2] != 61)
        {
            if (((char)*(b64 + ((long long)v4[2]))) >= 0)
            {
                if (v1->field_0 != 0)
                {
                    v8 = ((long long)*(b64 + ((long long)v4[2])));
                    v5 += 1;
                    v7 = ((char)(((long long)*(b64 + ((long long)v4[2]))) >> 2));
                    *(v5 + 1) = ((char)(((int)(((long long)*(b64 + ((long long)v4[1]))) * 16)) | ((int)(((long long)*(b64 + ((long long)v4[2]))) >> 2))));
                    v1->field_0 = v1->field_0 - 1;
                }
                if (v3 != 3)
                {
                    v4 = ((long long)v4[3]);
                    tmp_3 = v4;
                    if (tmp_3 != 61)
                    {
                        v3 = ((int)*(v4 + 0x409c00));
                        if (((char)*(v4 + 0x409c00)) >= 0)
                        {
                            if (v1->field_0 != 0)
                            {
                                v5 += 1;
                                *(v5 + 1) = ((char)(((int)v8) * 64 | v3));
                                v1->field_0 = v1->field_0 - 1;
                                v2->field_0 = v5;
                                v6 = 1;
                                return v6;
                            }
                            v2->field_0 = v5;
                            v6 = 1;
                            return v6;
                        }
                        v2->field_0 = v5;
                        return 0;
                    }
                    else if (v3 == 4)
                    {
                        v2->field_0 = v5;
                        v6 = 1;
                        return v6;
                    }
                    else
                    {
                        v2->field_0 = v5;
                        return 0;
                    }
                }
                v2->field_0 = v5;
                return 0;
            }
            v2->field_0 = v5;
            return 0;
        }
        else
        {
            if (!(v3 == 4))
            {
                v2->field_0 = v5;
                return 0;
            }
            else if (v4[3] == 61)
            {
                v2->field_0 = v5;
                v6 = 1;
                return v6;
            }
            else
            {
                v2->field_0 = v5;
                return 0;
            }
        }
    }
    else
    {
        return v6;
    }
}
