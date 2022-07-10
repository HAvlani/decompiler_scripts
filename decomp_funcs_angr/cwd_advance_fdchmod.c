typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_0;

int cwd_advance_fd()
{
    unsigned long long v1;  // rax
    char v2;  // dl
    struct_0 *v3;  // rbx
    unsigned int v4;  // esi
    struct_0 *|unsigned long v5;  // rdi

    v3 = v5;
    if (!(((long long)v2) == 0))
    {
        v5 = (long long)i_ring_push();
        if (((int)v5) < 0)
        {
            v3->field_2c = v4;
            return v5;
        }
        v1 = close(v5);
        v3->field_2c = v4;
        return v1;
    }
    else if (!(((long long)(v5->field_48 & 4)) == 0))
    {
        v3->field_2c = v4;
        return v5;
    }
    else if (((int)v5->field_2c) < 0)
    {
        v3->field_2c = v4;
        return v5;
    }
    else
    {
        v5 = ((long long)v5->field_2c);
        v1 = close(v5);
        v3->field_2c = v4;
        return v1;
    }
}
